#include <tree_sitter/parser.h>
#include <string>
#include <wctype.h>

namespace {

enum {
  COMMENT,
  OCAML,
  STRING_DELIM,
  NULL_CHARACTER
};

struct Scanner {
  bool in_string = false;

  unsigned serialize(char *buffer) {
    *buffer = in_string;
    return 1;
  }

  void deserialize(const char *buffer, unsigned length) {
    in_string = (length > 0) && *buffer;
  }

  void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
  }

  void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    while (iswspace(lexer->lookahead)) {
      skip(lexer);
    }

    if (valid_symbols[OCAML]) {
      lexer->result_symbol = OCAML;
      return scan_ocaml(lexer);
    } else if (!in_string && valid_symbols[COMMENT] && lexer->lookahead == '(') {
      advance(lexer);
      lexer->result_symbol = COMMENT;
      return scan_comment(lexer);
    } else if (valid_symbols[STRING_DELIM] && lexer->lookahead == '"') {
      advance(lexer);
      in_string = !in_string;
      lexer->result_symbol = STRING_DELIM;
      return true;
    } else if (valid_symbols[NULL_CHARACTER] && lexer->lookahead == '\0') {
      return !lexer->eof(lexer);
    }

    return false;
  }

  void scan_string(TSLexer *lexer) {
    for (;;) {
      switch (lexer->lookahead) {
        case '\\':
          advance(lexer);
          advance(lexer);
          break;
        case '"':
          advance(lexer);
          return;
        case '\0':
          if (lexer->eof(lexer)) return;
          advance(lexer);
          break;
        default:
          advance(lexer);
      }
    }
  }

  char scan_character(TSLexer *lexer) {
    char last = 0;

    switch (lexer->lookahead) {
      case '\\':
        advance(lexer);
        if (iswdigit(lexer->lookahead)) {
          advance(lexer);
          for (size_t i = 0; i < 2; i++) {
            if (!iswdigit(lexer->lookahead)) return 0;
            advance(lexer);
          }
        } else {
          switch (lexer->lookahead) {
            case 'x':
              advance(lexer);
              for (size_t i = 0; i < 2; i++) {
                if (!iswdigit(lexer->lookahead) && (towupper(lexer->lookahead) < 'A' || towupper(lexer->lookahead) > 'F')) return 0;
                advance(lexer);
              }
              break;
            case 'o':
              advance(lexer);
              for (size_t i = 0; i < 3; i++) {
                if (!iswdigit(lexer->lookahead) || lexer->lookahead > '7') return 0;
                advance(lexer);
              }
              break;
            case '\'':
            case '"':
            case '\\':
            case 'n':
            case 't':
            case 'b':
            case 'r':
            case ' ':
              last = lexer->lookahead;
              advance(lexer);
              break;
            default:
              return 0;
          }
        }
        break;
      case '\'':
        break;
      case '\0':
        if (lexer->eof(lexer)) return 0;
        advance(lexer);
        break;
      default:
        last = lexer->lookahead;
        advance(lexer);
    }

    if (lexer->lookahead == '\'') {
      advance(lexer);
      return 0;
    } else {
      return last;
    }
  }

  bool scan_quoted_string(TSLexer *lexer) {
    std::string quoted_string_id;
    size_t i;

    while (iswlower(lexer->lookahead) || lexer->lookahead == '_') {
      quoted_string_id.push_back(lexer->lookahead);
      advance(lexer);
    }

    if (lexer->lookahead != '|') return false;
    advance(lexer);

    for (;;) {
      switch (lexer->lookahead) {
        case '|':
          advance(lexer);
          for (i = 0; i < quoted_string_id.size(); i++) {
            if (lexer->lookahead != quoted_string_id[i]) break;
            advance(lexer);
          }
          if (i == quoted_string_id.size() && lexer->lookahead == '}') return true;
          break;
        case '\0':
          if (lexer->eof(lexer)) return false;
          advance(lexer);
          break;
        default:
          advance(lexer);
      }
    }
  }

  bool scan_identifier(TSLexer *lexer) {
    if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
      advance(lexer);
      while (iswalnum(lexer->lookahead) || lexer->lookahead == '_' || lexer->lookahead == '\'') {
        advance(lexer);
      }
      return true;
    }
    return false;
  }

  bool scan_extattrident(TSLexer *lexer) {
    while (scan_identifier(lexer)) {
      if (lexer->lookahead != '.') return true;
    }
    return false;
  }

  bool scan_comment(TSLexer *lexer) {
    char last = 0;

    if (lexer->lookahead != '*') return false;
    advance(lexer);

    for (;;) {
      switch (last ? last : lexer->lookahead) {
        case '(':
          if (last) last = 0; else advance(lexer);
          scan_comment(lexer);
          break;
        case '*':
          if (last) last = 0; else advance(lexer);
          if (lexer->lookahead == ')') {
            advance(lexer);
            return true;
          }
          break;
        case '\'':
          if (last) last = 0; else advance(lexer);
          last = scan_character(lexer);
          break;
        case '"':
          if (last) last = 0; else advance(lexer);
          scan_string(lexer);
          break;
        case '{':
          if (last) last = 0; else advance(lexer);
          if (lexer->lookahead == '%') {
            advance(lexer);
            if (lexer->lookahead == '%') advance(lexer);
            if (scan_extattrident(lexer)) {
              while (iswspace(lexer->lookahead)) advance(lexer);
            } else {
              break;
            }
          }
          if (scan_quoted_string(lexer)) advance(lexer);
          break;
        case '\0':
          if (lexer->eof(lexer)) return false;
          if (last) last = 0; else advance(lexer);
          break;
        default:
          if (scan_identifier(lexer) || last) last = 0; else advance(lexer);
      }
    }
  }

  bool scan_ocaml(TSLexer *lexer) {
    for (;;) {
      switch (lexer->lookahead) {
        case '(':
          advance(lexer);
          scan_comment(lexer);
          break;
        case '\'':
          advance(lexer);
          scan_character(lexer);
          break;
        case '"':
          advance(lexer);
          scan_string(lexer);
          break;
        case '{':
          advance(lexer);
          if (lexer->lookahead == '%') {
            advance(lexer);
            if (lexer->lookahead == '%') advance(lexer);
            if (scan_extattrident(lexer)) {
              while (iswspace(lexer->lookahead)) advance(lexer);
            } else {
              break;
            }
          }
          if (!scan_quoted_string(lexer) && !scan_ocaml(lexer)) return false;
          advance(lexer);
          break;
        case '}':
          return true;
        case '\0':
          if (lexer->eof(lexer)) return false;
          advance(lexer);
          break;
        default:
          if (!scan_identifier(lexer)) advance(lexer);
      }
    }
  }
};

}

extern "C" {

void *tree_sitter_ocamllex_external_scanner_create() {
  return new Scanner();
}

void tree_sitter_ocamllex_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

unsigned tree_sitter_ocamllex_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_ocamllex_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

bool tree_sitter_ocamllex_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

}

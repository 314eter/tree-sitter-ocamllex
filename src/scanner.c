#include <ctype.h>
#include <tree_sitter/parser.h>

enum {
  COMMENT,
  STRING_DELIM,
  OCAML
};

void *tree_sitter_ocamllex_external_scanner_create() {
  return malloc(sizeof(bool));
}

void tree_sitter_ocamllex_external_scanner_destroy(void *payload) {
  free(payload);
}

unsigned tree_sitter_ocamllex_external_scanner_serialize(void *payload, char *buffer) {
  *buffer = *(bool*)payload;
  return 1;
}

void tree_sitter_ocamllex_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  *(bool*)payload = (length > 0) ? (bool)*buffer : false;
}

static void scan_comment(TSLexer *lexer) {
  int depth = 1;

  while (depth != 0) {
    switch (lexer->lookahead) {
      case '(':
        lexer->advance(lexer, false);
        if (lexer->lookahead == '*') {
          lexer->advance(lexer, false);
          depth++;
        }
        break;
      case '*':
        lexer->advance(lexer, false);
        if (lexer->lookahead == ')') {
          lexer->advance(lexer, false);
          depth--;
        }
        break;
      case '\0':
        return;
      default:
        lexer->advance(lexer, false);
    }
  }
}

static void scan_string(TSLexer *lexer) {
  for (;;) {
    switch (lexer->lookahead) {
      case '\\':
        lexer->advance(lexer, false);
        lexer->advance(lexer, false);
        break;
      case '"':
        lexer->advance(lexer, false);
      case '\0':
        return;
      default:
        lexer->advance(lexer, false);
    }
  }
}

static void scan_ocaml(TSLexer *lexer) {
  int depth = 1;

  for (;;) {
    switch (lexer->lookahead) {
      case '(':
        lexer->advance(lexer, false);
        if (lexer->lookahead == '*') {
          lexer->advance(lexer, false);
          scan_comment(lexer);
        }
        break;
      case '\'':
        lexer->advance(lexer, false);
        lexer->advance(lexer, false);
        break;
      case '"':
        lexer->advance(lexer, false);
        scan_string(lexer);
        break;
      case '{':
        lexer->advance(lexer, false);
        depth++;
        break;
      case '}':
        if (depth == 1) return;
        lexer->advance(lexer, false);
        depth--;
        break;
      case '\0':
        return;
      default:
        lexer->advance(lexer, false);
    }
  }
}

bool tree_sitter_ocamllex_external_scanner_scan(void *payload, TSLexer *lexer, const bool *whitelist) {
  bool in_string = *(bool*)payload;

  while (isspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }

  if (whitelist[OCAML]) {
    scan_ocaml(lexer);
    lexer->result_symbol = OCAML;
    return true;
  } else if (whitelist[STRING_DELIM] && lexer->lookahead == '"') {
    lexer->advance(lexer, false);
    *(bool*)payload = !in_string;
    lexer->result_symbol = STRING_DELIM;
    return true;
  } else if (!in_string && whitelist[COMMENT] && lexer->lookahead == '(') {
    lexer->advance(lexer, false);
    if (lexer->lookahead != '*') return false;
    lexer->advance(lexer, false);

    scan_comment(lexer);
    lexer->result_symbol = COMMENT;
    return true;
  }

  return false;
}

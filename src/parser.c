#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 109
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 3
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym__identifier = 1,
  anon_sym_rule = 2,
  anon_sym_and = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_let = 6,
  anon_sym_EQ = 7,
  anon_sym__ = 8,
  anon_sym_eof = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_character_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token1 = 13,
  aux_sym_string_token2 = 14,
  aux_sym_string_token3 = 15,
  aux_sym_escape_sequence_token1 = 16,
  aux_sym_escape_sequence_token2 = 17,
  aux_sym_escape_sequence_token3 = 18,
  aux_sym_escape_sequence_token4 = 19,
  anon_sym_LBRACK = 20,
  anon_sym_CARET = 21,
  anon_sym_RBRACK = 22,
  anon_sym_DASH = 23,
  anon_sym_POUND = 24,
  anon_sym_STAR = 25,
  anon_sym_PLUS = 26,
  anon_sym_QMARK = 27,
  anon_sym_PIPE = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_as = 31,
  anon_sym_refill = 32,
  anon_sym_parse = 33,
  anon_sym_shortest = 34,
  sym_comment = 35,
  sym_ocaml = 36,
  sym_lexer_definition = 37,
  sym_action = 38,
  sym_named_regexp = 39,
  sym__regexp = 40,
  sym_character = 41,
  sym_string = 42,
  sym_escape_sequence = 43,
  sym_character_set = 44,
  sym_character_range = 45,
  sym_regexp_difference = 46,
  sym_regexp_repetition = 47,
  sym_regexp_strict_repetition = 48,
  sym_regexp_option = 49,
  sym_regexp_alternative = 50,
  sym_regexp_concatenation = 51,
  sym_parenthesized_regexp = 52,
  sym_aliased_regexp = 53,
  sym_refill_handler = 54,
  sym_lexer_entry = 55,
  sym_lexer_case = 56,
  aux_sym_lexer_definition_repeat1 = 57,
  aux_sym_lexer_definition_repeat2 = 58,
  aux_sym_string_repeat1 = 59,
  aux_sym_character_set_repeat1 = 60,
  aux_sym_lexer_entry_repeat1 = 61,
  aux_sym_lexer_entry_repeat2 = 62,
  alias_sym_regexp_name = 63,
  alias_sym_lexer_argument = 64,
  alias_sym_lexer_entry_name = 65,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_rule] = "rule",
  [anon_sym_and] = "and",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym__] = "any",
  [anon_sym_eof] = "eof",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_character_token1] = "character_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "escape_sequence",
  [aux_sym_string_token3] = "escape_sequence",
  [aux_sym_escape_sequence_token1] = "escape_sequence_token1",
  [aux_sym_escape_sequence_token2] = "escape_sequence_token2",
  [aux_sym_escape_sequence_token3] = "escape_sequence_token3",
  [aux_sym_escape_sequence_token4] = "escape_sequence_token4",
  [anon_sym_LBRACK] = "[",
  [anon_sym_CARET] = "^",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [anon_sym_POUND] = "#",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_QMARK] = "?",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_as] = "as",
  [anon_sym_refill] = "refill",
  [anon_sym_parse] = "parse",
  [anon_sym_shortest] = "shortest",
  [sym_comment] = "comment",
  [sym_ocaml] = "ocaml",
  [sym_lexer_definition] = "lexer_definition",
  [sym_action] = "action",
  [sym_named_regexp] = "named_regexp",
  [sym__regexp] = "_regexp",
  [sym_character] = "character",
  [sym_string] = "string",
  [sym_escape_sequence] = "escape_sequence",
  [sym_character_set] = "character_set",
  [sym_character_range] = "character_range",
  [sym_regexp_difference] = "regexp_difference",
  [sym_regexp_repetition] = "regexp_repetition",
  [sym_regexp_strict_repetition] = "regexp_strict_repetition",
  [sym_regexp_option] = "regexp_option",
  [sym_regexp_alternative] = "regexp_alternative",
  [sym_regexp_concatenation] = "regexp_concatenation",
  [sym_parenthesized_regexp] = "parenthesized_regexp",
  [sym_aliased_regexp] = "aliased_regexp",
  [sym_refill_handler] = "refill_handler",
  [sym_lexer_entry] = "lexer_entry",
  [sym_lexer_case] = "lexer_case",
  [aux_sym_lexer_definition_repeat1] = "lexer_definition_repeat1",
  [aux_sym_lexer_definition_repeat2] = "lexer_definition_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_character_set_repeat1] = "character_set_repeat1",
  [aux_sym_lexer_entry_repeat1] = "lexer_entry_repeat1",
  [aux_sym_lexer_entry_repeat2] = "lexer_entry_repeat2",
  [alias_sym_regexp_name] = "regexp_name",
  [alias_sym_lexer_argument] = "lexer_argument",
  [alias_sym_lexer_entry_name] = "lexer_entry_name",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_eof] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_sequence_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_refill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shortest] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ocaml] = {
    .visible = true,
    .named = true,
  },
  [sym_lexer_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_named_regexp] = {
    .visible = true,
    .named = true,
  },
  [sym__regexp] = {
    .visible = false,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_character_set] = {
    .visible = true,
    .named = true,
  },
  [sym_character_range] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_difference] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_repetition] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_strict_repetition] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_option] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_alternative] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_regexp] = {
    .visible = true,
    .named = true,
  },
  [sym_aliased_regexp] = {
    .visible = true,
    .named = true,
  },
  [sym_refill_handler] = {
    .visible = true,
    .named = true,
  },
  [sym_lexer_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_lexer_case] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lexer_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lexer_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lexer_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lexer_entry_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_regexp_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_lexer_argument] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_lexer_entry_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_lexer_argument,
  },
  [2] = {
    [0] = alias_sym_regexp_name,
  },
  [3] = {
    [1] = alias_sym_regexp_name,
  },
  [4] = {
    [0] = alias_sym_lexer_entry_name,
  },
  [5] = {
    [2] = alias_sym_regexp_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '?')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(12);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == '^')
        ADVANCE(15);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      if (lookahead == '\n')
        ADVANCE(20);
      if (lookahead == 'o')
        ADVANCE(21);
      if (lookahead == 'u')
        ADVANCE(22);
      if (lookahead == 'x')
        ADVANCE(23);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '{')
        ADVANCE(27);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token1);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(30);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(32);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == '}')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token3);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_escape_sequence_token4);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '?')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == '}')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      END_STATE();
    case 39:
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '^')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '?')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'o')
        ADVANCE(21);
      if (lookahead == 'x')
        ADVANCE(23);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 45:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(8);
      if (lookahead == '?')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(12);
      if (lookahead == '|')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == '_')
        ADVANCE(1);
      if (lookahead == 'a')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == 'l')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(5);
      if (lookahead == 'r')
        ADVANCE(6);
      if (lookahead == 's')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'n')
        ADVANCE(8);
      if (lookahead == 's')
        ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'o')
        ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'e')
        ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'a')
        ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'e')
        ADVANCE(13);
      if (lookahead == 'u')
        ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'h')
        ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'd')
        ADVANCE(16);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 10:
      if (lookahead == 'f')
        ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 't')
        ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'r')
        ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'f')
        ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'l')
        ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'o')
        ADVANCE(22);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_eof);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 19:
      if (lookahead == 's')
        ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'i')
        ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'r')
        ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'l')
        ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 26:
      if (lookahead == 't')
        ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_parse);
      END_STATE();
    case 28:
      if (lookahead == 'l')
        ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'e')
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_refill);
      END_STATE();
    case 31:
      if (lookahead == 's')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 't')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_shortest);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36, .external_lex_state = 2},
  [2] = {.lex_state = 36, .external_lex_state = 2},
  [3] = {.lex_state = 36, .external_lex_state = 2},
  [4] = {.lex_state = 36, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 36, .external_lex_state = 2},
  [7] = {.lex_state = 36, .external_lex_state = 2},
  [8] = {.lex_state = 36, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 37, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 37, .external_lex_state = 2},
  [13] = {.lex_state = 36, .external_lex_state = 2},
  [14] = {.lex_state = 38, .external_lex_state = 2},
  [15] = {.lex_state = 36, .external_lex_state = 2},
  [16] = {.lex_state = 36, .external_lex_state = 2},
  [17] = {.lex_state = 36, .external_lex_state = 2},
  [18] = {.lex_state = 36, .external_lex_state = 2},
  [19] = {.lex_state = 36, .external_lex_state = 4},
  [20] = {.lex_state = 38, .external_lex_state = 2},
  [21] = {.lex_state = 37, .external_lex_state = 2},
  [22] = {.lex_state = 36, .external_lex_state = 2},
  [23] = {.lex_state = 37, .external_lex_state = 2},
  [24] = {.lex_state = 36, .external_lex_state = 2},
  [25] = {.lex_state = 36, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 36, .external_lex_state = 2},
  [28] = {.lex_state = 36, .external_lex_state = 2},
  [29] = {.lex_state = 36, .external_lex_state = 2},
  [30] = {.lex_state = 36, .external_lex_state = 2},
  [31] = {.lex_state = 39, .external_lex_state = 2},
  [32] = {.lex_state = 40, .external_lex_state = 4},
  [33] = {.lex_state = 36, .external_lex_state = 4},
  [34] = {.lex_state = 41, .external_lex_state = 2},
  [35] = {.lex_state = 45, .external_lex_state = 4},
  [36] = {.lex_state = 36, .external_lex_state = 4},
  [37] = {.lex_state = 36, .external_lex_state = 2},
  [38] = {.lex_state = 36, .external_lex_state = 4},
  [39] = {.lex_state = 36, .external_lex_state = 2},
  [40] = {.lex_state = 37, .external_lex_state = 2},
  [41] = {.lex_state = 36, .external_lex_state = 2},
  [42] = {.lex_state = 36, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 36, .external_lex_state = 2},
  [45] = {.lex_state = 36, .external_lex_state = 2},
  [46] = {.lex_state = 36, .external_lex_state = 2},
  [47] = {.lex_state = 41, .external_lex_state = 2},
  [48] = {.lex_state = 36, .external_lex_state = 2},
  [49] = {.lex_state = 48, .external_lex_state = 2},
  [50] = {.lex_state = 48, .external_lex_state = 2},
  [51] = {.lex_state = 49, .external_lex_state = 4},
  [52] = {.lex_state = 36, .external_lex_state = 2},
  [53] = {.lex_state = 36, .external_lex_state = 2},
  [54] = {.lex_state = 45, .external_lex_state = 4},
  [55] = {.lex_state = 40, .external_lex_state = 4},
  [56] = {.lex_state = 45, .external_lex_state = 4},
  [57] = {.lex_state = 40, .external_lex_state = 4},
  [58] = {.lex_state = 40, .external_lex_state = 4},
  [59] = {.lex_state = 40, .external_lex_state = 4},
  [60] = {.lex_state = 36, .external_lex_state = 2},
  [61] = {.lex_state = 36, .external_lex_state = 4},
  [62] = {.lex_state = 36, .external_lex_state = 4},
  [63] = {.lex_state = 36, .external_lex_state = 4},
  [64] = {.lex_state = 36, .external_lex_state = 4},
  [65] = {.lex_state = 36, .external_lex_state = 4},
  [66] = {.lex_state = 36, .external_lex_state = 2},
  [67] = {.lex_state = 36, .external_lex_state = 4},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 36, .external_lex_state = 2},
  [70] = {.lex_state = 36, .external_lex_state = 2},
  [71] = {.lex_state = 36, .external_lex_state = 2},
  [72] = {.lex_state = 48, .external_lex_state = 2},
  [73] = {.lex_state = 40, .external_lex_state = 4},
  [74] = {.lex_state = 48, .external_lex_state = 2},
  [75] = {.lex_state = 36, .external_lex_state = 2},
  [76] = {.lex_state = 36, .external_lex_state = 4},
  [77] = {.lex_state = 40, .external_lex_state = 4},
  [78] = {.lex_state = 36, .external_lex_state = 4},
  [79] = {.lex_state = 49, .external_lex_state = 4},
  [80] = {.lex_state = 40, .external_lex_state = 4},
  [81] = {.lex_state = 40, .external_lex_state = 4},
  [82] = {.lex_state = 45, .external_lex_state = 4},
  [83] = {.lex_state = 40, .external_lex_state = 4},
  [84] = {.lex_state = 36, .external_lex_state = 4},
  [85] = {.lex_state = 36, .external_lex_state = 4},
  [86] = {.lex_state = 36, .external_lex_state = 2},
  [87] = {.lex_state = 36, .external_lex_state = 4},
  [88] = {.lex_state = 36, .external_lex_state = 4},
  [89] = {.lex_state = 36, .external_lex_state = 4},
  [90] = {.lex_state = 36, .external_lex_state = 2},
  [91] = {.lex_state = 36, .external_lex_state = 4},
  [92] = {.lex_state = 36, .external_lex_state = 2},
  [93] = {.lex_state = 36, .external_lex_state = 4},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 36, .external_lex_state = 2},
  [96] = {.lex_state = 48, .external_lex_state = 2},
  [97] = {.lex_state = 40, .external_lex_state = 4},
  [98] = {.lex_state = 48, .external_lex_state = 2},
  [99] = {.lex_state = 49, .external_lex_state = 4},
  [100] = {.lex_state = 49, .external_lex_state = 4},
  [101] = {.lex_state = 36, .external_lex_state = 2},
  [102] = {.lex_state = 36, .external_lex_state = 4},
  [103] = {.lex_state = 36, .external_lex_state = 4},
  [104] = {.lex_state = 36, .external_lex_state = 2},
  [105] = {.lex_state = 36, .external_lex_state = 2},
  [106] = {.lex_state = 36, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 36, .external_lex_state = 2},
};

enum {
  ts_external_token_comment = 0,
  ts_external_token_DQUOTE = 1,
  ts_external_token_ocaml = 2,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_DQUOTE] = anon_sym_DQUOTE,
  [ts_external_token_ocaml] = sym_ocaml,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
    [ts_external_token_DQUOTE] = true,
    [ts_external_token_ocaml] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_comment] = true,
    [ts_external_token_ocaml] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token_DQUOTE] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(3),
    [anon_sym_shortest] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [aux_sym_string_token3] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_eof] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(3),
    [anon_sym_refill] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [aux_sym_escape_sequence_token3] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [sym__identifier] = ACTIONS(3),
    [aux_sym_escape_sequence_token1] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_rule] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_parse] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(3),
    [aux_sym_escape_sequence_token4] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_ocaml] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [aux_sym_escape_sequence_token2] = ACTIONS(3),
    [aux_sym_string_token2] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_as] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
  },
  [1] = {
    [sym_action] = STATE(7),
    [sym_refill_handler] = STATE(6),
    [aux_sym_lexer_definition_repeat1] = STATE(8),
    [sym_named_regexp] = STATE(8),
    [sym_lexer_definition] = STATE(9),
    [anon_sym_let] = ACTIONS(5),
    [sym_comment] = ACTIONS(1),
    [anon_sym_refill] = ACTIONS(7),
    [anon_sym_rule] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [2] = {
    [sym_comment] = ACTIONS(1),
    [sym__identifier] = ACTIONS(13),
  },
  [3] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(15),
  },
  [4] = {
    [sym_lexer_entry] = STATE(13),
    [sym_comment] = ACTIONS(1),
    [sym__identifier] = ACTIONS(17),
  },
  [5] = {
    [sym_comment] = ACTIONS(1),
    [sym_ocaml] = ACTIONS(19),
  },
  [6] = {
    [anon_sym_rule] = ACTIONS(21),
    [sym_comment] = ACTIONS(1),
  },
  [7] = {
    [sym_named_regexp] = STATE(16),
    [aux_sym_lexer_definition_repeat1] = STATE(16),
    [sym_refill_handler] = STATE(17),
    [anon_sym_let] = ACTIONS(5),
    [sym_comment] = ACTIONS(1),
    [anon_sym_refill] = ACTIONS(7),
    [anon_sym_rule] = ACTIONS(21),
  },
  [8] = {
    [sym_named_regexp] = STATE(18),
    [aux_sym_lexer_definition_repeat1] = STATE(18),
    [sym_refill_handler] = STATE(17),
    [anon_sym_let] = ACTIONS(5),
    [sym_comment] = ACTIONS(1),
    [anon_sym_refill] = ACTIONS(7),
    [anon_sym_rule] = ACTIONS(21),
  },
  [9] = {
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [10] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(25),
  },
  [11] = {
    [sym_comment] = ACTIONS(1),
    [sym_ocaml] = ACTIONS(27),
  },
  [12] = {
    [aux_sym_lexer_entry_repeat1] = STATE(23),
    [sym_comment] = ACTIONS(1),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(31),
  },
  [13] = {
    [aux_sym_lexer_definition_repeat2] = STATE(25),
    [sym_action] = STATE(26),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [14] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(37),
  },
  [15] = {
    [sym_lexer_entry] = STATE(28),
    [sym_comment] = ACTIONS(1),
    [sym__identifier] = ACTIONS(17),
  },
  [16] = {
    [sym_named_regexp] = STATE(18),
    [aux_sym_lexer_definition_repeat1] = STATE(18),
    [sym_refill_handler] = STATE(30),
    [anon_sym_let] = ACTIONS(5),
    [sym_comment] = ACTIONS(1),
    [anon_sym_refill] = ACTIONS(7),
    [anon_sym_rule] = ACTIONS(39),
  },
  [17] = {
    [anon_sym_rule] = ACTIONS(39),
    [sym_comment] = ACTIONS(1),
  },
  [18] = {
    [sym_named_regexp] = STATE(18),
    [aux_sym_lexer_definition_repeat1] = STATE(18),
    [anon_sym_let] = ACTIONS(41),
    [sym_comment] = ACTIONS(1),
    [anon_sym_refill] = ACTIONS(44),
    [anon_sym_rule] = ACTIONS(44),
  },
  [19] = {
    [sym_regexp_concatenation] = STATE(36),
    [sym__regexp] = STATE(36),
    [sym_character] = STATE(36),
    [sym_regexp_difference] = STATE(36),
    [sym_regexp_repetition] = STATE(36),
    [sym_parenthesized_regexp] = STATE(36),
    [sym_aliased_regexp] = STATE(36),
    [sym_string] = STATE(36),
    [sym_regexp_strict_repetition] = STATE(36),
    [sym_regexp_option] = STATE(36),
    [sym_character_set] = STATE(36),
    [sym_regexp_alternative] = STATE(36),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(50),
  },
  [20] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(58),
  },
  [21] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(60),
    [sym__identifier] = ACTIONS(60),
  },
  [22] = {
    [anon_sym_shortest] = ACTIONS(62),
    [sym_comment] = ACTIONS(1),
    [anon_sym_parse] = ACTIONS(62),
  },
  [23] = {
    [aux_sym_lexer_entry_repeat1] = STATE(40),
    [sym_comment] = ACTIONS(1),
    [sym__identifier] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(64),
  },
  [24] = {
    [sym_lexer_entry] = STATE(41),
    [sym_comment] = ACTIONS(1),
    [sym__identifier] = ACTIONS(17),
  },
  [25] = {
    [aux_sym_lexer_definition_repeat2] = STATE(42),
    [sym_action] = STATE(43),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [26] = {
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(66),
  },
  [27] = {
    [anon_sym_let] = ACTIONS(68),
    [sym_comment] = ACTIONS(1),
    [anon_sym_refill] = ACTIONS(68),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_rule] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_and] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(68),
  },
  [28] = {
    [aux_sym_lexer_definition_repeat2] = STATE(44),
    [sym_action] = STATE(43),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [29] = {
    [sym_lexer_entry] = STATE(45),
    [sym_comment] = ACTIONS(1),
    [sym__identifier] = ACTIONS(17),
  },
  [30] = {
    [anon_sym_rule] = ACTIONS(70),
    [sym_comment] = ACTIONS(1),
  },
  [31] = {
    [aux_sym_character_set_repeat1] = STATE(49),
    [sym_character] = STATE(50),
    [sym_character_range] = STATE(49),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [sym_comment] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(74),
  },
  [32] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_eof] = ACTIONS(76),
    [anon_sym_let] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_refill] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym__identifier] = ACTIONS(76),
    [anon_sym__] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_as] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
  },
  [33] = {
    [sym_regexp_concatenation] = STATE(51),
    [sym__regexp] = STATE(51),
    [sym_character] = STATE(51),
    [sym_regexp_difference] = STATE(51),
    [sym_regexp_repetition] = STATE(51),
    [sym_parenthesized_regexp] = STATE(51),
    [sym_aliased_regexp] = STATE(51),
    [sym_string] = STATE(51),
    [sym_regexp_strict_repetition] = STATE(51),
    [sym_regexp_option] = STATE(51),
    [sym_character_set] = STATE(51),
    [sym_regexp_alternative] = STATE(51),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(80),
  },
  [34] = {
    [sym_escape_sequence] = STATE(53),
    [sym_comment] = ACTIONS(1),
    [aux_sym_escape_sequence_token4] = ACTIONS(82),
    [aux_sym_escape_sequence_token1] = ACTIONS(82),
    [aux_sym_character_token1] = ACTIONS(84),
    [aux_sym_escape_sequence_token3] = ACTIONS(82),
    [aux_sym_escape_sequence_token2] = ACTIONS(82),
  },
  [35] = {
    [sym_escape_sequence] = STATE(56),
    [aux_sym_string_repeat1] = STATE(56),
    [sym_comment] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(86),
    [aux_sym_escape_sequence_token3] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [aux_sym_escape_sequence_token2] = ACTIONS(86),
    [aux_sym_string_token2] = ACTIONS(90),
    [aux_sym_escape_sequence_token4] = ACTIONS(86),
    [aux_sym_string_token1] = ACTIONS(92),
    [aux_sym_string_token3] = ACTIONS(90),
  },
  [36] = {
    [sym_regexp_concatenation] = STATE(63),
    [sym__regexp] = STATE(63),
    [sym_character] = STATE(63),
    [sym_regexp_difference] = STATE(63),
    [sym_regexp_repetition] = STATE(63),
    [sym_parenthesized_regexp] = STATE(63),
    [sym_aliased_regexp] = STATE(63),
    [sym_string] = STATE(63),
    [sym_regexp_strict_repetition] = STATE(63),
    [sym_regexp_option] = STATE(63),
    [sym_character_set] = STATE(63),
    [sym_regexp_alternative] = STATE(63),
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_POUND] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_eof] = ACTIONS(100),
    [anon_sym_let] = ACTIONS(94),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_refill] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_as] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_STAR] = ACTIONS(108),
  },
  [37] = {
    [anon_sym_rule] = ACTIONS(110),
    [sym_comment] = ACTIONS(1),
  },
  [38] = {
    [sym_regexp_concatenation] = STATE(65),
    [sym__regexp] = STATE(65),
    [sym_character] = STATE(65),
    [sym_regexp_difference] = STATE(65),
    [sym_regexp_repetition] = STATE(65),
    [sym_parenthesized_regexp] = STATE(65),
    [sym_aliased_regexp] = STATE(65),
    [sym_string] = STATE(65),
    [sym_lexer_case] = STATE(66),
    [sym_regexp_strict_repetition] = STATE(65),
    [sym_regexp_option] = STATE(65),
    [sym_character_set] = STATE(65),
    [sym_regexp_alternative] = STATE(65),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_PIPE] = ACTIONS(112),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(114),
  },
  [39] = {
    [anon_sym_shortest] = ACTIONS(116),
    [sym_comment] = ACTIONS(1),
    [anon_sym_parse] = ACTIONS(116),
  },
  [40] = {
    [aux_sym_lexer_entry_repeat1] = STATE(40),
    [sym_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(118),
    [sym__identifier] = ACTIONS(120),
  },
  [41] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(123),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
  },
  [42] = {
    [aux_sym_lexer_definition_repeat2] = STATE(42),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(125),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
  },
  [43] = {
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(128),
  },
  [44] = {
    [aux_sym_lexer_definition_repeat2] = STATE(42),
    [sym_action] = STATE(68),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [45] = {
    [aux_sym_lexer_definition_repeat2] = STATE(69),
    [sym_action] = STATE(68),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [46] = {
    [sym_lexer_entry] = STATE(70),
    [sym_comment] = ACTIONS(1),
    [sym__identifier] = ACTIONS(17),
  },
  [47] = {
    [sym_escape_sequence] = STATE(71),
    [sym_comment] = ACTIONS(1),
    [aux_sym_escape_sequence_token4] = ACTIONS(82),
    [aux_sym_escape_sequence_token1] = ACTIONS(82),
    [aux_sym_character_token1] = ACTIONS(130),
    [aux_sym_escape_sequence_token3] = ACTIONS(82),
    [aux_sym_escape_sequence_token2] = ACTIONS(82),
  },
  [48] = {
    [aux_sym_character_set_repeat1] = STATE(72),
    [sym_character] = STATE(50),
    [sym_character_range] = STATE(72),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [sym_comment] = ACTIONS(1),
  },
  [49] = {
    [aux_sym_character_set_repeat1] = STATE(74),
    [sym_character] = STATE(50),
    [sym_character_range] = STATE(74),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(132),
    [sym_comment] = ACTIONS(1),
  },
  [50] = {
    [anon_sym_RBRACK] = ACTIONS(134),
    [sym_comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(136),
  },
  [51] = {
    [sym_regexp_concatenation] = STATE(79),
    [sym__regexp] = STATE(79),
    [sym_character] = STATE(79),
    [sym_regexp_difference] = STATE(79),
    [sym_regexp_repetition] = STATE(79),
    [sym_parenthesized_regexp] = STATE(79),
    [sym_aliased_regexp] = STATE(79),
    [sym_string] = STATE(79),
    [sym_regexp_strict_repetition] = STATE(79),
    [sym_regexp_option] = STATE(79),
    [sym_character_set] = STATE(79),
    [sym_regexp_alternative] = STATE(79),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_POUND] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_eof] = ACTIONS(144),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_as] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_STAR] = ACTIONS(108),
  },
  [52] = {
    [anon_sym_SQUOTE] = ACTIONS(146),
    [sym_comment] = ACTIONS(1),
  },
  [53] = {
    [anon_sym_SQUOTE] = ACTIONS(148),
    [sym_comment] = ACTIONS(1),
  },
  [54] = {
    [sym_comment] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(150),
    [aux_sym_escape_sequence_token3] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [aux_sym_escape_sequence_token2] = ACTIONS(150),
    [aux_sym_string_token2] = ACTIONS(150),
    [aux_sym_escape_sequence_token4] = ACTIONS(150),
    [aux_sym_string_token1] = ACTIONS(146),
    [aux_sym_string_token3] = ACTIONS(150),
  },
  [55] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_eof] = ACTIONS(152),
    [anon_sym_let] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_refill] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [sym__identifier] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_as] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(154),
  },
  [56] = {
    [sym_escape_sequence] = STATE(82),
    [aux_sym_string_repeat1] = STATE(82),
    [sym_comment] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(86),
    [aux_sym_escape_sequence_token3] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [aux_sym_escape_sequence_token2] = ACTIONS(86),
    [aux_sym_string_token2] = ACTIONS(158),
    [aux_sym_escape_sequence_token4] = ACTIONS(86),
    [aux_sym_string_token1] = ACTIONS(160),
    [aux_sym_string_token3] = ACTIONS(158),
  },
  [57] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_POUND] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_eof] = ACTIONS(162),
    [anon_sym_let] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_refill] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [sym__identifier] = ACTIONS(162),
    [anon_sym__] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_as] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(164),
  },
  [58] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_POUND] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_eof] = ACTIONS(166),
    [anon_sym_let] = ACTIONS(166),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_refill] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym__identifier] = ACTIONS(166),
    [anon_sym__] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_as] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(168),
  },
  [59] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_POUND] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_eof] = ACTIONS(170),
    [anon_sym_let] = ACTIONS(170),
    [anon_sym_QMARK] = ACTIONS(172),
    [anon_sym_refill] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [sym__identifier] = ACTIONS(170),
    [anon_sym__] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_as] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(172),
  },
  [60] = {
    [sym_comment] = ACTIONS(1),
    [sym__identifier] = ACTIONS(174),
  },
  [61] = {
    [sym_regexp_concatenation] = STATE(84),
    [sym__regexp] = STATE(84),
    [sym_character] = STATE(84),
    [sym_regexp_difference] = STATE(84),
    [sym_regexp_repetition] = STATE(84),
    [sym_parenthesized_regexp] = STATE(84),
    [sym_aliased_regexp] = STATE(84),
    [sym_string] = STATE(84),
    [sym_regexp_strict_repetition] = STATE(84),
    [sym_regexp_option] = STATE(84),
    [sym_character_set] = STATE(84),
    [sym_regexp_alternative] = STATE(84),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(176),
  },
  [62] = {
    [sym_regexp_concatenation] = STATE(85),
    [sym__regexp] = STATE(85),
    [sym_character] = STATE(85),
    [sym_regexp_difference] = STATE(85),
    [sym_regexp_repetition] = STATE(85),
    [sym_parenthesized_regexp] = STATE(85),
    [sym_aliased_regexp] = STATE(85),
    [sym_string] = STATE(85),
    [sym_regexp_strict_repetition] = STATE(85),
    [sym_regexp_option] = STATE(85),
    [sym_character_set] = STATE(85),
    [sym_regexp_alternative] = STATE(85),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(178),
  },
  [63] = {
    [sym_regexp_concatenation] = STATE(63),
    [sym__regexp] = STATE(63),
    [sym_character] = STATE(63),
    [sym_regexp_difference] = STATE(63),
    [sym_regexp_repetition] = STATE(63),
    [sym_parenthesized_regexp] = STATE(63),
    [sym_aliased_regexp] = STATE(63),
    [sym_string] = STATE(63),
    [sym_regexp_strict_repetition] = STATE(63),
    [sym_regexp_option] = STATE(63),
    [sym_character_set] = STATE(63),
    [sym_regexp_alternative] = STATE(63),
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_POUND] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_eof] = ACTIONS(180),
    [anon_sym_let] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_refill] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [sym__identifier] = ACTIONS(180),
    [anon_sym__] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_as] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(108),
  },
  [64] = {
    [sym_regexp_concatenation] = STATE(65),
    [sym__regexp] = STATE(65),
    [sym_character] = STATE(65),
    [sym_regexp_difference] = STATE(65),
    [sym_regexp_repetition] = STATE(65),
    [sym_parenthesized_regexp] = STATE(65),
    [sym_aliased_regexp] = STATE(65),
    [sym_string] = STATE(65),
    [sym_lexer_case] = STATE(86),
    [sym_regexp_strict_repetition] = STATE(65),
    [sym_regexp_option] = STATE(65),
    [sym_character_set] = STATE(65),
    [sym_regexp_alternative] = STATE(65),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(114),
  },
  [65] = {
    [sym_regexp_concatenation] = STATE(89),
    [sym__regexp] = STATE(89),
    [sym_character] = STATE(89),
    [sym_regexp_difference] = STATE(89),
    [sym_regexp_repetition] = STATE(89),
    [sym_parenthesized_regexp] = STATE(89),
    [sym_aliased_regexp] = STATE(89),
    [sym_string] = STATE(89),
    [sym_regexp_strict_repetition] = STATE(89),
    [sym_regexp_option] = STATE(89),
    [sym_action] = STATE(90),
    [sym_character_set] = STATE(89),
    [sym_regexp_alternative] = STATE(89),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_POUND] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_eof] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_as] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_STAR] = ACTIONS(108),
  },
  [66] = {
    [aux_sym_lexer_entry_repeat2] = STATE(92),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(190),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
  },
  [67] = {
    [sym_regexp_concatenation] = STATE(65),
    [sym__regexp] = STATE(65),
    [sym_character] = STATE(65),
    [sym_regexp_difference] = STATE(65),
    [sym_regexp_repetition] = STATE(65),
    [sym_parenthesized_regexp] = STATE(65),
    [sym_aliased_regexp] = STATE(65),
    [sym_string] = STATE(65),
    [sym_lexer_case] = STATE(86),
    [sym_regexp_strict_repetition] = STATE(65),
    [sym_regexp_option] = STATE(65),
    [sym_character_set] = STATE(65),
    [sym_regexp_alternative] = STATE(65),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [anon_sym_PIPE] = ACTIONS(194),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(114),
  },
  [68] = {
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(196),
  },
  [69] = {
    [aux_sym_lexer_definition_repeat2] = STATE(42),
    [sym_action] = STATE(94),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [70] = {
    [aux_sym_lexer_definition_repeat2] = STATE(95),
    [sym_action] = STATE(94),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [71] = {
    [anon_sym_SQUOTE] = ACTIONS(198),
    [sym_comment] = ACTIONS(1),
  },
  [72] = {
    [aux_sym_character_set_repeat1] = STATE(74),
    [sym_character] = STATE(50),
    [sym_character_range] = STATE(74),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(200),
    [sym_comment] = ACTIONS(1),
  },
  [73] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(204),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_eof] = ACTIONS(202),
    [anon_sym_let] = ACTIONS(202),
    [anon_sym_QMARK] = ACTIONS(204),
    [anon_sym_refill] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [sym__identifier] = ACTIONS(202),
    [anon_sym__] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_as] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(204),
  },
  [74] = {
    [aux_sym_character_set_repeat1] = STATE(74),
    [sym_character] = STATE(50),
    [sym_character_range] = STATE(74),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(209),
    [sym_comment] = ACTIONS(1),
  },
  [75] = {
    [sym_character] = STATE(98),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [sym_comment] = ACTIONS(1),
  },
  [76] = {
    [sym_regexp_concatenation] = STATE(99),
    [sym__regexp] = STATE(99),
    [sym_character] = STATE(99),
    [sym_regexp_difference] = STATE(99),
    [sym_regexp_repetition] = STATE(99),
    [sym_parenthesized_regexp] = STATE(99),
    [sym_aliased_regexp] = STATE(99),
    [sym_string] = STATE(99),
    [sym_regexp_strict_repetition] = STATE(99),
    [sym_regexp_option] = STATE(99),
    [sym_character_set] = STATE(99),
    [sym_regexp_alternative] = STATE(99),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(211),
  },
  [77] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_POUND] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_eof] = ACTIONS(213),
    [anon_sym_let] = ACTIONS(213),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_refill] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [sym__identifier] = ACTIONS(213),
    [anon_sym__] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_as] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(215),
  },
  [78] = {
    [sym_regexp_concatenation] = STATE(100),
    [sym__regexp] = STATE(100),
    [sym_character] = STATE(100),
    [sym_regexp_difference] = STATE(100),
    [sym_regexp_repetition] = STATE(100),
    [sym_parenthesized_regexp] = STATE(100),
    [sym_aliased_regexp] = STATE(100),
    [sym_string] = STATE(100),
    [sym_regexp_strict_repetition] = STATE(100),
    [sym_regexp_option] = STATE(100),
    [sym_character_set] = STATE(100),
    [sym_regexp_alternative] = STATE(100),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(217),
  },
  [79] = {
    [sym_regexp_concatenation] = STATE(79),
    [sym__regexp] = STATE(79),
    [sym_character] = STATE(79),
    [sym_regexp_difference] = STATE(79),
    [sym_regexp_repetition] = STATE(79),
    [sym_parenthesized_regexp] = STATE(79),
    [sym_aliased_regexp] = STATE(79),
    [sym_string] = STATE(79),
    [sym_regexp_strict_repetition] = STATE(79),
    [sym_regexp_option] = STATE(79),
    [sym_character_set] = STATE(79),
    [sym_regexp_alternative] = STATE(79),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_POUND] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_eof] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [sym__identifier] = ACTIONS(180),
    [anon_sym__] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_as] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(108),
  },
  [80] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_eof] = ACTIONS(219),
    [anon_sym_let] = ACTIONS(219),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_refill] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [sym__identifier] = ACTIONS(219),
    [anon_sym__] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_as] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(221),
  },
  [81] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_eof] = ACTIONS(223),
    [anon_sym_let] = ACTIONS(223),
    [anon_sym_QMARK] = ACTIONS(225),
    [anon_sym_refill] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym__identifier] = ACTIONS(223),
    [anon_sym__] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_as] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(225),
  },
  [82] = {
    [sym_escape_sequence] = STATE(82),
    [aux_sym_string_repeat1] = STATE(82),
    [sym_comment] = ACTIONS(1),
    [aux_sym_escape_sequence_token1] = ACTIONS(227),
    [aux_sym_escape_sequence_token3] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_escape_sequence_token2] = ACTIONS(227),
    [aux_sym_string_token2] = ACTIONS(232),
    [aux_sym_escape_sequence_token4] = ACTIONS(227),
    [aux_sym_string_token1] = ACTIONS(235),
    [aux_sym_string_token3] = ACTIONS(232),
  },
  [83] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym_eof] = ACTIONS(238),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_QMARK] = ACTIONS(240),
    [anon_sym_refill] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [sym__identifier] = ACTIONS(238),
    [anon_sym__] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_as] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(240),
  },
  [84] = {
    [sym_regexp_concatenation] = STATE(63),
    [sym__regexp] = STATE(63),
    [sym_character] = STATE(63),
    [sym_regexp_difference] = STATE(63),
    [sym_regexp_repetition] = STATE(63),
    [sym_parenthesized_regexp] = STATE(63),
    [sym_aliased_regexp] = STATE(63),
    [sym_string] = STATE(63),
    [sym_regexp_strict_repetition] = STATE(63),
    [sym_regexp_option] = STATE(63),
    [sym_character_set] = STATE(63),
    [sym_regexp_alternative] = STATE(63),
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_POUND] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_eof] = ACTIONS(100),
    [anon_sym_let] = ACTIONS(242),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_refill] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_as] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_STAR] = ACTIONS(108),
  },
  [85] = {
    [sym_regexp_concatenation] = STATE(63),
    [sym__regexp] = STATE(63),
    [sym_character] = STATE(63),
    [sym_regexp_difference] = STATE(63),
    [sym_regexp_repetition] = STATE(63),
    [sym_parenthesized_regexp] = STATE(63),
    [sym_aliased_regexp] = STATE(63),
    [sym_string] = STATE(63),
    [sym_regexp_strict_repetition] = STATE(63),
    [sym_regexp_option] = STATE(63),
    [sym_character_set] = STATE(63),
    [sym_regexp_alternative] = STATE(63),
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(246),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_POUND] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [anon_sym_eof] = ACTIONS(246),
    [anon_sym_let] = ACTIONS(246),
    [anon_sym_QMARK] = ACTIONS(248),
    [anon_sym_refill] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym__identifier] = ACTIONS(246),
    [anon_sym__] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_as] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
  },
  [86] = {
    [aux_sym_lexer_entry_repeat2] = STATE(101),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(250),
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(192),
  },
  [87] = {
    [sym_regexp_concatenation] = STATE(102),
    [sym__regexp] = STATE(102),
    [sym_character] = STATE(102),
    [sym_regexp_difference] = STATE(102),
    [sym_regexp_repetition] = STATE(102),
    [sym_parenthesized_regexp] = STATE(102),
    [sym_aliased_regexp] = STATE(102),
    [sym_string] = STATE(102),
    [sym_regexp_strict_repetition] = STATE(102),
    [sym_regexp_option] = STATE(102),
    [sym_character_set] = STATE(102),
    [sym_regexp_alternative] = STATE(102),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(252),
  },
  [88] = {
    [sym_regexp_concatenation] = STATE(103),
    [sym__regexp] = STATE(103),
    [sym_character] = STATE(103),
    [sym_regexp_difference] = STATE(103),
    [sym_regexp_repetition] = STATE(103),
    [sym_parenthesized_regexp] = STATE(103),
    [sym_aliased_regexp] = STATE(103),
    [sym_string] = STATE(103),
    [sym_regexp_strict_repetition] = STATE(103),
    [sym_regexp_option] = STATE(103),
    [sym_character_set] = STATE(103),
    [sym_regexp_alternative] = STATE(103),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(254),
  },
  [89] = {
    [sym_regexp_concatenation] = STATE(89),
    [sym__regexp] = STATE(89),
    [sym_character] = STATE(89),
    [sym_regexp_difference] = STATE(89),
    [sym_regexp_repetition] = STATE(89),
    [sym_parenthesized_regexp] = STATE(89),
    [sym_aliased_regexp] = STATE(89),
    [sym_string] = STATE(89),
    [sym_regexp_strict_repetition] = STATE(89),
    [sym_regexp_option] = STATE(89),
    [sym_character_set] = STATE(89),
    [sym_regexp_alternative] = STATE(89),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_POUND] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_eof] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [sym__identifier] = ACTIONS(180),
    [anon_sym__] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_as] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(108),
  },
  [90] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(256),
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
  },
  [91] = {
    [sym_regexp_concatenation] = STATE(65),
    [sym__regexp] = STATE(65),
    [sym_character] = STATE(65),
    [sym_regexp_difference] = STATE(65),
    [sym_regexp_repetition] = STATE(65),
    [sym_parenthesized_regexp] = STATE(65),
    [sym_aliased_regexp] = STATE(65),
    [sym_string] = STATE(65),
    [sym_lexer_case] = STATE(104),
    [sym_regexp_strict_repetition] = STATE(65),
    [sym_regexp_option] = STATE(65),
    [sym_character_set] = STATE(65),
    [sym_regexp_alternative] = STATE(65),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(114),
  },
  [92] = {
    [aux_sym_lexer_entry_repeat2] = STATE(105),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(250),
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(192),
  },
  [93] = {
    [sym_regexp_concatenation] = STATE(65),
    [sym__regexp] = STATE(65),
    [sym_character] = STATE(65),
    [sym_regexp_difference] = STATE(65),
    [sym_regexp_repetition] = STATE(65),
    [sym_parenthesized_regexp] = STATE(65),
    [sym_aliased_regexp] = STATE(65),
    [sym_string] = STATE(65),
    [sym_lexer_case] = STATE(106),
    [sym_regexp_strict_repetition] = STATE(65),
    [sym_regexp_option] = STATE(65),
    [sym_character_set] = STATE(65),
    [sym_regexp_alternative] = STATE(65),
    [sym_comment] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_eof] = ACTIONS(114),
  },
  [94] = {
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(258),
  },
  [95] = {
    [aux_sym_lexer_definition_repeat2] = STATE(42),
    [sym_action] = STATE(107),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(11),
  },
  [96] = {
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_comment] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
  },
  [97] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_POUND] = ACTIONS(262),
    [anon_sym_SQUOTE] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_eof] = ACTIONS(260),
    [anon_sym_let] = ACTIONS(260),
    [anon_sym_QMARK] = ACTIONS(262),
    [anon_sym_refill] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [sym__identifier] = ACTIONS(260),
    [anon_sym__] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_as] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(262),
  },
  [98] = {
    [anon_sym_SQUOTE] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [sym_comment] = ACTIONS(1),
  },
  [99] = {
    [sym_regexp_concatenation] = STATE(79),
    [sym__regexp] = STATE(79),
    [sym_character] = STATE(79),
    [sym_regexp_difference] = STATE(79),
    [sym_regexp_repetition] = STATE(79),
    [sym_parenthesized_regexp] = STATE(79),
    [sym_aliased_regexp] = STATE(79),
    [sym_string] = STATE(79),
    [sym_regexp_strict_repetition] = STATE(79),
    [sym_regexp_option] = STATE(79),
    [sym_character_set] = STATE(79),
    [sym_regexp_alternative] = STATE(79),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_POUND] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_eof] = ACTIONS(144),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_as] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_STAR] = ACTIONS(108),
  },
  [100] = {
    [sym_regexp_concatenation] = STATE(79),
    [sym__regexp] = STATE(79),
    [sym_character] = STATE(79),
    [sym_regexp_difference] = STATE(79),
    [sym_regexp_repetition] = STATE(79),
    [sym_parenthesized_regexp] = STATE(79),
    [sym_aliased_regexp] = STATE(79),
    [sym_string] = STATE(79),
    [sym_regexp_strict_repetition] = STATE(79),
    [sym_regexp_option] = STATE(79),
    [sym_character_set] = STATE(79),
    [sym_regexp_alternative] = STATE(79),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_POUND] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [anon_sym_eof] = ACTIONS(246),
    [anon_sym_QMARK] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym__identifier] = ACTIONS(246),
    [anon_sym__] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_as] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
  },
  [101] = {
    [aux_sym_lexer_entry_repeat2] = STATE(105),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(266),
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(192),
  },
  [102] = {
    [sym_regexp_concatenation] = STATE(89),
    [sym__regexp] = STATE(89),
    [sym_character] = STATE(89),
    [sym_regexp_difference] = STATE(89),
    [sym_regexp_repetition] = STATE(89),
    [sym_parenthesized_regexp] = STATE(89),
    [sym_aliased_regexp] = STATE(89),
    [sym_string] = STATE(89),
    [sym_regexp_strict_repetition] = STATE(89),
    [sym_regexp_option] = STATE(89),
    [sym_character_set] = STATE(89),
    [sym_regexp_alternative] = STATE(89),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_POUND] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_eof] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(46),
    [sym__identifier] = ACTIONS(48),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PLUS] = ACTIONS(104),
    [anon_sym_as] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_STAR] = ACTIONS(108),
  },
  [103] = {
    [sym_regexp_concatenation] = STATE(89),
    [sym__regexp] = STATE(89),
    [sym_character] = STATE(89),
    [sym_regexp_difference] = STATE(89),
    [sym_regexp_repetition] = STATE(89),
    [sym_parenthesized_regexp] = STATE(89),
    [sym_aliased_regexp] = STATE(89),
    [sym_string] = STATE(89),
    [sym_regexp_strict_repetition] = STATE(89),
    [sym_regexp_option] = STATE(89),
    [sym_character_set] = STATE(89),
    [sym_regexp_alternative] = STATE(89),
    [sym_comment] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_POUND] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_eof] = ACTIONS(246),
    [anon_sym_QMARK] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym__identifier] = ACTIONS(246),
    [anon_sym__] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_as] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
  },
  [104] = {
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(268),
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(268),
  },
  [105] = {
    [aux_sym_lexer_entry_repeat2] = STATE(105),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(268),
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
  },
  [106] = {
    [aux_sym_lexer_entry_repeat2] = STATE(108),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(266),
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(192),
  },
  [107] = {
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(273),
  },
  [108] = {
    [aux_sym_lexer_entry_repeat2] = STATE(105),
    [sym_comment] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(275),
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(192),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(10),
  [15] = {.count = 1, .reusable = true}, SHIFT(11),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, SHIFT(15),
  [23] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, SHIFT(19),
  [27] = {.count = 1, .reusable = true}, SHIFT(20),
  [29] = {.count = 1, .reusable = true}, SHIFT(21),
  [31] = {.count = 1, .reusable = true}, SHIFT(22),
  [33] = {.count = 1, .reusable = true}, SHIFT(24),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 2),
  [37] = {.count = 1, .reusable = true}, SHIFT(27),
  [39] = {.count = 1, .reusable = true}, SHIFT(29),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat1, 2),
  [46] = {.count = 1, .reusable = true}, SHIFT(35),
  [48] = {.count = 1, .reusable = false}, SHIFT(32),
  [50] = {.count = 1, .reusable = false}, SHIFT(36),
  [52] = {.count = 1, .reusable = true}, SHIFT(33),
  [54] = {.count = 1, .reusable = true}, SHIFT(34),
  [56] = {.count = 1, .reusable = true}, SHIFT(31),
  [58] = {.count = 1, .reusable = true}, SHIFT(37),
  [60] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat1, 1, .alias_sequence_id = 1),
  [62] = {.count = 1, .reusable = true}, SHIFT(38),
  [64] = {.count = 1, .reusable = true}, SHIFT(39),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 3),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_action, 3),
  [70] = {.count = 1, .reusable = true}, SHIFT(46),
  [72] = {.count = 1, .reusable = true}, SHIFT(47),
  [74] = {.count = 1, .reusable = true}, SHIFT(48),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym__regexp, 1, .alias_sequence_id = 2),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym__regexp, 1, .alias_sequence_id = 2),
  [80] = {.count = 1, .reusable = false}, SHIFT(51),
  [82] = {.count = 1, .reusable = false}, SHIFT(52),
  [84] = {.count = 1, .reusable = true}, SHIFT(53),
  [86] = {.count = 1, .reusable = false}, SHIFT(54),
  [88] = {.count = 1, .reusable = false}, SHIFT(55),
  [90] = {.count = 1, .reusable = false}, SHIFT(56),
  [92] = {.count = 1, .reusable = true}, SHIFT(56),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_named_regexp, 4, .alias_sequence_id = 3),
  [96] = {.count = 1, .reusable = true}, SHIFT(61),
  [98] = {.count = 1, .reusable = true}, SHIFT(62),
  [100] = {.count = 1, .reusable = false}, SHIFT(63),
  [102] = {.count = 1, .reusable = true}, SHIFT(59),
  [104] = {.count = 1, .reusable = true}, SHIFT(58),
  [106] = {.count = 1, .reusable = false}, SHIFT(60),
  [108] = {.count = 1, .reusable = true}, SHIFT(57),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_refill_handler, 4),
  [112] = {.count = 1, .reusable = true}, SHIFT(64),
  [114] = {.count = 1, .reusable = false}, SHIFT(65),
  [116] = {.count = 1, .reusable = true}, SHIFT(67),
  [118] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat1, 2),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat1, 2), SHIFT_REPEAT(21),
  [123] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat2, 2),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat2, 2), SHIFT_REPEAT(24),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 4),
  [130] = {.count = 1, .reusable = true}, SHIFT(71),
  [132] = {.count = 1, .reusable = true}, SHIFT(73),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 1),
  [136] = {.count = 1, .reusable = true}, SHIFT(75),
  [138] = {.count = 1, .reusable = true}, SHIFT(76),
  [140] = {.count = 1, .reusable = true}, SHIFT(77),
  [142] = {.count = 1, .reusable = true}, SHIFT(78),
  [144] = {.count = 1, .reusable = false}, SHIFT(79),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_escape_sequence, 1),
  [148] = {.count = 1, .reusable = true}, SHIFT(80),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_escape_sequence, 1),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [156] = {.count = 1, .reusable = false}, SHIFT(81),
  [158] = {.count = 1, .reusable = false}, SHIFT(82),
  [160] = {.count = 1, .reusable = true}, SHIFT(82),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_repetition, 2),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_repetition, 2),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_strict_repetition, 2),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_strict_repetition, 2),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_option, 2),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_option, 2),
  [174] = {.count = 1, .reusable = true}, SHIFT(83),
  [176] = {.count = 1, .reusable = false}, SHIFT(84),
  [178] = {.count = 1, .reusable = false}, SHIFT(85),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_concatenation, 2),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_concatenation, 2),
  [184] = {.count = 1, .reusable = true}, SHIFT(87),
  [186] = {.count = 1, .reusable = true}, SHIFT(88),
  [188] = {.count = 1, .reusable = false}, SHIFT(89),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 4, .alias_sequence_id = 4),
  [192] = {.count = 1, .reusable = true}, SHIFT(91),
  [194] = {.count = 1, .reusable = true}, SHIFT(93),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 5),
  [198] = {.count = 1, .reusable = true}, SHIFT(96),
  [200] = {.count = 1, .reusable = true}, SHIFT(97),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_character_set, 3),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_character_set, 3),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 2), SHIFT_REPEAT(47),
  [209] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 2),
  [211] = {.count = 1, .reusable = false}, SHIFT(99),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_regexp, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_regexp, 3),
  [217] = {.count = 1, .reusable = false}, SHIFT(100),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [227] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(54),
  [230] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(82),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(82),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_aliased_regexp, 3, .alias_sequence_id = 5),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_aliased_regexp, 3, .alias_sequence_id = 5),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_alternative, 3),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_alternative, 3),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_difference, 3),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_difference, 3),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 5, .alias_sequence_id = 4),
  [252] = {.count = 1, .reusable = false}, SHIFT(102),
  [254] = {.count = 1, .reusable = false}, SHIFT(103),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_case, 2),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 6),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_character_set, 4),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_character_set, 4),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_character_range, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 6, .alias_sequence_id = 4),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat2, 2),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat2, 2), SHIFT_REPEAT(91),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 7),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 7, .alias_sequence_id = 4),
};

void *tree_sitter_ocamllex_external_scanner_create();
void tree_sitter_ocamllex_external_scanner_destroy(void *);
bool tree_sitter_ocamllex_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ocamllex_external_scanner_serialize(void *, char *);
void tree_sitter_ocamllex_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ocamllex() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_ocamllex_external_scanner_create,
      tree_sitter_ocamllex_external_scanner_destroy,
      tree_sitter_ocamllex_external_scanner_scan,
      tree_sitter_ocamllex_external_scanner_serialize,
      tree_sitter_ocamllex_external_scanner_deserialize,
    },
  };
  return &language;
}

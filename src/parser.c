#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 112
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 6
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_comment = 1,
  sym_ocaml = 2,
  anon_sym_rule = 3,
  anon_sym_and = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_let = 7,
  anon_sym_EQ = 8,
  anon_sym__ = 9,
  anon_sym_eof = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH = 14,
  aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH = 15,
  aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH = 16,
  aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH = 17,
  aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH = 18,
  aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH = 19,
  aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH = 20,
  anon_sym_LBRACK = 21,
  anon_sym_CARET = 22,
  anon_sym_RBRACK = 23,
  anon_sym_DASH = 24,
  anon_sym_POUND = 25,
  anon_sym_STAR = 26,
  anon_sym_PLUS = 27,
  anon_sym_QMARK = 28,
  anon_sym_PIPE = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_as = 32,
  anon_sym_refill = 33,
  anon_sym_parse = 34,
  anon_sym_shortest = 35,
  sym__identifier = 36,
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
  alias_sym_any = 63,
  alias_sym_eof = 64,
  alias_sym_escape_sequence = 65,
  alias_sym_lexer_argument = 66,
  alias_sym_lexer_entry_name = 67,
  alias_sym_regexp_name = 68,
};

static const char *ts_symbol_names[] = {
  [sym_comment] = "comment",
  [sym_ocaml] = "ocaml",
  [ts_builtin_sym_end] = "END",
  [anon_sym_rule] = "rule",
  [anon_sym_and] = "and",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym__] = "_",
  [anon_sym_eof] = "eof",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = "/[^\\\\']/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = "/[^\\\\\"]+/",
  [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = "/\\\\u\\{[0-9A-Fa-f]+\\}/",
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = "/\\\\\\n[\\t ]*/",
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = "/\\\\[\\\\\"'ntbr ]/",
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = "/\\\\[0-9][0-9][0-9]/",
  [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = "/\\\\x[0-9A-Fa-f][0-9A-Fa-f]/",
  [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = "/\\\\o[0-3][0-7][0-7]/",
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
  [sym__identifier] = "_identifier",
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
  [alias_sym_any] = "any",
  [alias_sym_eof] = "eof",
  [alias_sym_escape_sequence] = "escape_sequence",
  [alias_sym_lexer_argument] = "lexer_argument",
  [alias_sym_lexer_entry_name] = "lexer_entry_name",
  [alias_sym_regexp_name] = "regexp_name",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_ocaml] = {
    .visible = true,
    .named = true,
  },
  [ts_builtin_sym_end] = {
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
    .named = false,
  },
  [anon_sym_eof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = {
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
  [sym__identifier] = {
    .visible = false,
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
  [alias_sym_any] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_eof] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_escape_sequence] = {
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
  [alias_sym_regexp_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_lexer_argument,
  },
  [2] = {
    [0] = alias_sym_any,
  },
  [3] = {
    [0] = alias_sym_eof,
  },
  [4] = {
    [0] = alias_sym_regexp_name,
  },
  [5] = {
    [1] = alias_sym_regexp_name,
  },
  [6] = {
    [0] = alias_sym_lexer_entry_name,
  },
  [7] = {
    [0] = alias_sym_escape_sequence,
  },
  [8] = {
    [2] = alias_sym_regexp_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
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
        ADVANCE(30);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '{')
        ADVANCE(32);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '}')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
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
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(19);
      if (lookahead == 'x')
        ADVANCE(23);
      if (lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(14);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '3'))
        ADVANCE(16);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(17);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 19:
      if (lookahead == '{')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '}')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '{')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      END_STATE();
    case 38:
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == '}')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '{')
        ADVANCE(32);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == '\"')
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
        ADVANCE(32);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == '\"')
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
        ADVANCE(32);
      if (lookahead == '|')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == '\\')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'o')
        ADVANCE(15);
      if (lookahead == 'x')
        ADVANCE(23);
      if (lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 46:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\\')
        ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '^')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      END_STATE();
    case 51:
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(51);
      END_STATE();
    case 52:
      if (lookahead == '\"')
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
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
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
        ADVANCE(6);
      if (lookahead == 'l')
        ADVANCE(9);
      if (lookahead == 'p')
        ADVANCE(12);
      if (lookahead == 'r')
        ADVANCE(17);
      if (lookahead == 's')
        ADVANCE(26);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'n')
        ADVANCE(3);
      if (lookahead == 's')
        ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'd')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 6:
      if (lookahead == 'o')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'f')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_eof);
      END_STATE();
    case 9:
      if (lookahead == 'e')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 't')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 12:
      if (lookahead == 'a')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'r')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 's')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'e')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_parse);
      END_STATE();
    case 17:
      if (lookahead == 'e')
        ADVANCE(18);
      if (lookahead == 'u')
        ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'f')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'i')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'l')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'l')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_refill);
      END_STATE();
    case 23:
      if (lookahead == 'l')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'e')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 26:
      if (lookahead == 'h')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'o')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'r')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 't')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'e')
        ADVANCE(31);
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
  [3] = {.lex_state = 37, .external_lex_state = 3},
  [4] = {.lex_state = 36, .external_lex_state = 2},
  [5] = {.lex_state = 36, .external_lex_state = 2},
  [6] = {.lex_state = 37, .external_lex_state = 2},
  [7] = {.lex_state = 36, .external_lex_state = 2},
  [8] = {.lex_state = 36, .external_lex_state = 2},
  [9] = {.lex_state = 36, .external_lex_state = 2},
  [10] = {.lex_state = 38, .external_lex_state = 2},
  [11] = {.lex_state = 36, .external_lex_state = 2},
  [12] = {.lex_state = 39, .external_lex_state = 2},
  [13] = {.lex_state = 38, .external_lex_state = 2},
  [14] = {.lex_state = 37, .external_lex_state = 3},
  [15] = {.lex_state = 36, .external_lex_state = 2},
  [16] = {.lex_state = 36, .external_lex_state = 2},
  [17] = {.lex_state = 36, .external_lex_state = 2},
  [18] = {.lex_state = 36, .external_lex_state = 2},
  [19] = {.lex_state = 36, .external_lex_state = 2},
  [20] = {.lex_state = 38, .external_lex_state = 2},
  [21] = {.lex_state = 38, .external_lex_state = 2},
  [22] = {.lex_state = 36, .external_lex_state = 2},
  [23] = {.lex_state = 37, .external_lex_state = 2},
  [24] = {.lex_state = 36, .external_lex_state = 2},
  [25] = {.lex_state = 40, .external_lex_state = 2},
  [26] = {.lex_state = 41, .external_lex_state = 4},
  [27] = {.lex_state = 39, .external_lex_state = 2},
  [28] = {.lex_state = 36, .external_lex_state = 2},
  [29] = {.lex_state = 36, .external_lex_state = 2},
  [30] = {.lex_state = 36, .external_lex_state = 2},
  [31] = {.lex_state = 41, .external_lex_state = 4},
  [32] = {.lex_state = 36, .external_lex_state = 2},
  [33] = {.lex_state = 38, .external_lex_state = 2},
  [34] = {.lex_state = 36, .external_lex_state = 2},
  [35] = {.lex_state = 37, .external_lex_state = 2},
  [36] = {.lex_state = 36, .external_lex_state = 2},
  [37] = {.lex_state = 42, .external_lex_state = 4},
  [38] = {.lex_state = 42, .external_lex_state = 4},
  [39] = {.lex_state = 43, .external_lex_state = 2},
  [40] = {.lex_state = 46, .external_lex_state = 4},
  [41] = {.lex_state = 49, .external_lex_state = 2},
  [42] = {.lex_state = 41, .external_lex_state = 4},
  [43] = {.lex_state = 42, .external_lex_state = 4},
  [44] = {.lex_state = 41, .external_lex_state = 4},
  [45] = {.lex_state = 36, .external_lex_state = 2},
  [46] = {.lex_state = 36, .external_lex_state = 2},
  [47] = {.lex_state = 36, .external_lex_state = 2},
  [48] = {.lex_state = 36, .external_lex_state = 2},
  [49] = {.lex_state = 41, .external_lex_state = 4},
  [50] = {.lex_state = 41, .external_lex_state = 4},
  [51] = {.lex_state = 40, .external_lex_state = 2},
  [52] = {.lex_state = 41, .external_lex_state = 4},
  [53] = {.lex_state = 41, .external_lex_state = 2},
  [54] = {.lex_state = 41, .external_lex_state = 2},
  [55] = {.lex_state = 42, .external_lex_state = 4},
  [56] = {.lex_state = 46, .external_lex_state = 4},
  [57] = {.lex_state = 46, .external_lex_state = 4},
  [58] = {.lex_state = 46, .external_lex_state = 4},
  [59] = {.lex_state = 43, .external_lex_state = 2},
  [60] = {.lex_state = 41, .external_lex_state = 2},
  [61] = {.lex_state = 50, .external_lex_state = 2},
  [62] = {.lex_state = 51, .external_lex_state = 2},
  [63] = {.lex_state = 52, .external_lex_state = 4},
  [64] = {.lex_state = 41, .external_lex_state = 4},
  [65] = {.lex_state = 42, .external_lex_state = 4},
  [66] = {.lex_state = 42, .external_lex_state = 4},
  [67] = {.lex_state = 42, .external_lex_state = 4},
  [68] = {.lex_state = 41, .external_lex_state = 4},
  [69] = {.lex_state = 36, .external_lex_state = 2},
  [70] = {.lex_state = 41, .external_lex_state = 4},
  [71] = {.lex_state = 37, .external_lex_state = 2},
  [72] = {.lex_state = 36, .external_lex_state = 2},
  [73] = {.lex_state = 36, .external_lex_state = 2},
  [74] = {.lex_state = 40, .external_lex_state = 2},
  [75] = {.lex_state = 41, .external_lex_state = 4},
  [76] = {.lex_state = 41, .external_lex_state = 4},
  [77] = {.lex_state = 40, .external_lex_state = 2},
  [78] = {.lex_state = 41, .external_lex_state = 4},
  [79] = {.lex_state = 41, .external_lex_state = 4},
  [80] = {.lex_state = 40, .external_lex_state = 2},
  [81] = {.lex_state = 41, .external_lex_state = 4},
  [82] = {.lex_state = 42, .external_lex_state = 4},
  [83] = {.lex_state = 42, .external_lex_state = 4},
  [84] = {.lex_state = 46, .external_lex_state = 4},
  [85] = {.lex_state = 41, .external_lex_state = 2},
  [86] = {.lex_state = 51, .external_lex_state = 2},
  [87] = {.lex_state = 41, .external_lex_state = 2},
  [88] = {.lex_state = 42, .external_lex_state = 4},
  [89] = {.lex_state = 51, .external_lex_state = 2},
  [90] = {.lex_state = 41, .external_lex_state = 4},
  [91] = {.lex_state = 41, .external_lex_state = 4},
  [92] = {.lex_state = 42, .external_lex_state = 4},
  [93] = {.lex_state = 52, .external_lex_state = 4},
  [94] = {.lex_state = 41, .external_lex_state = 4},
  [95] = {.lex_state = 41, .external_lex_state = 4},
  [96] = {.lex_state = 42, .external_lex_state = 4},
  [97] = {.lex_state = 37, .external_lex_state = 2},
  [98] = {.lex_state = 36, .external_lex_state = 2},
  [99] = {.lex_state = 40, .external_lex_state = 2},
  [100] = {.lex_state = 41, .external_lex_state = 4},
  [101] = {.lex_state = 41, .external_lex_state = 4},
  [102] = {.lex_state = 40, .external_lex_state = 2},
  [103] = {.lex_state = 40, .external_lex_state = 2},
  [104] = {.lex_state = 40, .external_lex_state = 2},
  [105] = {.lex_state = 50, .external_lex_state = 2},
  [106] = {.lex_state = 42, .external_lex_state = 4},
  [107] = {.lex_state = 51, .external_lex_state = 2},
  [108] = {.lex_state = 52, .external_lex_state = 4},
  [109] = {.lex_state = 52, .external_lex_state = 4},
  [110] = {.lex_state = 37, .external_lex_state = 2},
  [111] = {.lex_state = 40, .external_lex_state = 2},
};

enum {
  ts_external_token_comment,
  ts_external_token_DQUOTE,
  ts_external_token_ocaml,
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
    [sym_ocaml] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym__] = ACTIONS(3),
    [anon_sym_eof] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(3),
    [anon_sym_refill] = ACTIONS(3),
    [anon_sym_parse] = ACTIONS(3),
    [anon_sym_shortest] = ACTIONS(3),
    [sym__identifier] = ACTIONS(3),
  },
  [1] = {
    [sym_lexer_definition] = STATE(6),
    [sym_action] = STATE(7),
    [sym_named_regexp] = STATE(9),
    [sym_refill_handler] = STATE(8),
    [aux_sym_lexer_definition_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_refill] = ACTIONS(13),
  },
  [2] = {
    [sym_lexer_entry] = STATE(11),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(15),
  },
  [3] = {
    [sym_comment] = ACTIONS(5),
    [sym_ocaml] = ACTIONS(17),
  },
  [4] = {
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(19),
  },
  [5] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [6] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [7] = {
    [sym_named_regexp] = STATE(17),
    [sym_refill_handler] = STATE(16),
    [aux_sym_lexer_definition_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_refill] = ACTIONS(13),
  },
  [8] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(25),
  },
  [9] = {
    [sym_named_regexp] = STATE(18),
    [sym_refill_handler] = STATE(16),
    [aux_sym_lexer_definition_repeat1] = STATE(18),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_refill] = ACTIONS(13),
  },
  [10] = {
    [aux_sym_lexer_entry_repeat1] = STATE(21),
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(27),
    [sym__identifier] = ACTIONS(29),
  },
  [11] = {
    [sym_action] = STATE(23),
    [aux_sym_lexer_definition_repeat2] = STATE(24),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [12] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(35),
  },
  [13] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(37),
  },
  [14] = {
    [sym_comment] = ACTIONS(5),
    [sym_ocaml] = ACTIONS(39),
  },
  [15] = {
    [sym_lexer_entry] = STATE(28),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(15),
  },
  [16] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(41),
  },
  [17] = {
    [sym_named_regexp] = STATE(18),
    [sym_refill_handler] = STATE(30),
    [aux_sym_lexer_definition_repeat1] = STATE(18),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(41),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_refill] = ACTIONS(13),
  },
  [18] = {
    [sym_named_regexp] = STATE(18),
    [aux_sym_lexer_definition_repeat1] = STATE(18),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(45),
    [anon_sym_refill] = ACTIONS(43),
  },
  [19] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_parse] = ACTIONS(48),
    [anon_sym_shortest] = ACTIONS(48),
  },
  [20] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(50),
    [sym__identifier] = ACTIONS(50),
  },
  [21] = {
    [aux_sym_lexer_entry_repeat1] = STATE(33),
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(52),
    [sym__identifier] = ACTIONS(29),
  },
  [22] = {
    [sym_lexer_entry] = STATE(34),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(15),
  },
  [23] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(54),
  },
  [24] = {
    [sym_action] = STATE(35),
    [aux_sym_lexer_definition_repeat2] = STATE(36),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [25] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_rule] = ACTIONS(56),
    [anon_sym_and] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(56),
    [anon_sym_PIPE] = ACTIONS(56),
    [anon_sym_refill] = ACTIONS(56),
  },
  [26] = {
    [sym__regexp] = STATE(44),
    [sym_character] = STATE(44),
    [sym_string] = STATE(44),
    [sym_character_set] = STATE(44),
    [sym_regexp_difference] = STATE(44),
    [sym_regexp_repetition] = STATE(44),
    [sym_regexp_strict_repetition] = STATE(44),
    [sym_regexp_option] = STATE(44),
    [sym_regexp_alternative] = STATE(44),
    [sym_regexp_concatenation] = STATE(44),
    [sym_parenthesized_regexp] = STATE(44),
    [sym_aliased_regexp] = STATE(44),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [27] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(72),
  },
  [28] = {
    [sym_action] = STATE(35),
    [aux_sym_lexer_definition_repeat2] = STATE(46),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [29] = {
    [sym_lexer_entry] = STATE(47),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(15),
  },
  [30] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(74),
  },
  [31] = {
    [sym__regexp] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_character_set] = STATE(50),
    [sym_regexp_difference] = STATE(50),
    [sym_regexp_repetition] = STATE(50),
    [sym_regexp_strict_repetition] = STATE(50),
    [sym_regexp_option] = STATE(50),
    [sym_regexp_alternative] = STATE(50),
    [sym_regexp_concatenation] = STATE(50),
    [sym_parenthesized_regexp] = STATE(50),
    [sym_aliased_regexp] = STATE(50),
    [sym_lexer_case] = STATE(51),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [32] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_parse] = ACTIONS(78),
    [anon_sym_shortest] = ACTIONS(78),
  },
  [33] = {
    [aux_sym_lexer_entry_repeat1] = STATE(33),
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(80),
    [sym__identifier] = ACTIONS(82),
  },
  [34] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_and] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
  },
  [35] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(87),
  },
  [36] = {
    [aux_sym_lexer_definition_repeat2] = STATE(36),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_and] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(85),
  },
  [37] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_let] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
    [anon_sym_eof] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_QMARK] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [anon_sym_as] = ACTIONS(92),
    [anon_sym_refill] = ACTIONS(92),
    [sym__identifier] = ACTIONS(92),
  },
  [38] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_let] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [anon_sym_eof] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_as] = ACTIONS(96),
    [anon_sym_refill] = ACTIONS(96),
    [sym__identifier] = ACTIONS(96),
  },
  [39] = {
    [sym_escape_sequence] = STATE(53),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(102),
  },
  [40] = {
    [sym_escape_sequence] = STATE(58),
    [aux_sym_string_repeat1] = STATE(58),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(110),
  },
  [41] = {
    [sym_character] = STATE(61),
    [sym_character_range] = STATE(62),
    [aux_sym_character_set_repeat1] = STATE(62),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_CARET] = ACTIONS(114),
  },
  [42] = {
    [sym__regexp] = STATE(63),
    [sym_character] = STATE(63),
    [sym_string] = STATE(63),
    [sym_character_set] = STATE(63),
    [sym_regexp_difference] = STATE(63),
    [sym_regexp_repetition] = STATE(63),
    [sym_regexp_strict_repetition] = STATE(63),
    [sym_regexp_option] = STATE(63),
    [sym_regexp_alternative] = STATE(63),
    [sym_regexp_concatenation] = STATE(63),
    [sym_parenthesized_regexp] = STATE(63),
    [sym_aliased_regexp] = STATE(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [43] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_let] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [anon_sym_eof] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_as] = ACTIONS(116),
    [anon_sym_refill] = ACTIONS(116),
    [sym__identifier] = ACTIONS(116),
  },
  [44] = {
    [sym__regexp] = STATE(70),
    [sym_character] = STATE(70),
    [sym_string] = STATE(70),
    [sym_character_set] = STATE(70),
    [sym_regexp_difference] = STATE(70),
    [sym_regexp_repetition] = STATE(70),
    [sym_regexp_strict_repetition] = STATE(70),
    [sym_regexp_option] = STATE(70),
    [sym_regexp_alternative] = STATE(70),
    [sym_regexp_concatenation] = STATE(70),
    [sym_parenthesized_regexp] = STATE(70),
    [sym_aliased_regexp] = STATE(70),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(120),
    [anon_sym_let] = ACTIONS(120),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_as] = ACTIONS(132),
    [anon_sym_refill] = ACTIONS(120),
    [sym__identifier] = ACTIONS(70),
  },
  [45] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(134),
  },
  [46] = {
    [sym_action] = STATE(71),
    [aux_sym_lexer_definition_repeat2] = STATE(36),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [47] = {
    [sym_action] = STATE(71),
    [aux_sym_lexer_definition_repeat2] = STATE(72),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [48] = {
    [sym_lexer_entry] = STATE(73),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(15),
  },
  [49] = {
    [sym__regexp] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_character_set] = STATE(50),
    [sym_regexp_difference] = STATE(50),
    [sym_regexp_repetition] = STATE(50),
    [sym_regexp_strict_repetition] = STATE(50),
    [sym_regexp_option] = STATE(50),
    [sym_regexp_alternative] = STATE(50),
    [sym_regexp_concatenation] = STATE(50),
    [sym_parenthesized_regexp] = STATE(50),
    [sym_aliased_regexp] = STATE(50),
    [sym_lexer_case] = STATE(74),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [50] = {
    [sym_action] = STATE(77),
    [sym__regexp] = STATE(78),
    [sym_character] = STATE(78),
    [sym_string] = STATE(78),
    [sym_character_set] = STATE(78),
    [sym_regexp_difference] = STATE(78),
    [sym_regexp_repetition] = STATE(78),
    [sym_regexp_strict_repetition] = STATE(78),
    [sym_regexp_option] = STATE(78),
    [sym_regexp_alternative] = STATE(78),
    [sym_regexp_concatenation] = STATE(78),
    [sym_parenthesized_regexp] = STATE(78),
    [sym_aliased_regexp] = STATE(78),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_as] = ACTIONS(132),
    [sym__identifier] = ACTIONS(70),
  },
  [51] = {
    [aux_sym_lexer_entry_repeat2] = STATE(80),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_and] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(142),
  },
  [52] = {
    [sym__regexp] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_character_set] = STATE(50),
    [sym_regexp_difference] = STATE(50),
    [sym_regexp_repetition] = STATE(50),
    [sym_regexp_strict_repetition] = STATE(50),
    [sym_regexp_option] = STATE(50),
    [sym_regexp_alternative] = STATE(50),
    [sym_regexp_concatenation] = STATE(50),
    [sym_parenthesized_regexp] = STATE(50),
    [sym_aliased_regexp] = STATE(50),
    [sym_lexer_case] = STATE(74),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [53] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(146),
  },
  [54] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(148),
  },
  [55] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_let] = ACTIONS(150),
    [anon_sym__] = ACTIONS(150),
    [anon_sym_eof] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_POUND] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_QMARK] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_as] = ACTIONS(150),
    [anon_sym_refill] = ACTIONS(150),
    [sym__identifier] = ACTIONS(150),
  },
  [56] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(154),
  },
  [57] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(158),
  },
  [58] = {
    [sym_escape_sequence] = STATE(84),
    [aux_sym_string_repeat1] = STATE(84),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(110),
  },
  [59] = {
    [sym_escape_sequence] = STATE(85),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(102),
  },
  [60] = {
    [sym_character] = STATE(61),
    [sym_character_range] = STATE(86),
    [aux_sym_character_set_repeat1] = STATE(86),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(112),
  },
  [61] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(168),
  },
  [62] = {
    [sym_character] = STATE(61),
    [sym_character_range] = STATE(89),
    [aux_sym_character_set_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(170),
  },
  [63] = {
    [sym__regexp] = STATE(93),
    [sym_character] = STATE(93),
    [sym_string] = STATE(93),
    [sym_character_set] = STATE(93),
    [sym_regexp_difference] = STATE(93),
    [sym_regexp_repetition] = STATE(93),
    [sym_regexp_strict_repetition] = STATE(93),
    [sym_regexp_option] = STATE(93),
    [sym_regexp_alternative] = STATE(93),
    [sym_regexp_concatenation] = STATE(93),
    [sym_parenthesized_regexp] = STATE(93),
    [sym_aliased_regexp] = STATE(93),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_as] = ACTIONS(132),
    [sym__identifier] = ACTIONS(70),
  },
  [64] = {
    [sym__regexp] = STATE(94),
    [sym_character] = STATE(94),
    [sym_string] = STATE(94),
    [sym_character_set] = STATE(94),
    [sym_regexp_difference] = STATE(94),
    [sym_regexp_repetition] = STATE(94),
    [sym_regexp_strict_repetition] = STATE(94),
    [sym_regexp_option] = STATE(94),
    [sym_regexp_alternative] = STATE(94),
    [sym_regexp_concatenation] = STATE(94),
    [sym_parenthesized_regexp] = STATE(94),
    [sym_aliased_regexp] = STATE(94),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [65] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_let] = ACTIONS(178),
    [anon_sym__] = ACTIONS(178),
    [anon_sym_eof] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_POUND] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_as] = ACTIONS(178),
    [anon_sym_refill] = ACTIONS(178),
    [sym__identifier] = ACTIONS(178),
  },
  [66] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_let] = ACTIONS(182),
    [anon_sym__] = ACTIONS(182),
    [anon_sym_eof] = ACTIONS(182),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_POUND] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_QMARK] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_as] = ACTIONS(182),
    [anon_sym_refill] = ACTIONS(182),
    [sym__identifier] = ACTIONS(182),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_let] = ACTIONS(186),
    [anon_sym__] = ACTIONS(186),
    [anon_sym_eof] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_POUND] = ACTIONS(188),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_as] = ACTIONS(186),
    [anon_sym_refill] = ACTIONS(186),
    [sym__identifier] = ACTIONS(186),
  },
  [68] = {
    [sym__regexp] = STATE(95),
    [sym_character] = STATE(95),
    [sym_string] = STATE(95),
    [sym_character_set] = STATE(95),
    [sym_regexp_difference] = STATE(95),
    [sym_regexp_repetition] = STATE(95),
    [sym_regexp_strict_repetition] = STATE(95),
    [sym_regexp_option] = STATE(95),
    [sym_regexp_alternative] = STATE(95),
    [sym_regexp_concatenation] = STATE(95),
    [sym_parenthesized_regexp] = STATE(95),
    [sym_aliased_regexp] = STATE(95),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [69] = {
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(190),
  },
  [70] = {
    [sym__regexp] = STATE(70),
    [sym_character] = STATE(70),
    [sym_string] = STATE(70),
    [sym_character_set] = STATE(70),
    [sym_regexp_difference] = STATE(70),
    [sym_regexp_repetition] = STATE(70),
    [sym_regexp_strict_repetition] = STATE(70),
    [sym_regexp_option] = STATE(70),
    [sym_regexp_alternative] = STATE(70),
    [sym_regexp_concatenation] = STATE(70),
    [sym_parenthesized_regexp] = STATE(70),
    [sym_aliased_regexp] = STATE(70),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(192),
    [anon_sym_let] = ACTIONS(192),
    [anon_sym__] = ACTIONS(192),
    [anon_sym_eof] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_as] = ACTIONS(192),
    [anon_sym_refill] = ACTIONS(192),
    [sym__identifier] = ACTIONS(192),
  },
  [71] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(196),
  },
  [72] = {
    [sym_action] = STATE(97),
    [aux_sym_lexer_definition_repeat2] = STATE(36),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [73] = {
    [sym_action] = STATE(97),
    [aux_sym_lexer_definition_repeat2] = STATE(98),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [74] = {
    [aux_sym_lexer_entry_repeat2] = STATE(99),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_and] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(142),
  },
  [75] = {
    [sym__regexp] = STATE(100),
    [sym_character] = STATE(100),
    [sym_string] = STATE(100),
    [sym_character_set] = STATE(100),
    [sym_regexp_difference] = STATE(100),
    [sym_regexp_repetition] = STATE(100),
    [sym_regexp_strict_repetition] = STATE(100),
    [sym_regexp_option] = STATE(100),
    [sym_regexp_alternative] = STATE(100),
    [sym_regexp_concatenation] = STATE(100),
    [sym_parenthesized_regexp] = STATE(100),
    [sym_aliased_regexp] = STATE(100),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [76] = {
    [sym__regexp] = STATE(101),
    [sym_character] = STATE(101),
    [sym_string] = STATE(101),
    [sym_character_set] = STATE(101),
    [sym_regexp_difference] = STATE(101),
    [sym_regexp_repetition] = STATE(101),
    [sym_regexp_strict_repetition] = STATE(101),
    [sym_regexp_option] = STATE(101),
    [sym_regexp_alternative] = STATE(101),
    [sym_regexp_concatenation] = STATE(101),
    [sym_parenthesized_regexp] = STATE(101),
    [sym_aliased_regexp] = STATE(101),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [77] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_and] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(200),
  },
  [78] = {
    [sym__regexp] = STATE(78),
    [sym_character] = STATE(78),
    [sym_string] = STATE(78),
    [sym_character_set] = STATE(78),
    [sym_regexp_difference] = STATE(78),
    [sym_regexp_repetition] = STATE(78),
    [sym_regexp_strict_repetition] = STATE(78),
    [sym_regexp_option] = STATE(78),
    [sym_regexp_alternative] = STATE(78),
    [sym_regexp_concatenation] = STATE(78),
    [sym_parenthesized_regexp] = STATE(78),
    [sym_aliased_regexp] = STATE(78),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym__] = ACTIONS(192),
    [anon_sym_eof] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_as] = ACTIONS(192),
    [sym__identifier] = ACTIONS(192),
  },
  [79] = {
    [sym__regexp] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_character_set] = STATE(50),
    [sym_regexp_difference] = STATE(50),
    [sym_regexp_repetition] = STATE(50),
    [sym_regexp_strict_repetition] = STATE(50),
    [sym_regexp_option] = STATE(50),
    [sym_regexp_alternative] = STATE(50),
    [sym_regexp_concatenation] = STATE(50),
    [sym_parenthesized_regexp] = STATE(50),
    [sym_aliased_regexp] = STATE(50),
    [sym_lexer_case] = STATE(102),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [80] = {
    [aux_sym_lexer_entry_repeat2] = STATE(103),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_and] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(142),
  },
  [81] = {
    [sym__regexp] = STATE(50),
    [sym_character] = STATE(50),
    [sym_string] = STATE(50),
    [sym_character_set] = STATE(50),
    [sym_regexp_difference] = STATE(50),
    [sym_regexp_repetition] = STATE(50),
    [sym_regexp_strict_repetition] = STATE(50),
    [sym_regexp_option] = STATE(50),
    [sym_regexp_alternative] = STATE(50),
    [sym_regexp_concatenation] = STATE(50),
    [sym_parenthesized_regexp] = STATE(50),
    [sym_aliased_regexp] = STATE(50),
    [sym_lexer_case] = STATE(104),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [82] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_let] = ACTIONS(202),
    [anon_sym__] = ACTIONS(202),
    [anon_sym_eof] = ACTIONS(202),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(204),
    [anon_sym_STAR] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_QMARK] = ACTIONS(204),
    [anon_sym_PIPE] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_as] = ACTIONS(202),
    [anon_sym_refill] = ACTIONS(202),
    [sym__identifier] = ACTIONS(202),
  },
  [83] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_let] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [anon_sym_eof] = ACTIONS(206),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_POUND] = ACTIONS(208),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_QMARK] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_as] = ACTIONS(206),
    [anon_sym_refill] = ACTIONS(206),
    [sym__identifier] = ACTIONS(206),
  },
  [84] = {
    [sym_escape_sequence] = STATE(84),
    [aux_sym_string_repeat1] = STATE(84),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(218),
  },
  [85] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(221),
  },
  [86] = {
    [sym_character] = STATE(61),
    [sym_character_range] = STATE(89),
    [aux_sym_character_set_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(223),
  },
  [87] = {
    [sym_character] = STATE(107),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(112),
  },
  [88] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(227),
    [anon_sym_let] = ACTIONS(225),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_eof] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_QMARK] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(227),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_as] = ACTIONS(225),
    [anon_sym_refill] = ACTIONS(225),
    [sym__identifier] = ACTIONS(225),
  },
  [89] = {
    [sym_character] = STATE(61),
    [sym_character_range] = STATE(89),
    [aux_sym_character_set_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(232),
  },
  [90] = {
    [sym__regexp] = STATE(108),
    [sym_character] = STATE(108),
    [sym_string] = STATE(108),
    [sym_character_set] = STATE(108),
    [sym_regexp_difference] = STATE(108),
    [sym_regexp_repetition] = STATE(108),
    [sym_regexp_strict_repetition] = STATE(108),
    [sym_regexp_option] = STATE(108),
    [sym_regexp_alternative] = STATE(108),
    [sym_regexp_concatenation] = STATE(108),
    [sym_parenthesized_regexp] = STATE(108),
    [sym_aliased_regexp] = STATE(108),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [91] = {
    [sym__regexp] = STATE(109),
    [sym_character] = STATE(109),
    [sym_string] = STATE(109),
    [sym_character_set] = STATE(109),
    [sym_regexp_difference] = STATE(109),
    [sym_regexp_repetition] = STATE(109),
    [sym_regexp_strict_repetition] = STATE(109),
    [sym_regexp_option] = STATE(109),
    [sym_regexp_alternative] = STATE(109),
    [sym_regexp_concatenation] = STATE(109),
    [sym_parenthesized_regexp] = STATE(109),
    [sym_aliased_regexp] = STATE(109),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym__identifier] = ACTIONS(70),
  },
  [92] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(234),
    [anon_sym__] = ACTIONS(234),
    [anon_sym_eof] = ACTIONS(234),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_POUND] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_QMARK] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_as] = ACTIONS(234),
    [anon_sym_refill] = ACTIONS(234),
    [sym__identifier] = ACTIONS(234),
  },
  [93] = {
    [sym__regexp] = STATE(93),
    [sym_character] = STATE(93),
    [sym_string] = STATE(93),
    [sym_character_set] = STATE(93),
    [sym_regexp_difference] = STATE(93),
    [sym_regexp_repetition] = STATE(93),
    [sym_regexp_strict_repetition] = STATE(93),
    [sym_regexp_option] = STATE(93),
    [sym_regexp_alternative] = STATE(93),
    [sym_regexp_concatenation] = STATE(93),
    [sym_parenthesized_regexp] = STATE(93),
    [sym_aliased_regexp] = STATE(93),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(192),
    [anon_sym_eof] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_as] = ACTIONS(192),
    [sym__identifier] = ACTIONS(192),
  },
  [94] = {
    [sym__regexp] = STATE(70),
    [sym_character] = STATE(70),
    [sym_string] = STATE(70),
    [sym_character_set] = STATE(70),
    [sym_regexp_difference] = STATE(70),
    [sym_regexp_repetition] = STATE(70),
    [sym_regexp_strict_repetition] = STATE(70),
    [sym_regexp_option] = STATE(70),
    [sym_regexp_alternative] = STATE(70),
    [sym_regexp_concatenation] = STATE(70),
    [sym_parenthesized_regexp] = STATE(70),
    [sym_aliased_regexp] = STATE(70),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(238),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym__] = ACTIONS(238),
    [anon_sym_eof] = ACTIONS(238),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_QMARK] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_as] = ACTIONS(238),
    [anon_sym_refill] = ACTIONS(238),
    [sym__identifier] = ACTIONS(238),
  },
  [95] = {
    [sym__regexp] = STATE(70),
    [sym_character] = STATE(70),
    [sym_string] = STATE(70),
    [sym_character_set] = STATE(70),
    [sym_regexp_difference] = STATE(70),
    [sym_regexp_repetition] = STATE(70),
    [sym_regexp_strict_repetition] = STATE(70),
    [sym_regexp_option] = STATE(70),
    [sym_regexp_alternative] = STATE(70),
    [sym_regexp_concatenation] = STATE(70),
    [sym_parenthesized_regexp] = STATE(70),
    [sym_aliased_regexp] = STATE(70),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(242),
    [anon_sym_let] = ACTIONS(242),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_as] = ACTIONS(242),
    [anon_sym_refill] = ACTIONS(242),
    [sym__identifier] = ACTIONS(70),
  },
  [96] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_let] = ACTIONS(246),
    [anon_sym__] = ACTIONS(246),
    [anon_sym_eof] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_POUND] = ACTIONS(248),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_as] = ACTIONS(246),
    [anon_sym_refill] = ACTIONS(246),
    [sym__identifier] = ACTIONS(246),
  },
  [97] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(250),
  },
  [98] = {
    [sym_action] = STATE(110),
    [aux_sym_lexer_definition_repeat2] = STATE(36),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_and] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [99] = {
    [aux_sym_lexer_entry_repeat2] = STATE(103),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_and] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(142),
  },
  [100] = {
    [sym__regexp] = STATE(78),
    [sym_character] = STATE(78),
    [sym_string] = STATE(78),
    [sym_character_set] = STATE(78),
    [sym_regexp_difference] = STATE(78),
    [sym_regexp_repetition] = STATE(78),
    [sym_regexp_strict_repetition] = STATE(78),
    [sym_regexp_option] = STATE(78),
    [sym_regexp_alternative] = STATE(78),
    [sym_regexp_concatenation] = STATE(78),
    [sym_parenthesized_regexp] = STATE(78),
    [sym_aliased_regexp] = STATE(78),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym__] = ACTIONS(238),
    [anon_sym_eof] = ACTIONS(238),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_QMARK] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_as] = ACTIONS(238),
    [sym__identifier] = ACTIONS(238),
  },
  [101] = {
    [sym__regexp] = STATE(78),
    [sym_character] = STATE(78),
    [sym_string] = STATE(78),
    [sym_character_set] = STATE(78),
    [sym_regexp_difference] = STATE(78),
    [sym_regexp_repetition] = STATE(78),
    [sym_regexp_strict_repetition] = STATE(78),
    [sym_regexp_option] = STATE(78),
    [sym_regexp_alternative] = STATE(78),
    [sym_regexp_concatenation] = STATE(78),
    [sym_parenthesized_regexp] = STATE(78),
    [sym_aliased_regexp] = STATE(78),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_as] = ACTIONS(242),
    [sym__identifier] = ACTIONS(70),
  },
  [102] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
  },
  [103] = {
    [aux_sym_lexer_entry_repeat2] = STATE(103),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(256),
  },
  [104] = {
    [aux_sym_lexer_entry_repeat2] = STATE(111),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_and] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(142),
  },
  [105] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [anon_sym_RBRACK] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(204),
  },
  [106] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(259),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_let] = ACTIONS(259),
    [anon_sym__] = ACTIONS(259),
    [anon_sym_eof] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_POUND] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(261),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_QMARK] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_as] = ACTIONS(259),
    [anon_sym_refill] = ACTIONS(259),
    [sym__identifier] = ACTIONS(259),
  },
  [107] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
  },
  [108] = {
    [sym__regexp] = STATE(93),
    [sym_character] = STATE(93),
    [sym_string] = STATE(93),
    [sym_character_set] = STATE(93),
    [sym_regexp_difference] = STATE(93),
    [sym_regexp_repetition] = STATE(93),
    [sym_regexp_strict_repetition] = STATE(93),
    [sym_regexp_option] = STATE(93),
    [sym_regexp_alternative] = STATE(93),
    [sym_regexp_concatenation] = STATE(93),
    [sym_parenthesized_regexp] = STATE(93),
    [sym_aliased_regexp] = STATE(93),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(238),
    [anon_sym_eof] = ACTIONS(238),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_QMARK] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_as] = ACTIONS(238),
    [sym__identifier] = ACTIONS(238),
  },
  [109] = {
    [sym__regexp] = STATE(93),
    [sym_character] = STATE(93),
    [sym_string] = STATE(93),
    [sym_character_set] = STATE(93),
    [sym_regexp_difference] = STATE(93),
    [sym_regexp_repetition] = STATE(93),
    [sym_regexp_strict_repetition] = STATE(93),
    [sym_regexp_option] = STATE(93),
    [sym_regexp_alternative] = STATE(93),
    [sym_regexp_concatenation] = STATE(93),
    [sym_parenthesized_regexp] = STATE(93),
    [sym_aliased_regexp] = STATE(93),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(58),
    [anon_sym_eof] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_as] = ACTIONS(242),
    [sym__identifier] = ACTIONS(70),
  },
  [110] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(265),
  },
  [111] = {
    [aux_sym_lexer_entry_repeat2] = STATE(103),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(267),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(142),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = true}, SHIFT(14),
  [23] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, SHIFT(19),
  [29] = {.count = 1, .reusable = true}, SHIFT(20),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 2),
  [33] = {.count = 1, .reusable = true}, SHIFT(22),
  [35] = {.count = 1, .reusable = true}, SHIFT(25),
  [37] = {.count = 1, .reusable = true}, SHIFT(26),
  [39] = {.count = 1, .reusable = true}, SHIFT(27),
  [41] = {.count = 1, .reusable = true}, SHIFT(29),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat1, 2),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat1, 2), SHIFT_REPEAT(4),
  [48] = {.count = 1, .reusable = true}, SHIFT(31),
  [50] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat1, 1, .alias_sequence_id = 1),
  [52] = {.count = 1, .reusable = true}, SHIFT(32),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 3),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym_action, 3),
  [58] = {.count = 1, .reusable = false}, SHIFT(37),
  [60] = {.count = 1, .reusable = false}, SHIFT(38),
  [62] = {.count = 1, .reusable = true}, SHIFT(39),
  [64] = {.count = 1, .reusable = true}, SHIFT(40),
  [66] = {.count = 1, .reusable = true}, SHIFT(41),
  [68] = {.count = 1, .reusable = true}, SHIFT(42),
  [70] = {.count = 1, .reusable = false}, SHIFT(43),
  [72] = {.count = 1, .reusable = true}, SHIFT(45),
  [74] = {.count = 1, .reusable = true}, SHIFT(48),
  [76] = {.count = 1, .reusable = true}, SHIFT(49),
  [78] = {.count = 1, .reusable = true}, SHIFT(52),
  [80] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat1, 2),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat1, 2), SHIFT_REPEAT(20),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat2, 2),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 4),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat2, 2), SHIFT_REPEAT(22),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym__regexp, 1, .alias_sequence_id = 2),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym__regexp, 1, .alias_sequence_id = 2),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym__regexp, 1, .alias_sequence_id = 3),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym__regexp, 1, .alias_sequence_id = 3),
  [100] = {.count = 1, .reusable = true}, SHIFT(53),
  [102] = {.count = 1, .reusable = false}, SHIFT(54),
  [104] = {.count = 1, .reusable = false}, SHIFT(55),
  [106] = {.count = 1, .reusable = true}, SHIFT(58),
  [108] = {.count = 1, .reusable = false}, SHIFT(56),
  [110] = {.count = 1, .reusable = false}, SHIFT(57),
  [112] = {.count = 1, .reusable = true}, SHIFT(59),
  [114] = {.count = 1, .reusable = true}, SHIFT(60),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym__regexp, 1, .alias_sequence_id = 4),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym__regexp, 1, .alias_sequence_id = 4),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_named_regexp, 4, .alias_sequence_id = 5),
  [122] = {.count = 1, .reusable = true}, SHIFT(64),
  [124] = {.count = 1, .reusable = true}, SHIFT(65),
  [126] = {.count = 1, .reusable = true}, SHIFT(66),
  [128] = {.count = 1, .reusable = true}, SHIFT(67),
  [130] = {.count = 1, .reusable = true}, SHIFT(68),
  [132] = {.count = 1, .reusable = false}, SHIFT(69),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_refill_handler, 4),
  [136] = {.count = 1, .reusable = true}, SHIFT(75),
  [138] = {.count = 1, .reusable = true}, SHIFT(76),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 4, .alias_sequence_id = 6),
  [142] = {.count = 1, .reusable = true}, SHIFT(79),
  [144] = {.count = 1, .reusable = true}, SHIFT(81),
  [146] = {.count = 1, .reusable = true}, SHIFT(82),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_escape_sequence, 1),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [154] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 1, .alias_sequence_id = 7),
  [156] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 1, .alias_sequence_id = 7),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_escape_sequence, 1),
  [160] = {.count = 1, .reusable = false}, SHIFT(83),
  [162] = {.count = 1, .reusable = true}, SHIFT(84),
  [164] = {.count = 1, .reusable = true}, SHIFT(85),
  [166] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 1),
  [168] = {.count = 1, .reusable = true}, SHIFT(87),
  [170] = {.count = 1, .reusable = true}, SHIFT(88),
  [172] = {.count = 1, .reusable = true}, SHIFT(90),
  [174] = {.count = 1, .reusable = true}, SHIFT(91),
  [176] = {.count = 1, .reusable = true}, SHIFT(92),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_repetition, 2),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_repetition, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_strict_repetition, 2),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_strict_repetition, 2),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_option, 2),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_option, 2),
  [190] = {.count = 1, .reusable = true}, SHIFT(96),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_concatenation, 2),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_concatenation, 2),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 5),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 5, .alias_sequence_id = 6),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_case, 2),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [210] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(84),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(56),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(57),
  [221] = {.count = 1, .reusable = true}, SHIFT(105),
  [223] = {.count = 1, .reusable = true}, SHIFT(106),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_character_set, 3),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_character_set, 3),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 2), SHIFT_REPEAT(59),
  [232] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 2),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_regexp, 3),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_regexp, 3),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_difference, 3),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_difference, 3),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_alternative, 3),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_alternative, 3),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_aliased_regexp, 3, .alias_sequence_id = 8),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_aliased_regexp, 3, .alias_sequence_id = 8),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 6),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 6, .alias_sequence_id = 6),
  [254] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat2, 2),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat2, 2), SHIFT_REPEAT(79),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_character_set, 4),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_character_set, 4),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_character_range, 3),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 7),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 7, .alias_sequence_id = 6),
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

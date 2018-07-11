#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 114
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 6
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 1

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
  sym__regexp_name = 57,
  sym__lexer_entry_name = 58,
  sym__lexer_argument = 59,
  aux_sym_lexer_definition_repeat1 = 60,
  aux_sym_lexer_definition_repeat2 = 61,
  aux_sym_string_repeat1 = 62,
  aux_sym_character_set_repeat1 = 63,
  aux_sym_lexer_entry_repeat1 = 64,
  aux_sym_lexer_entry_repeat2 = 65,
  alias_sym_any = 66,
  alias_sym_eof = 67,
  alias_sym_escape_sequence = 68,
  alias_sym_lexer_argument = 69,
  alias_sym_lexer_entry_name = 70,
  alias_sym_regexp_name = 71,
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
  [sym__regexp_name] = "_regexp_name",
  [sym__lexer_entry_name] = "_lexer_entry_name",
  [sym__lexer_argument] = "_lexer_argument",
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
  [sym__regexp_name] = {
    .visible = false,
    .named = true,
  },
  [sym__lexer_entry_name] = {
    .visible = false,
    .named = true,
  },
  [sym__lexer_argument] = {
    .visible = false,
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

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_lexer_entry_name,
  },
  [2] = {
    [0] = alias_sym_regexp_name,
  },
  [3] = {
    [0] = alias_sym_lexer_argument,
  },
  [4] = {
    [0] = alias_sym_any,
  },
  [5] = {
    [0] = alias_sym_eof,
  },
  [6] = {
    [0] = alias_sym_escape_sequence,
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
  [12] = {.lex_state = 38, .external_lex_state = 2},
  [13] = {.lex_state = 39, .external_lex_state = 2},
  [14] = {.lex_state = 38, .external_lex_state = 2},
  [15] = {.lex_state = 38, .external_lex_state = 2},
  [16] = {.lex_state = 37, .external_lex_state = 3},
  [17] = {.lex_state = 36, .external_lex_state = 2},
  [18] = {.lex_state = 36, .external_lex_state = 2},
  [19] = {.lex_state = 36, .external_lex_state = 2},
  [20] = {.lex_state = 36, .external_lex_state = 2},
  [21] = {.lex_state = 36, .external_lex_state = 2},
  [22] = {.lex_state = 37, .external_lex_state = 2},
  [23] = {.lex_state = 36, .external_lex_state = 2},
  [24] = {.lex_state = 36, .external_lex_state = 2},
  [25] = {.lex_state = 38, .external_lex_state = 2},
  [26] = {.lex_state = 38, .external_lex_state = 2},
  [27] = {.lex_state = 40, .external_lex_state = 2},
  [28] = {.lex_state = 41, .external_lex_state = 4},
  [29] = {.lex_state = 39, .external_lex_state = 2},
  [30] = {.lex_state = 36, .external_lex_state = 2},
  [31] = {.lex_state = 36, .external_lex_state = 2},
  [32] = {.lex_state = 36, .external_lex_state = 2},
  [33] = {.lex_state = 36, .external_lex_state = 2},
  [34] = {.lex_state = 37, .external_lex_state = 2},
  [35] = {.lex_state = 36, .external_lex_state = 2},
  [36] = {.lex_state = 41, .external_lex_state = 4},
  [37] = {.lex_state = 36, .external_lex_state = 2},
  [38] = {.lex_state = 38, .external_lex_state = 2},
  [39] = {.lex_state = 42, .external_lex_state = 4},
  [40] = {.lex_state = 42, .external_lex_state = 4},
  [41] = {.lex_state = 43, .external_lex_state = 2},
  [42] = {.lex_state = 46, .external_lex_state = 4},
  [43] = {.lex_state = 49, .external_lex_state = 2},
  [44] = {.lex_state = 41, .external_lex_state = 4},
  [45] = {.lex_state = 42, .external_lex_state = 4},
  [46] = {.lex_state = 41, .external_lex_state = 4},
  [47] = {.lex_state = 36, .external_lex_state = 2},
  [48] = {.lex_state = 36, .external_lex_state = 2},
  [49] = {.lex_state = 36, .external_lex_state = 2},
  [50] = {.lex_state = 36, .external_lex_state = 2},
  [51] = {.lex_state = 41, .external_lex_state = 4},
  [52] = {.lex_state = 41, .external_lex_state = 4},
  [53] = {.lex_state = 40, .external_lex_state = 2},
  [54] = {.lex_state = 41, .external_lex_state = 4},
  [55] = {.lex_state = 41, .external_lex_state = 2},
  [56] = {.lex_state = 41, .external_lex_state = 2},
  [57] = {.lex_state = 42, .external_lex_state = 4},
  [58] = {.lex_state = 46, .external_lex_state = 4},
  [59] = {.lex_state = 46, .external_lex_state = 4},
  [60] = {.lex_state = 46, .external_lex_state = 4},
  [61] = {.lex_state = 43, .external_lex_state = 2},
  [62] = {.lex_state = 41, .external_lex_state = 2},
  [63] = {.lex_state = 50, .external_lex_state = 2},
  [64] = {.lex_state = 51, .external_lex_state = 2},
  [65] = {.lex_state = 52, .external_lex_state = 4},
  [66] = {.lex_state = 41, .external_lex_state = 4},
  [67] = {.lex_state = 42, .external_lex_state = 4},
  [68] = {.lex_state = 42, .external_lex_state = 4},
  [69] = {.lex_state = 42, .external_lex_state = 4},
  [70] = {.lex_state = 41, .external_lex_state = 4},
  [71] = {.lex_state = 36, .external_lex_state = 2},
  [72] = {.lex_state = 41, .external_lex_state = 4},
  [73] = {.lex_state = 37, .external_lex_state = 2},
  [74] = {.lex_state = 36, .external_lex_state = 2},
  [75] = {.lex_state = 36, .external_lex_state = 2},
  [76] = {.lex_state = 40, .external_lex_state = 2},
  [77] = {.lex_state = 41, .external_lex_state = 4},
  [78] = {.lex_state = 41, .external_lex_state = 4},
  [79] = {.lex_state = 40, .external_lex_state = 2},
  [80] = {.lex_state = 41, .external_lex_state = 4},
  [81] = {.lex_state = 41, .external_lex_state = 4},
  [82] = {.lex_state = 40, .external_lex_state = 2},
  [83] = {.lex_state = 41, .external_lex_state = 4},
  [84] = {.lex_state = 42, .external_lex_state = 4},
  [85] = {.lex_state = 42, .external_lex_state = 4},
  [86] = {.lex_state = 46, .external_lex_state = 4},
  [87] = {.lex_state = 41, .external_lex_state = 2},
  [88] = {.lex_state = 51, .external_lex_state = 2},
  [89] = {.lex_state = 41, .external_lex_state = 2},
  [90] = {.lex_state = 42, .external_lex_state = 4},
  [91] = {.lex_state = 51, .external_lex_state = 2},
  [92] = {.lex_state = 41, .external_lex_state = 4},
  [93] = {.lex_state = 41, .external_lex_state = 4},
  [94] = {.lex_state = 42, .external_lex_state = 4},
  [95] = {.lex_state = 52, .external_lex_state = 4},
  [96] = {.lex_state = 41, .external_lex_state = 4},
  [97] = {.lex_state = 41, .external_lex_state = 4},
  [98] = {.lex_state = 42, .external_lex_state = 4},
  [99] = {.lex_state = 37, .external_lex_state = 2},
  [100] = {.lex_state = 36, .external_lex_state = 2},
  [101] = {.lex_state = 40, .external_lex_state = 2},
  [102] = {.lex_state = 41, .external_lex_state = 4},
  [103] = {.lex_state = 41, .external_lex_state = 4},
  [104] = {.lex_state = 40, .external_lex_state = 2},
  [105] = {.lex_state = 40, .external_lex_state = 2},
  [106] = {.lex_state = 40, .external_lex_state = 2},
  [107] = {.lex_state = 50, .external_lex_state = 2},
  [108] = {.lex_state = 42, .external_lex_state = 4},
  [109] = {.lex_state = 51, .external_lex_state = 2},
  [110] = {.lex_state = 52, .external_lex_state = 4},
  [111] = {.lex_state = 52, .external_lex_state = 4},
  [112] = {.lex_state = 37, .external_lex_state = 2},
  [113] = {.lex_state = 40, .external_lex_state = 2},
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
    [sym__lexer_entry_name] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(15),
  },
  [3] = {
    [sym_comment] = ACTIONS(5),
    [sym_ocaml] = ACTIONS(17),
  },
  [4] = {
    [sym__regexp_name] = STATE(15),
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
    [sym_named_regexp] = STATE(19),
    [sym_refill_handler] = STATE(18),
    [aux_sym_lexer_definition_repeat1] = STATE(19),
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
    [sym_named_regexp] = STATE(20),
    [sym_refill_handler] = STATE(18),
    [aux_sym_lexer_definition_repeat1] = STATE(20),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_refill] = ACTIONS(13),
  },
  [10] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(27),
    [sym__identifier] = ACTIONS(27),
  },
  [11] = {
    [sym_action] = STATE(22),
    [aux_sym_lexer_definition_repeat2] = STATE(23),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [12] = {
    [sym__lexer_argument] = STATE(26),
    [aux_sym_lexer_entry_repeat1] = STATE(26),
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(33),
    [sym__identifier] = ACTIONS(35),
  },
  [13] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(37),
  },
  [14] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(39),
  },
  [15] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(41),
  },
  [16] = {
    [sym_comment] = ACTIONS(5),
    [sym_ocaml] = ACTIONS(43),
  },
  [17] = {
    [sym_lexer_entry] = STATE(30),
    [sym__lexer_entry_name] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(15),
  },
  [18] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(45),
  },
  [19] = {
    [sym_named_regexp] = STATE(20),
    [sym_refill_handler] = STATE(32),
    [aux_sym_lexer_definition_repeat1] = STATE(20),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(45),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_refill] = ACTIONS(13),
  },
  [20] = {
    [sym_named_regexp] = STATE(20),
    [aux_sym_lexer_definition_repeat1] = STATE(20),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(47),
    [anon_sym_let] = ACTIONS(49),
    [anon_sym_refill] = ACTIONS(47),
  },
  [21] = {
    [sym_lexer_entry] = STATE(33),
    [sym__lexer_entry_name] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(15),
  },
  [22] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(52),
  },
  [23] = {
    [sym_action] = STATE(34),
    [aux_sym_lexer_definition_repeat2] = STATE(35),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [24] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_parse] = ACTIONS(54),
    [anon_sym_shortest] = ACTIONS(54),
  },
  [25] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(56),
    [sym__identifier] = ACTIONS(56),
  },
  [26] = {
    [sym__lexer_argument] = STATE(38),
    [aux_sym_lexer_entry_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(58),
    [sym__identifier] = ACTIONS(35),
  },
  [27] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_rule] = ACTIONS(60),
    [anon_sym_and] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_let] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_refill] = ACTIONS(60),
  },
  [28] = {
    [sym__regexp] = STATE(46),
    [sym_character] = STATE(46),
    [sym_string] = STATE(46),
    [sym_character_set] = STATE(46),
    [sym_regexp_difference] = STATE(46),
    [sym_regexp_repetition] = STATE(46),
    [sym_regexp_strict_repetition] = STATE(46),
    [sym_regexp_option] = STATE(46),
    [sym_regexp_alternative] = STATE(46),
    [sym_regexp_concatenation] = STATE(46),
    [sym_parenthesized_regexp] = STATE(46),
    [sym_aliased_regexp] = STATE(46),
    [sym__regexp_name] = STATE(46),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [29] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(76),
  },
  [30] = {
    [sym_action] = STATE(34),
    [aux_sym_lexer_definition_repeat2] = STATE(48),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [31] = {
    [sym_lexer_entry] = STATE(49),
    [sym__lexer_entry_name] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(15),
  },
  [32] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(78),
  },
  [33] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(80),
  },
  [34] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(82),
  },
  [35] = {
    [aux_sym_lexer_definition_repeat2] = STATE(35),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_and] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(80),
  },
  [36] = {
    [sym__regexp] = STATE(52),
    [sym_character] = STATE(52),
    [sym_string] = STATE(52),
    [sym_character_set] = STATE(52),
    [sym_regexp_difference] = STATE(52),
    [sym_regexp_repetition] = STATE(52),
    [sym_regexp_strict_repetition] = STATE(52),
    [sym_regexp_option] = STATE(52),
    [sym_regexp_alternative] = STATE(52),
    [sym_regexp_concatenation] = STATE(52),
    [sym_parenthesized_regexp] = STATE(52),
    [sym_aliased_regexp] = STATE(52),
    [sym_lexer_case] = STATE(53),
    [sym__regexp_name] = STATE(52),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [37] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_parse] = ACTIONS(89),
    [anon_sym_shortest] = ACTIONS(89),
  },
  [38] = {
    [sym__lexer_argument] = STATE(38),
    [aux_sym_lexer_entry_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(5),
    [anon_sym_EQ] = ACTIONS(91),
    [sym__identifier] = ACTIONS(93),
  },
  [39] = {
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
  [40] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_let] = ACTIONS(100),
    [anon_sym__] = ACTIONS(100),
    [anon_sym_eof] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_as] = ACTIONS(100),
    [anon_sym_refill] = ACTIONS(100),
    [sym__identifier] = ACTIONS(100),
  },
  [41] = {
    [sym_escape_sequence] = STATE(55),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(106),
  },
  [42] = {
    [sym_escape_sequence] = STATE(60),
    [aux_sym_string_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(110),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(114),
  },
  [43] = {
    [sym_character] = STATE(63),
    [sym_character_range] = STATE(64),
    [aux_sym_character_set_repeat1] = STATE(64),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(118),
  },
  [44] = {
    [sym__regexp] = STATE(65),
    [sym_character] = STATE(65),
    [sym_string] = STATE(65),
    [sym_character_set] = STATE(65),
    [sym_regexp_difference] = STATE(65),
    [sym_regexp_repetition] = STATE(65),
    [sym_regexp_strict_repetition] = STATE(65),
    [sym_regexp_option] = STATE(65),
    [sym_regexp_alternative] = STATE(65),
    [sym_regexp_concatenation] = STATE(65),
    [sym_parenthesized_regexp] = STATE(65),
    [sym_aliased_regexp] = STATE(65),
    [sym__regexp_name] = STATE(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [45] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_let] = ACTIONS(120),
    [anon_sym__] = ACTIONS(120),
    [anon_sym_eof] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(39),
    [anon_sym_QMARK] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_as] = ACTIONS(120),
    [anon_sym_refill] = ACTIONS(120),
    [sym__identifier] = ACTIONS(120),
  },
  [46] = {
    [sym__regexp] = STATE(72),
    [sym_character] = STATE(72),
    [sym_string] = STATE(72),
    [sym_character_set] = STATE(72),
    [sym_regexp_difference] = STATE(72),
    [sym_regexp_repetition] = STATE(72),
    [sym_regexp_strict_repetition] = STATE(72),
    [sym_regexp_option] = STATE(72),
    [sym_regexp_alternative] = STATE(72),
    [sym_regexp_concatenation] = STATE(72),
    [sym_parenthesized_regexp] = STATE(72),
    [sym_aliased_regexp] = STATE(72),
    [sym__regexp_name] = STATE(72),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(122),
    [anon_sym_let] = ACTIONS(122),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_as] = ACTIONS(134),
    [anon_sym_refill] = ACTIONS(122),
    [sym__identifier] = ACTIONS(74),
  },
  [47] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(136),
  },
  [48] = {
    [sym_action] = STATE(73),
    [aux_sym_lexer_definition_repeat2] = STATE(35),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [49] = {
    [sym_action] = STATE(73),
    [aux_sym_lexer_definition_repeat2] = STATE(74),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [50] = {
    [sym_lexer_entry] = STATE(75),
    [sym__lexer_entry_name] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(15),
  },
  [51] = {
    [sym__regexp] = STATE(52),
    [sym_character] = STATE(52),
    [sym_string] = STATE(52),
    [sym_character_set] = STATE(52),
    [sym_regexp_difference] = STATE(52),
    [sym_regexp_repetition] = STATE(52),
    [sym_regexp_strict_repetition] = STATE(52),
    [sym_regexp_option] = STATE(52),
    [sym_regexp_alternative] = STATE(52),
    [sym_regexp_concatenation] = STATE(52),
    [sym_parenthesized_regexp] = STATE(52),
    [sym_aliased_regexp] = STATE(52),
    [sym_lexer_case] = STATE(76),
    [sym__regexp_name] = STATE(52),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [52] = {
    [sym_action] = STATE(79),
    [sym__regexp] = STATE(80),
    [sym_character] = STATE(80),
    [sym_string] = STATE(80),
    [sym_character_set] = STATE(80),
    [sym_regexp_difference] = STATE(80),
    [sym_regexp_repetition] = STATE(80),
    [sym_regexp_strict_repetition] = STATE(80),
    [sym_regexp_option] = STATE(80),
    [sym_regexp_alternative] = STATE(80),
    [sym_regexp_concatenation] = STATE(80),
    [sym_parenthesized_regexp] = STATE(80),
    [sym_aliased_regexp] = STATE(80),
    [sym__regexp_name] = STATE(80),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_as] = ACTIONS(134),
    [sym__identifier] = ACTIONS(74),
  },
  [53] = {
    [aux_sym_lexer_entry_repeat2] = STATE(82),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_and] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(144),
  },
  [54] = {
    [sym__regexp] = STATE(52),
    [sym_character] = STATE(52),
    [sym_string] = STATE(52),
    [sym_character_set] = STATE(52),
    [sym_regexp_difference] = STATE(52),
    [sym_regexp_repetition] = STATE(52),
    [sym_regexp_strict_repetition] = STATE(52),
    [sym_regexp_option] = STATE(52),
    [sym_regexp_alternative] = STATE(52),
    [sym_regexp_concatenation] = STATE(52),
    [sym_parenthesized_regexp] = STATE(52),
    [sym_aliased_regexp] = STATE(52),
    [sym_lexer_case] = STATE(76),
    [sym__regexp_name] = STATE(52),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [55] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(148),
  },
  [56] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(150),
  },
  [57] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_let] = ACTIONS(152),
    [anon_sym__] = ACTIONS(152),
    [anon_sym_eof] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(154),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_as] = ACTIONS(152),
    [anon_sym_refill] = ACTIONS(152),
    [sym__identifier] = ACTIONS(152),
  },
  [58] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(156),
  },
  [59] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(160),
  },
  [60] = {
    [sym_escape_sequence] = STATE(86),
    [aux_sym_string_repeat1] = STATE(86),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(112),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(114),
  },
  [61] = {
    [sym_escape_sequence] = STATE(87),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(106),
  },
  [62] = {
    [sym_character] = STATE(63),
    [sym_character_range] = STATE(88),
    [aux_sym_character_set_repeat1] = STATE(88),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(116),
  },
  [63] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_RBRACK] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(170),
  },
  [64] = {
    [sym_character] = STATE(63),
    [sym_character_range] = STATE(91),
    [aux_sym_character_set_repeat1] = STATE(91),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(172),
  },
  [65] = {
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
    [sym__regexp_name] = STATE(95),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(174),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_as] = ACTIONS(134),
    [sym__identifier] = ACTIONS(74),
  },
  [66] = {
    [sym__regexp] = STATE(96),
    [sym_character] = STATE(96),
    [sym_string] = STATE(96),
    [sym_character_set] = STATE(96),
    [sym_regexp_difference] = STATE(96),
    [sym_regexp_repetition] = STATE(96),
    [sym_regexp_strict_repetition] = STATE(96),
    [sym_regexp_option] = STATE(96),
    [sym_regexp_alternative] = STATE(96),
    [sym_regexp_concatenation] = STATE(96),
    [sym_parenthesized_regexp] = STATE(96),
    [sym_aliased_regexp] = STATE(96),
    [sym__regexp_name] = STATE(96),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_let] = ACTIONS(180),
    [anon_sym__] = ACTIONS(180),
    [anon_sym_eof] = ACTIONS(180),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_POUND] = ACTIONS(182),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_as] = ACTIONS(180),
    [anon_sym_refill] = ACTIONS(180),
    [sym__identifier] = ACTIONS(180),
  },
  [68] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_let] = ACTIONS(184),
    [anon_sym__] = ACTIONS(184),
    [anon_sym_eof] = ACTIONS(184),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [anon_sym_POUND] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_QMARK] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_as] = ACTIONS(184),
    [anon_sym_refill] = ACTIONS(184),
    [sym__identifier] = ACTIONS(184),
  },
  [69] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_let] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [anon_sym_eof] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_POUND] = ACTIONS(190),
    [anon_sym_STAR] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_QMARK] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_as] = ACTIONS(188),
    [anon_sym_refill] = ACTIONS(188),
    [sym__identifier] = ACTIONS(188),
  },
  [70] = {
    [sym__regexp] = STATE(97),
    [sym_character] = STATE(97),
    [sym_string] = STATE(97),
    [sym_character_set] = STATE(97),
    [sym_regexp_difference] = STATE(97),
    [sym_regexp_repetition] = STATE(97),
    [sym_regexp_strict_repetition] = STATE(97),
    [sym_regexp_option] = STATE(97),
    [sym_regexp_alternative] = STATE(97),
    [sym_regexp_concatenation] = STATE(97),
    [sym_parenthesized_regexp] = STATE(97),
    [sym_aliased_regexp] = STATE(97),
    [sym__regexp_name] = STATE(97),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [71] = {
    [sym__regexp_name] = STATE(98),
    [sym_comment] = ACTIONS(5),
    [sym__identifier] = ACTIONS(192),
  },
  [72] = {
    [sym__regexp] = STATE(72),
    [sym_character] = STATE(72),
    [sym_string] = STATE(72),
    [sym_character_set] = STATE(72),
    [sym_regexp_difference] = STATE(72),
    [sym_regexp_repetition] = STATE(72),
    [sym_regexp_strict_repetition] = STATE(72),
    [sym_regexp_option] = STATE(72),
    [sym_regexp_alternative] = STATE(72),
    [sym_regexp_concatenation] = STATE(72),
    [sym_parenthesized_regexp] = STATE(72),
    [sym_aliased_regexp] = STATE(72),
    [sym__regexp_name] = STATE(72),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(194),
    [anon_sym_let] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [anon_sym_eof] = ACTIONS(194),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_as] = ACTIONS(194),
    [anon_sym_refill] = ACTIONS(194),
    [sym__identifier] = ACTIONS(194),
  },
  [73] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(198),
  },
  [74] = {
    [sym_action] = STATE(99),
    [aux_sym_lexer_definition_repeat2] = STATE(35),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [75] = {
    [sym_action] = STATE(99),
    [aux_sym_lexer_definition_repeat2] = STATE(100),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [76] = {
    [aux_sym_lexer_entry_repeat2] = STATE(101),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_and] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(144),
  },
  [77] = {
    [sym__regexp] = STATE(102),
    [sym_character] = STATE(102),
    [sym_string] = STATE(102),
    [sym_character_set] = STATE(102),
    [sym_regexp_difference] = STATE(102),
    [sym_regexp_repetition] = STATE(102),
    [sym_regexp_strict_repetition] = STATE(102),
    [sym_regexp_option] = STATE(102),
    [sym_regexp_alternative] = STATE(102),
    [sym_regexp_concatenation] = STATE(102),
    [sym_parenthesized_regexp] = STATE(102),
    [sym_aliased_regexp] = STATE(102),
    [sym__regexp_name] = STATE(102),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [78] = {
    [sym__regexp] = STATE(103),
    [sym_character] = STATE(103),
    [sym_string] = STATE(103),
    [sym_character_set] = STATE(103),
    [sym_regexp_difference] = STATE(103),
    [sym_regexp_repetition] = STATE(103),
    [sym_regexp_strict_repetition] = STATE(103),
    [sym_regexp_option] = STATE(103),
    [sym_regexp_alternative] = STATE(103),
    [sym_regexp_concatenation] = STATE(103),
    [sym_parenthesized_regexp] = STATE(103),
    [sym_aliased_regexp] = STATE(103),
    [sym__regexp_name] = STATE(103),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [79] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(202),
    [anon_sym_and] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
  },
  [80] = {
    [sym__regexp] = STATE(80),
    [sym_character] = STATE(80),
    [sym_string] = STATE(80),
    [sym_character_set] = STATE(80),
    [sym_regexp_difference] = STATE(80),
    [sym_regexp_repetition] = STATE(80),
    [sym_regexp_strict_repetition] = STATE(80),
    [sym_regexp_option] = STATE(80),
    [sym_regexp_alternative] = STATE(80),
    [sym_regexp_concatenation] = STATE(80),
    [sym_parenthesized_regexp] = STATE(80),
    [sym_aliased_regexp] = STATE(80),
    [sym__regexp_name] = STATE(80),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym__] = ACTIONS(194),
    [anon_sym_eof] = ACTIONS(194),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_as] = ACTIONS(194),
    [sym__identifier] = ACTIONS(194),
  },
  [81] = {
    [sym__regexp] = STATE(52),
    [sym_character] = STATE(52),
    [sym_string] = STATE(52),
    [sym_character_set] = STATE(52),
    [sym_regexp_difference] = STATE(52),
    [sym_regexp_repetition] = STATE(52),
    [sym_regexp_strict_repetition] = STATE(52),
    [sym_regexp_option] = STATE(52),
    [sym_regexp_alternative] = STATE(52),
    [sym_regexp_concatenation] = STATE(52),
    [sym_parenthesized_regexp] = STATE(52),
    [sym_aliased_regexp] = STATE(52),
    [sym_lexer_case] = STATE(104),
    [sym__regexp_name] = STATE(52),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [82] = {
    [aux_sym_lexer_entry_repeat2] = STATE(105),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_and] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(144),
  },
  [83] = {
    [sym__regexp] = STATE(52),
    [sym_character] = STATE(52),
    [sym_string] = STATE(52),
    [sym_character_set] = STATE(52),
    [sym_regexp_difference] = STATE(52),
    [sym_regexp_repetition] = STATE(52),
    [sym_regexp_strict_repetition] = STATE(52),
    [sym_regexp_option] = STATE(52),
    [sym_regexp_alternative] = STATE(52),
    [sym_regexp_concatenation] = STATE(52),
    [sym_parenthesized_regexp] = STATE(52),
    [sym_aliased_regexp] = STATE(52),
    [sym_lexer_case] = STATE(106),
    [sym__regexp_name] = STATE(52),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [84] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_let] = ACTIONS(204),
    [anon_sym__] = ACTIONS(204),
    [anon_sym_eof] = ACTIONS(204),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(206),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_as] = ACTIONS(204),
    [anon_sym_refill] = ACTIONS(204),
    [sym__identifier] = ACTIONS(204),
  },
  [85] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_let] = ACTIONS(208),
    [anon_sym__] = ACTIONS(208),
    [anon_sym_eof] = ACTIONS(208),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_POUND] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_QMARK] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_as] = ACTIONS(208),
    [anon_sym_refill] = ACTIONS(208),
    [sym__identifier] = ACTIONS(208),
  },
  [86] = {
    [sym_escape_sequence] = STATE(86),
    [aux_sym_string_repeat1] = STATE(86),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_BSLASH_BSLASHu_BSLASH_LBRACE_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_PLUS_BSLASH_RBRACE_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_LBRACK_BSLASHt_RBRACK_STAR_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK_BSLASH_BSLASH_DQUOTE_SQUOTEntbr_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_BSLASH_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_BSLASHx_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_LBRACK0_DASH9A_DASHFa_DASHf_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_BSLASHo_LBRACK0_DASH3_RBRACK_LBRACK0_DASH7_RBRACK_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(220),
  },
  [87] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(223),
  },
  [88] = {
    [sym_character] = STATE(63),
    [sym_character_range] = STATE(91),
    [aux_sym_character_set_repeat1] = STATE(91),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(225),
  },
  [89] = {
    [sym_character] = STATE(109),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(116),
  },
  [90] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_let] = ACTIONS(227),
    [anon_sym__] = ACTIONS(227),
    [anon_sym_eof] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_as] = ACTIONS(227),
    [anon_sym_refill] = ACTIONS(227),
    [sym__identifier] = ACTIONS(227),
  },
  [91] = {
    [sym_character] = STATE(63),
    [sym_character_range] = STATE(91),
    [aux_sym_character_set_repeat1] = STATE(91),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(234),
  },
  [92] = {
    [sym__regexp] = STATE(110),
    [sym_character] = STATE(110),
    [sym_string] = STATE(110),
    [sym_character_set] = STATE(110),
    [sym_regexp_difference] = STATE(110),
    [sym_regexp_repetition] = STATE(110),
    [sym_regexp_strict_repetition] = STATE(110),
    [sym_regexp_option] = STATE(110),
    [sym_regexp_alternative] = STATE(110),
    [sym_regexp_concatenation] = STATE(110),
    [sym_parenthesized_regexp] = STATE(110),
    [sym_aliased_regexp] = STATE(110),
    [sym__regexp_name] = STATE(110),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [93] = {
    [sym__regexp] = STATE(111),
    [sym_character] = STATE(111),
    [sym_string] = STATE(111),
    [sym_character_set] = STATE(111),
    [sym_regexp_difference] = STATE(111),
    [sym_regexp_repetition] = STATE(111),
    [sym_regexp_strict_repetition] = STATE(111),
    [sym_regexp_option] = STATE(111),
    [sym_regexp_alternative] = STATE(111),
    [sym_regexp_concatenation] = STATE(111),
    [sym_parenthesized_regexp] = STATE(111),
    [sym_aliased_regexp] = STATE(111),
    [sym__regexp_name] = STATE(111),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym__identifier] = ACTIONS(74),
  },
  [94] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(238),
    [anon_sym_let] = ACTIONS(236),
    [anon_sym__] = ACTIONS(236),
    [anon_sym_eof] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_POUND] = ACTIONS(238),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_QMARK] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_as] = ACTIONS(236),
    [anon_sym_refill] = ACTIONS(236),
    [sym__identifier] = ACTIONS(236),
  },
  [95] = {
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
    [sym__regexp_name] = STATE(95),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(194),
    [anon_sym_eof] = ACTIONS(194),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(174),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_as] = ACTIONS(194),
    [sym__identifier] = ACTIONS(194),
  },
  [96] = {
    [sym__regexp] = STATE(72),
    [sym_character] = STATE(72),
    [sym_string] = STATE(72),
    [sym_character_set] = STATE(72),
    [sym_regexp_difference] = STATE(72),
    [sym_regexp_repetition] = STATE(72),
    [sym_regexp_strict_repetition] = STATE(72),
    [sym_regexp_option] = STATE(72),
    [sym_regexp_alternative] = STATE(72),
    [sym_regexp_concatenation] = STATE(72),
    [sym_parenthesized_regexp] = STATE(72),
    [sym_aliased_regexp] = STATE(72),
    [sym__regexp_name] = STATE(72),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(240),
    [anon_sym_let] = ACTIONS(240),
    [anon_sym__] = ACTIONS(240),
    [anon_sym_eof] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_POUND] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_QMARK] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_as] = ACTIONS(240),
    [anon_sym_refill] = ACTIONS(240),
    [sym__identifier] = ACTIONS(240),
  },
  [97] = {
    [sym__regexp] = STATE(72),
    [sym_character] = STATE(72),
    [sym_string] = STATE(72),
    [sym_character_set] = STATE(72),
    [sym_regexp_difference] = STATE(72),
    [sym_regexp_repetition] = STATE(72),
    [sym_regexp_strict_repetition] = STATE(72),
    [sym_regexp_option] = STATE(72),
    [sym_regexp_alternative] = STATE(72),
    [sym_regexp_concatenation] = STATE(72),
    [sym_parenthesized_regexp] = STATE(72),
    [sym_aliased_regexp] = STATE(72),
    [sym__regexp_name] = STATE(72),
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(244),
    [anon_sym_let] = ACTIONS(244),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_as] = ACTIONS(244),
    [anon_sym_refill] = ACTIONS(244),
    [sym__identifier] = ACTIONS(74),
  },
  [98] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_let] = ACTIONS(248),
    [anon_sym__] = ACTIONS(248),
    [anon_sym_eof] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_POUND] = ACTIONS(250),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_QMARK] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_as] = ACTIONS(248),
    [anon_sym_refill] = ACTIONS(248),
    [sym__identifier] = ACTIONS(248),
  },
  [99] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(252),
  },
  [100] = {
    [sym_action] = STATE(112),
    [aux_sym_lexer_definition_repeat2] = STATE(35),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_and] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(9),
  },
  [101] = {
    [aux_sym_lexer_entry_repeat2] = STATE(105),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(144),
  },
  [102] = {
    [sym__regexp] = STATE(80),
    [sym_character] = STATE(80),
    [sym_string] = STATE(80),
    [sym_character_set] = STATE(80),
    [sym_regexp_difference] = STATE(80),
    [sym_regexp_repetition] = STATE(80),
    [sym_regexp_strict_repetition] = STATE(80),
    [sym_regexp_option] = STATE(80),
    [sym_regexp_alternative] = STATE(80),
    [sym_regexp_concatenation] = STATE(80),
    [sym_parenthesized_regexp] = STATE(80),
    [sym_aliased_regexp] = STATE(80),
    [sym__regexp_name] = STATE(80),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym__] = ACTIONS(240),
    [anon_sym_eof] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_POUND] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_QMARK] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_as] = ACTIONS(240),
    [sym__identifier] = ACTIONS(240),
  },
  [103] = {
    [sym__regexp] = STATE(80),
    [sym_character] = STATE(80),
    [sym_string] = STATE(80),
    [sym_character_set] = STATE(80),
    [sym_regexp_difference] = STATE(80),
    [sym_regexp_repetition] = STATE(80),
    [sym_regexp_strict_repetition] = STATE(80),
    [sym_regexp_option] = STATE(80),
    [sym_regexp_alternative] = STATE(80),
    [sym_regexp_concatenation] = STATE(80),
    [sym_parenthesized_regexp] = STATE(80),
    [sym_aliased_regexp] = STATE(80),
    [sym__regexp_name] = STATE(80),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_as] = ACTIONS(244),
    [sym__identifier] = ACTIONS(74),
  },
  [104] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_and] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
  },
  [105] = {
    [aux_sym_lexer_entry_repeat2] = STATE(105),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_and] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(258),
  },
  [106] = {
    [aux_sym_lexer_entry_repeat2] = STATE(113),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_and] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(144),
  },
  [107] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
  },
  [108] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_let] = ACTIONS(261),
    [anon_sym__] = ACTIONS(261),
    [anon_sym_eof] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_POUND] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(263),
    [anon_sym_QMARK] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_as] = ACTIONS(261),
    [anon_sym_refill] = ACTIONS(261),
    [sym__identifier] = ACTIONS(261),
  },
  [109] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
  },
  [110] = {
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
    [sym__regexp_name] = STATE(95),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(240),
    [anon_sym_eof] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_POUND] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_QMARK] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_as] = ACTIONS(240),
    [sym__identifier] = ACTIONS(240),
  },
  [111] = {
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
    [sym__regexp_name] = STATE(95),
    [sym_comment] = ACTIONS(5),
    [anon_sym__] = ACTIONS(62),
    [anon_sym_eof] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(174),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_as] = ACTIONS(244),
    [sym__identifier] = ACTIONS(74),
  },
  [112] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(267),
  },
  [113] = {
    [aux_sym_lexer_entry_repeat2] = STATE(105),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_and] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(144),
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
  [17] = {.count = 1, .reusable = true}, SHIFT(13),
  [19] = {.count = 1, .reusable = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, SHIFT(16),
  [23] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, SHIFT(17),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym__lexer_entry_name, 1, .alias_sequence_id = 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 2),
  [31] = {.count = 1, .reusable = true}, SHIFT(21),
  [33] = {.count = 1, .reusable = true}, SHIFT(24),
  [35] = {.count = 1, .reusable = true}, SHIFT(25),
  [37] = {.count = 1, .reusable = true}, SHIFT(27),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__regexp_name, 1, .alias_sequence_id = 2),
  [41] = {.count = 1, .reusable = true}, SHIFT(28),
  [43] = {.count = 1, .reusable = true}, SHIFT(29),
  [45] = {.count = 1, .reusable = true}, SHIFT(31),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat1, 2),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat1, 2), SHIFT_REPEAT(4),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 3),
  [54] = {.count = 1, .reusable = true}, SHIFT(36),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym__lexer_argument, 1, .alias_sequence_id = 3),
  [58] = {.count = 1, .reusable = true}, SHIFT(37),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_action, 3),
  [62] = {.count = 1, .reusable = false}, SHIFT(39),
  [64] = {.count = 1, .reusable = false}, SHIFT(40),
  [66] = {.count = 1, .reusable = true}, SHIFT(41),
  [68] = {.count = 1, .reusable = true}, SHIFT(42),
  [70] = {.count = 1, .reusable = true}, SHIFT(43),
  [72] = {.count = 1, .reusable = true}, SHIFT(44),
  [74] = {.count = 1, .reusable = false}, SHIFT(45),
  [76] = {.count = 1, .reusable = true}, SHIFT(47),
  [78] = {.count = 1, .reusable = true}, SHIFT(50),
  [80] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat2, 2),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 4),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_definition_repeat2, 2), SHIFT_REPEAT(21),
  [87] = {.count = 1, .reusable = true}, SHIFT(51),
  [89] = {.count = 1, .reusable = true}, SHIFT(54),
  [91] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat1, 2),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat1, 2), SHIFT_REPEAT(25),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym__regexp, 1, .alias_sequence_id = 4),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym__regexp, 1, .alias_sequence_id = 4),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym__regexp, 1, .alias_sequence_id = 5),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym__regexp, 1, .alias_sequence_id = 5),
  [104] = {.count = 1, .reusable = true}, SHIFT(55),
  [106] = {.count = 1, .reusable = false}, SHIFT(56),
  [108] = {.count = 1, .reusable = false}, SHIFT(57),
  [110] = {.count = 1, .reusable = true}, SHIFT(60),
  [112] = {.count = 1, .reusable = false}, SHIFT(58),
  [114] = {.count = 1, .reusable = false}, SHIFT(59),
  [116] = {.count = 1, .reusable = true}, SHIFT(61),
  [118] = {.count = 1, .reusable = true}, SHIFT(62),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym__regexp_name, 1, .alias_sequence_id = 2),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_named_regexp, 4),
  [124] = {.count = 1, .reusable = true}, SHIFT(66),
  [126] = {.count = 1, .reusable = true}, SHIFT(67),
  [128] = {.count = 1, .reusable = true}, SHIFT(68),
  [130] = {.count = 1, .reusable = true}, SHIFT(69),
  [132] = {.count = 1, .reusable = true}, SHIFT(70),
  [134] = {.count = 1, .reusable = false}, SHIFT(71),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_refill_handler, 4),
  [138] = {.count = 1, .reusable = true}, SHIFT(77),
  [140] = {.count = 1, .reusable = true}, SHIFT(78),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 4),
  [144] = {.count = 1, .reusable = true}, SHIFT(81),
  [146] = {.count = 1, .reusable = true}, SHIFT(83),
  [148] = {.count = 1, .reusable = true}, SHIFT(84),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_escape_sequence, 1),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [156] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 1, .alias_sequence_id = 6),
  [158] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 1, .alias_sequence_id = 6),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_escape_sequence, 1),
  [162] = {.count = 1, .reusable = false}, SHIFT(85),
  [164] = {.count = 1, .reusable = true}, SHIFT(86),
  [166] = {.count = 1, .reusable = true}, SHIFT(87),
  [168] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 1),
  [170] = {.count = 1, .reusable = true}, SHIFT(89),
  [172] = {.count = 1, .reusable = true}, SHIFT(90),
  [174] = {.count = 1, .reusable = true}, SHIFT(92),
  [176] = {.count = 1, .reusable = true}, SHIFT(93),
  [178] = {.count = 1, .reusable = true}, SHIFT(94),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_repetition, 2),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_repetition, 2),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_strict_repetition, 2),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_strict_repetition, 2),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_option, 2),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_option, 2),
  [192] = {.count = 1, .reusable = true}, SHIFT(45),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_concatenation, 2),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_concatenation, 2),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 5),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 5),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_case, 2),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [212] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(86),
  [217] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(58),
  [220] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(59),
  [223] = {.count = 1, .reusable = true}, SHIFT(107),
  [225] = {.count = 1, .reusable = true}, SHIFT(108),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_character_set, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_character_set, 3),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 2), SHIFT_REPEAT(61),
  [234] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 2),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_regexp, 3),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_regexp, 3),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_difference, 3),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_difference, 3),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_regexp_alternative, 3),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_regexp_alternative, 3),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_aliased_regexp, 3),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_aliased_regexp, 3),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 6),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 6),
  [256] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat2, 2),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lexer_entry_repeat2, 2), SHIFT_REPEAT(81),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_character_set, 4),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_character_set, 4),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_character_range, 3),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_definition, 7),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_lexer_entry, 7),
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

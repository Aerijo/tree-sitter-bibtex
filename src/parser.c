#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 80
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 2
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_comment = 1,
  anon_sym_AT = 2,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH = 3,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH = 4,
  anon_sym_LBRACE = 5,
  anon_sym_EQ = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 10,
  anon_sym_COMMA = 11,
  sym_key_b = 12,
  sym_key_p = 13,
  sym_identifier = 14,
  anon_sym_POUND = 15,
  sym_nonnegative_integer = 16,
  anon_sym_DQUOTE = 17,
  sym__brace_text = 18,
  sym__quote_text = 19,
  sym_program = 20,
  sym__command_or_entry = 21,
  sym_comment_command = 22,
  sym_string_command = 23,
  sym_preamble_command = 24,
  sym_entry = 25,
  sym_field = 26,
  sym_value = 27,
  sym_token = 28,
  sym_string = 29,
  sym__balanced = 30,
  sym__quote_balanced = 31,
  aux_sym_program_repeat1 = 32,
  aux_sym_entry_repeat1 = 33,
  aux_sym_value_repeat1 = 34,
  aux_sym_string_repeat1 = 35,
  aux_sym_string_repeat2 = 36,
  anon_alias_sym_entry_name = 37,
  anon_alias_sym_key = 38,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_AT] = "@",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[cC][oO][mM][mM][eE][nN][tT]/",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = "/[sS][tT][rR][iI][nN][gG]/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_EQ] = "=",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[pP][rR][eE][aA][mM][bB][lL][eE]/",
  [anon_sym_COMMA] = ",",
  [sym_key_b] = "key_b",
  [sym_key_p] = "key_p",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [sym_nonnegative_integer] = "nonnegative_integer",
  [anon_sym_DQUOTE] = "\"",
  [sym__brace_text] = "_brace_text",
  [sym__quote_text] = "_quote_text",
  [sym_program] = "program",
  [sym__command_or_entry] = "_command_or_entry",
  [sym_comment_command] = "comment_command",
  [sym_string_command] = "string_command",
  [sym_preamble_command] = "preamble_command",
  [sym_entry] = "entry",
  [sym_field] = "field",
  [sym_value] = "value",
  [sym_token] = "token",
  [sym_string] = "string",
  [sym__balanced] = "_balanced",
  [sym__quote_balanced] = "_quote_balanced",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_entry_repeat1] = "entry_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [anon_alias_sym_entry_name] = "entry_name",
  [anon_alias_sym_key] = "key",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_key_b] = {
    .visible = true,
    .named = true,
  },
  [sym_key_p] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_nonnegative_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__brace_text] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_text] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__command_or_entry] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_command] = {
    .visible = true,
    .named = true,
  },
  [sym_string_command] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble_command] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__balanced] = {
    .visible = false,
    .named = true,
  },
  [sym__quote_balanced] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entry_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_entry_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_key] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = anon_alias_sym_entry_name,
    [3] = anon_alias_sym_key,
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
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(8);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(11);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(18);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
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
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 18:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 26:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_nonnegative_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(44);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(39);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(40);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(41);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(42);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(45);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(46);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(47);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(48);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(49);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(50);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(51);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(53);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(54);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(55);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(57);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= '|') ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '}')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '}')
        ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      if (lookahead != 0 &&
          lookahead != ',')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_key_p);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',')
        ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(67);
      if (lookahead != 0)
        ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__brace_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(6);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(69);
      END_STATE();
    case 70:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '}')
        ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(6);
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(73);
      END_STATE();
    case 74:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      END_STATE();
    case 75:
      if (lookahead == '}')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(76);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 59},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 59},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 63},
  [17] = {.lex_state = 65},
  [18] = {.lex_state = 65},
  [19] = {.lex_state = 66},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 74},
  [25] = {.lex_state = 74},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 60},
  [30] = {.lex_state = 66},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 66},
  [33] = {.lex_state = 66},
  [34] = {.lex_state = 70},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 60},
  [38] = {.lex_state = 73},
  [39] = {.lex_state = 74},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 75},
  [42] = {.lex_state = 73},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 74},
  [45] = {.lex_state = 73},
  [46] = {.lex_state = 74},
  [47] = {.lex_state = 66},
  [48] = {.lex_state = 66},
  [49] = {.lex_state = 69},
  [50] = {.lex_state = 66},
  [51] = {.lex_state = 70},
  [52] = {.lex_state = 66},
  [53] = {.lex_state = 70},
  [54] = {.lex_state = 69},
  [55] = {.lex_state = 73},
  [56] = {.lex_state = 74},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 69},
  [60] = {.lex_state = 75},
  [61] = {.lex_state = 73},
  [62] = {.lex_state = 65},
  [63] = {.lex_state = 76},
  [64] = {.lex_state = 74},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 66},
  [67] = {.lex_state = 70},
  [68] = {.lex_state = 60},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 60},
  [71] = {.lex_state = 60},
  [72] = {.lex_state = 60},
  [73] = {.lex_state = 69},
  [74] = {.lex_state = 73},
  [75] = {.lex_state = 74},
  [76] = {.lex_state = 73},
  [77] = {.lex_state = 74},
  [78] = {.lex_state = 73},
  [79] = {.lex_state = 74},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_nonnegative_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(4),
    [sym__command_or_entry] = STATE(2),
    [sym_comment_command] = STATE(2),
    [sym_string_command] = STATE(2),
    [sym_preamble_command] = STATE(2),
    [sym_entry] = STATE(2),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(9),
  },
  [3] = {
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(11),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(13),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [5] = {
    [sym__command_or_entry] = STATE(2),
    [sym_comment_command] = STATE(2),
    [sym_string_command] = STATE(2),
    [sym_preamble_command] = STATE(2),
    [sym_entry] = STATE(2),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_comment] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_comment] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
  },
  [7] = {
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
  },
  [8] = {
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
  },
  [9] = {
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
  },
  [10] = {
    [sym__command_or_entry] = STATE(2),
    [sym_comment_command] = STATE(2),
    [sym_string_command] = STATE(2),
    [sym_preamble_command] = STATE(2),
    [sym_entry] = STATE(2),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(42),
  },
  [11] = {
    [sym_identifier] = ACTIONS(45),
  },
  [12] = {
    [sym_identifier] = ACTIONS(47),
  },
  [13] = {
    [sym_value] = STATE(22),
    [sym_token] = STATE(23),
    [sym_string] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_nonnegative_integer] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [14] = {
    [sym_value] = STATE(24),
    [sym_token] = STATE(25),
    [sym_string] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_nonnegative_integer] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [15] = {
    [sym_key_b] = ACTIONS(55),
  },
  [16] = {
    [sym_key_p] = ACTIONS(57),
  },
  [17] = {
    [anon_sym_EQ] = ACTIONS(59),
  },
  [18] = {
    [anon_sym_EQ] = ACTIONS(61),
  },
  [19] = {
    [sym__balanced] = STATE(32),
    [aux_sym_string_repeat1] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym__brace_text] = ACTIONS(67),
  },
  [20] = {
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(69),
  },
  [21] = {
    [sym__quote_balanced] = STATE(35),
    [aux_sym_string_repeat2] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [sym__quote_text] = ACTIONS(73),
  },
  [22] = {
    [anon_sym_RBRACE] = ACTIONS(75),
  },
  [23] = {
    [aux_sym_value_repeat1] = STATE(38),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(79),
  },
  [24] = {
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [25] = {
    [aux_sym_value_repeat1] = STATE(39),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(79),
  },
  [26] = {
    [aux_sym_entry_repeat1] = STATE(42),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(83),
  },
  [27] = {
    [aux_sym_entry_repeat1] = STATE(44),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(85),
  },
  [28] = {
    [sym_value] = STATE(45),
    [sym_token] = STATE(23),
    [sym_string] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_nonnegative_integer] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [29] = {
    [sym_value] = STATE(46),
    [sym_token] = STATE(25),
    [sym_string] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_nonnegative_integer] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [30] = {
    [sym__balanced] = STATE(48),
    [aux_sym_string_repeat1] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(87),
    [sym__brace_text] = ACTIONS(89),
  },
  [31] = {
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
  },
  [32] = {
    [sym__balanced] = STATE(50),
    [aux_sym_string_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(93),
    [sym__brace_text] = ACTIONS(95),
  },
  [33] = {
    [sym__balanced] = STATE(52),
    [aux_sym_string_repeat1] = STATE(52),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym__brace_text] = ACTIONS(99),
  },
  [34] = {
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym__quote_text] = ACTIONS(103),
  },
  [35] = {
    [sym__quote_balanced] = STATE(53),
    [aux_sym_string_repeat2] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym__quote_text] = ACTIONS(73),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(105),
  },
  [37] = {
    [sym_token] = STATE(54),
    [sym_string] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_nonnegative_integer] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [38] = {
    [aux_sym_value_repeat1] = STATE(55),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(79),
  },
  [39] = {
    [aux_sym_value_repeat1] = STATE(56),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(79),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comment] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
  },
  [41] = {
    [sym_field] = STATE(59),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
  },
  [42] = {
    [aux_sym_entry_repeat1] = STATE(61),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(115),
  },
  [43] = {
    [sym_field] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(111),
    [sym_identifier] = ACTIONS(117),
  },
  [44] = {
    [aux_sym_entry_repeat1] = STATE(64),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(119),
  },
  [45] = {
    [anon_sym_RBRACE] = ACTIONS(121),
  },
  [46] = {
    [anon_sym_RPAREN] = ACTIONS(121),
  },
  [47] = {
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [sym__brace_text] = ACTIONS(125),
  },
  [48] = {
    [sym__balanced] = STATE(50),
    [aux_sym_string_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym__brace_text] = ACTIONS(95),
  },
  [49] = {
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(129),
  },
  [50] = {
    [sym__balanced] = STATE(50),
    [aux_sym_string_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(134),
    [sym__brace_text] = ACTIONS(136),
  },
  [51] = {
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym__quote_text] = ACTIONS(141),
  },
  [52] = {
    [sym__balanced] = STATE(50),
    [aux_sym_string_repeat1] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym__brace_text] = ACTIONS(95),
  },
  [53] = {
    [sym__quote_balanced] = STATE(53),
    [aux_sym_string_repeat2] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [sym__quote_text] = ACTIONS(150),
  },
  [54] = {
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(153),
  },
  [55] = {
    [aux_sym_value_repeat1] = STATE(55),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(155),
  },
  [56] = {
    [aux_sym_value_repeat1] = STATE(56),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(155),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_comment] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(158),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(160),
  },
  [59] = {
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(162),
  },
  [60] = {
    [sym_field] = STATE(59),
    [anon_sym_RBRACE] = ACTIONS(164),
    [sym_identifier] = ACTIONS(113),
  },
  [61] = {
    [aux_sym_entry_repeat1] = STATE(61),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(166),
  },
  [62] = {
    [anon_sym_EQ] = ACTIONS(169),
  },
  [63] = {
    [sym_field] = STATE(59),
    [anon_sym_RPAREN] = ACTIONS(164),
    [sym_identifier] = ACTIONS(117),
  },
  [64] = {
    [aux_sym_entry_repeat1] = STATE(64),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(171),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_comment] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(174),
  },
  [66] = {
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
    [sym__brace_text] = ACTIONS(178),
  },
  [67] = {
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [sym__quote_text] = ACTIONS(182),
  },
  [68] = {
    [sym_value] = STATE(73),
    [sym_token] = STATE(74),
    [sym_string] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_nonnegative_integer] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_comment] = ACTIONS(184),
    [anon_sym_AT] = ACTIONS(184),
  },
  [70] = {
    [sym_field] = STATE(59),
    [sym_identifier] = ACTIONS(113),
  },
  [71] = {
    [sym_value] = STATE(73),
    [sym_token] = STATE(75),
    [sym_string] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_nonnegative_integer] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
  },
  [72] = {
    [sym_field] = STATE(59),
    [sym_identifier] = ACTIONS(117),
  },
  [73] = {
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(186),
  },
  [74] = {
    [aux_sym_value_repeat1] = STATE(76),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(79),
  },
  [75] = {
    [aux_sym_value_repeat1] = STATE(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(79),
  },
  [76] = {
    [aux_sym_value_repeat1] = STATE(78),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(79),
  },
  [77] = {
    [aux_sym_value_repeat1] = STATE(79),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(79),
  },
  [78] = {
    [aux_sym_value_repeat1] = STATE(78),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(155),
  },
  [79] = {
    [aux_sym_value_repeat1] = STATE(79),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(155),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 1),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = false}, SHIFT(8),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_comment_command, 2),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, SHIFT(13),
  [31] = {.count = 1, .reusable = true}, SHIFT(14),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = true}, SHIFT(18),
  [49] = {.count = 1, .reusable = true}, SHIFT(19),
  [51] = {.count = 1, .reusable = true}, SHIFT(20),
  [53] = {.count = 1, .reusable = true}, SHIFT(21),
  [55] = {.count = 1, .reusable = true}, SHIFT(26),
  [57] = {.count = 1, .reusable = true}, SHIFT(27),
  [59] = {.count = 1, .reusable = true}, SHIFT(28),
  [61] = {.count = 1, .reusable = true}, SHIFT(29),
  [63] = {.count = 1, .reusable = false}, SHIFT(30),
  [65] = {.count = 1, .reusable = false}, SHIFT(31),
  [67] = {.count = 1, .reusable = true}, SHIFT(32),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_token, 1),
  [71] = {.count = 1, .reusable = false}, SHIFT(33),
  [73] = {.count = 1, .reusable = true}, SHIFT(34),
  [75] = {.count = 1, .reusable = true}, SHIFT(36),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(37),
  [81] = {.count = 1, .reusable = true}, SHIFT(40),
  [83] = {.count = 1, .reusable = true}, SHIFT(41),
  [85] = {.count = 1, .reusable = true}, SHIFT(43),
  [87] = {.count = 1, .reusable = false}, SHIFT(47),
  [89] = {.count = 1, .reusable = true}, SHIFT(48),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [93] = {.count = 1, .reusable = false}, SHIFT(49),
  [95] = {.count = 1, .reusable = true}, SHIFT(50),
  [97] = {.count = 1, .reusable = false}, SHIFT(51),
  [99] = {.count = 1, .reusable = true}, SHIFT(52),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__quote_balanced, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_preamble_command, 5),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_value, 2),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 5, .alias_sequence_id = 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(57),
  [113] = {.count = 1, .reusable = true}, SHIFT(58),
  [115] = {.count = 1, .reusable = true}, SHIFT(60),
  [117] = {.count = 1, .reusable = true}, SHIFT(62),
  [119] = {.count = 1, .reusable = true}, SHIFT(63),
  [121] = {.count = 1, .reusable = true}, SHIFT(65),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym__balanced, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__balanced, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(66),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(30),
  [134] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(50),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym__quote_balanced, 2),
  [143] = {.count = 1, .reusable = false}, SHIFT(67),
  [145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(33),
  [148] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(34),
  [153] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(37),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 6, .alias_sequence_id = 1),
  [160] = {.count = 1, .reusable = true}, SHIFT(68),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2),
  [164] = {.count = 1, .reusable = true}, SHIFT(69),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(70),
  [169] = {.count = 1, .reusable = true}, SHIFT(71),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_entry_repeat1, 2), SHIFT_REPEAT(72),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_string_command, 7),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym__balanced, 3),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym__balanced, 3),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 3),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym__quote_balanced, 3),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 7, .alias_sequence_id = 1),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_field, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bibtex() {
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}

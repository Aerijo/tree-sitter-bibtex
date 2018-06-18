#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 108
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  anon_sym_AT = 2,
  sym__ws = 3,
  sym_comment_command = 4,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_EQ = 10,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 11,
  anon_sym_COMMA = 12,
  sym_key_b = 13,
  sym_key_p = 14,
  sym_identifier = 15,
  anon_sym_POUND = 16,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 17,
  anon_sym_DQUOTE = 18,
  sym__text = 19,
  sym__quote_text = 20,
  sym_program = 21,
  sym__at_command = 22,
  sym__command = 23,
  sym_string = 24,
  sym__string_block = 25,
  sym_string_body = 26,
  sym_preamble = 27,
  sym__preamble_block = 28,
  sym_preamble_body = 29,
  sym_entry = 30,
  sym__entry_block = 31,
  sym_field = 32,
  sym_value = 33,
  sym_piece = 34,
  sym__balanced = 35,
  sym__quote_balanced = 36,
  aux_sym_program_repeat1 = 37,
  aux_sym__entry_block_repeat1 = 38,
  aux_sym_value_repeat1 = 39,
  aux_sym_piece_repeat1 = 40,
  aux_sym_piece_repeat2 = 41,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
  [anon_sym_AT] = "@",
  [sym__ws] = "_ws",
  [sym_comment_command] = "comment_command",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = "/[sS][tT][rR][iI][nN][gG]/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[pP][rR][eE][aA][mM][bB][lL][eE]/",
  [anon_sym_COMMA] = ",",
  [sym_key_b] = "key_b",
  [sym_key_p] = "key_p",
  [sym_identifier] = "identifier",
  [anon_sym_POUND] = "#",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = "/[0-9]+/",
  [anon_sym_DQUOTE] = "\"",
  [sym__text] = "_text",
  [sym__quote_text] = "_quote_text",
  [sym_program] = "program",
  [sym__at_command] = "_at_command",
  [sym__command] = "_command",
  [sym_string] = "string",
  [sym__string_block] = "_string_block",
  [sym_string_body] = "string_body",
  [sym_preamble] = "preamble",
  [sym__preamble_block] = "_preamble_block",
  [sym_preamble_body] = "preamble_body",
  [sym_entry] = "entry",
  [sym__entry_block] = "_entry_block",
  [sym_field] = "field",
  [sym_value] = "value",
  [sym_piece] = "piece",
  [sym__balanced] = "_balanced",
  [sym__quote_balanced] = "_quote_balanced",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__entry_block_repeat1] = "_entry_block_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_piece_repeat1] = "piece_repeat1",
  [aux_sym_piece_repeat2] = "piece_repeat2",
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
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = {
    .visible = false,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__text] = {
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
  [sym__at_command] = {
    .visible = false,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__string_block] = {
    .visible = false,
    .named = true,
  },
  [sym_string_body] = {
    .visible = true,
    .named = true,
  },
  [sym_preamble] = {
    .visible = true,
    .named = true,
  },
  [sym__preamble_block] = {
    .visible = false,
    .named = true,
  },
  [sym_preamble_body] = {
    .visible = true,
    .named = true,
  },
  [sym_entry] = {
    .visible = true,
    .named = true,
  },
  [sym__entry_block] = {
    .visible = false,
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
  [sym_piece] = {
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
  [aux_sym__entry_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_piece_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_piece_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == '{')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(14);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(15);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(22);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      if (('!' <= lookahead && lookahead <= '$') ||
          lookahead == '&' ||
          ('*' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      ADVANCE(5);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',')
        ADVANCE(5);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '}')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_key_p);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',')
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',')
        ADVANCE(5);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',')
        ADVANCE(5);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '}')
        ADVANCE(3);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',')
        ADVANCE(5);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',')
        ADVANCE(5);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')' &&
          lookahead != ',')
        ADVANCE(4);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(16);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(17);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(18);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(19);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(21);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment_command);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(24);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(25);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(26);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(27);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(29);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(33);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(35);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < ')' || lookahead > '<'))
        ADVANCE(5);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == ')')
        ADVANCE(3);
      if (lookahead == '}')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',')
        ADVANCE(5);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '@')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(40);
      ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '@')
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(46);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(54);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
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
        ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
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
        ADVANCE(53);
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
        ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
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
        ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
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
        ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
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
        ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(52);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment_command);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 53:
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
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
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
        ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
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
        ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
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
        ADVANCE(53);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(58);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(59);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(60);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(61);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 61:
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
        ADVANCE(53);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(63);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(66);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(67);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 67:
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
        ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == '(')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      if (lookahead == '\"')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= '|') ||
          lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == '#')
        ADVANCE(75);
      if (lookahead == '}')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      if (lookahead == '#')
        ADVANCE(75);
      if (lookahead == ')')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(80);
      if (lookahead != 0)
        ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == '\"')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(83);
      if (lookahead != 0)
        ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__quote_text);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '{')
        ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '#')
        ADVANCE(75);
      if (lookahead == ')')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_key_b);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(86);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '}')
        ADVANCE(3);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_key_p);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(87);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',')
        ADVANCE(4);
      END_STATE();
    case 88:
      if (lookahead == '=')
        ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '}')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '<') ||
          ('>' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= '~'))
        ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == ')')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
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
        ADVANCE(53);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '#')
        ADVANCE(75);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(95);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 44},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 68},
  [12] = {.lex_state = 68},
  [13] = {.lex_state = 68},
  [14] = {.lex_state = 71},
  [15] = {.lex_state = 71},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 71},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 38},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 74},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 79},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 82},
  [30] = {.lex_state = 74},
  [31] = {.lex_state = 85},
  [32] = {.lex_state = 42},
  [33] = {.lex_state = 77},
  [34] = {.lex_state = 42},
  [35] = {.lex_state = 86},
  [36] = {.lex_state = 87},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 79},
  [41] = {.lex_state = 42},
  [42] = {.lex_state = 79},
  [43] = {.lex_state = 79},
  [44] = {.lex_state = 82},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 74},
  [47] = {.lex_state = 77},
  [48] = {.lex_state = 42},
  [49] = {.lex_state = 42},
  [50] = {.lex_state = 42},
  [51] = {.lex_state = 42},
  [52] = {.lex_state = 79},
  [53] = {.lex_state = 79},
  [54] = {.lex_state = 42},
  [55] = {.lex_state = 79},
  [56] = {.lex_state = 82},
  [57] = {.lex_state = 79},
  [58] = {.lex_state = 82},
  [59] = {.lex_state = 42},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 90},
  [63] = {.lex_state = 90},
  [64] = {.lex_state = 71},
  [65] = {.lex_state = 71},
  [66] = {.lex_state = 79},
  [67] = {.lex_state = 82},
  [68] = {.lex_state = 71},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 77},
  [71] = {.lex_state = 74},
  [72] = {.lex_state = 42},
  [73] = {.lex_state = 90},
  [74] = {.lex_state = 77},
  [75] = {.lex_state = 42},
  [76] = {.lex_state = 90},
  [77] = {.lex_state = 85},
  [78] = {.lex_state = 42},
  [79] = {.lex_state = 38},
  [80] = {.lex_state = 92},
  [81] = {.lex_state = 90},
  [82] = {.lex_state = 74},
  [83] = {.lex_state = 42},
  [84] = {.lex_state = 90},
  [85] = {.lex_state = 93},
  [86] = {.lex_state = 77},
  [87] = {.lex_state = 42},
  [88] = {.lex_state = 85},
  [89] = {.lex_state = 38},
  [90] = {.lex_state = 42},
  [91] = {.lex_state = 92},
  [92] = {.lex_state = 42},
  [93] = {.lex_state = 93},
  [94] = {.lex_state = 88},
  [95] = {.lex_state = 38},
  [96] = {.lex_state = 71},
  [97] = {.lex_state = 42},
  [98] = {.lex_state = 71},
  [99] = {.lex_state = 90},
  [100] = {.lex_state = 42},
  [101] = {.lex_state = 94},
  [102] = {.lex_state = 42},
  [103] = {.lex_state = 94},
  [104] = {.lex_state = 71},
  [105] = {.lex_state = 94},
  [106] = {.lex_state = 42},
  [107] = {.lex_state = 94},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(3),
    [sym__ws] = ACTIONS(3),
    [sym_comment_command] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(3),
    [sym_key_b] = ACTIONS(3),
    [sym_key_p] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(3),
    [sym__at_command] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
  },
  [2] = {
    [sym__ws] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(13),
  },
  [4] = {
    [sym__at_command] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(9),
  },
  [5] = {
    [sym__command] = STATE(10),
    [sym_string] = STATE(10),
    [sym_preamble] = STATE(10),
    [sym_entry] = STATE(10),
    [sym_comment_command] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKgG_RBRACK_SLASH] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
  },
  [6] = {
    [sym__at_command] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(32),
  },
  [7] = {
    [sym__ws] = ACTIONS(35),
  },
  [8] = {
    [sym__ws] = ACTIONS(37),
  },
  [9] = {
    [sym__ws] = ACTIONS(39),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(43),
  },
  [11] = {
    [sym__string_block] = STATE(16),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
  },
  [12] = {
    [sym__preamble_block] = STATE(19),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
  },
  [13] = {
    [sym__entry_block] = STATE(22),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(55),
  },
  [14] = {
    [sym_string_body] = STATE(24),
    [sym_identifier] = ACTIONS(57),
  },
  [15] = {
    [sym_string_body] = STATE(26),
    [sym_identifier] = ACTIONS(59),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_comment] = ACTIONS(61),
    [anon_sym_AT] = ACTIONS(63),
  },
  [17] = {
    [sym_preamble_body] = STATE(30),
    [sym_value] = STATE(31),
    [sym_piece] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [18] = {
    [sym_preamble_body] = STATE(33),
    [sym_value] = STATE(31),
    [sym_piece] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_comment] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(73),
  },
  [20] = {
    [sym__ws] = ACTIONS(75),
  },
  [21] = {
    [sym__ws] = ACTIONS(77),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(81),
  },
  [23] = {
    [sym__ws] = ACTIONS(83),
  },
  [24] = {
    [anon_sym_RBRACE] = ACTIONS(85),
  },
  [25] = {
    [sym__ws] = ACTIONS(87),
  },
  [26] = {
    [anon_sym_RPAREN] = ACTIONS(85),
  },
  [27] = {
    [sym__balanced] = STATE(42),
    [aux_sym_piece_repeat1] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(91),
    [sym__text] = ACTIONS(93),
  },
  [28] = {
    [sym__ws] = ACTIONS(95),
  },
  [29] = {
    [sym__quote_balanced] = STATE(44),
    [aux_sym_piece_repeat2] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym__quote_text] = ACTIONS(99),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(101),
  },
  [31] = {
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
  },
  [32] = {
    [sym__ws] = ACTIONS(105),
  },
  [33] = {
    [anon_sym_RPAREN] = ACTIONS(101),
  },
  [34] = {
    [sym__ws] = ACTIONS(107),
  },
  [35] = {
    [sym_key_b] = ACTIONS(109),
  },
  [36] = {
    [sym_key_p] = ACTIONS(111),
  },
  [37] = {
    [anon_sym_EQ] = ACTIONS(113),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_comment] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(117),
  },
  [39] = {
    [anon_sym_EQ] = ACTIONS(119),
  },
  [40] = {
    [sym__balanced] = STATE(53),
    [aux_sym_piece_repeat1] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym__text] = ACTIONS(123),
  },
  [41] = {
    [sym__ws] = ACTIONS(125),
  },
  [42] = {
    [sym__balanced] = STATE(55),
    [aux_sym_piece_repeat1] = STATE(55),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym__text] = ACTIONS(129),
  },
  [43] = {
    [sym__balanced] = STATE(57),
    [aux_sym_piece_repeat1] = STATE(57),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym__text] = ACTIONS(133),
  },
  [44] = {
    [sym__quote_balanced] = STATE(58),
    [aux_sym_piece_repeat2] = STATE(58),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym__quote_text] = ACTIONS(135),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_comment] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(139),
  },
  [46] = {
    [aux_sym_value_repeat1] = STATE(60),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
  },
  [47] = {
    [aux_sym_value_repeat1] = STATE(61),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(143),
  },
  [48] = {
    [sym__ws] = ACTIONS(145),
  },
  [49] = {
    [sym__ws] = ACTIONS(147),
  },
  [50] = {
    [sym__ws] = ACTIONS(149),
  },
  [51] = {
    [sym__ws] = ACTIONS(151),
  },
  [52] = {
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [sym__text] = ACTIONS(155),
  },
  [53] = {
    [sym__balanced] = STATE(55),
    [aux_sym_piece_repeat1] = STATE(55),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(157),
    [sym__text] = ACTIONS(129),
  },
  [54] = {
    [sym__ws] = ACTIONS(159),
  },
  [55] = {
    [sym__balanced] = STATE(55),
    [aux_sym_piece_repeat1] = STATE(55),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(164),
    [sym__text] = ACTIONS(166),
  },
  [56] = {
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__quote_text] = ACTIONS(171),
  },
  [57] = {
    [sym__balanced] = STATE(55),
    [aux_sym_piece_repeat1] = STATE(55),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(173),
    [sym__text] = ACTIONS(129),
  },
  [58] = {
    [sym__quote_balanced] = STATE(58),
    [aux_sym_piece_repeat2] = STATE(58),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [sym__quote_text] = ACTIONS(180),
  },
  [59] = {
    [sym__ws] = ACTIONS(183),
  },
  [60] = {
    [aux_sym_value_repeat1] = STATE(69),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(143),
  },
  [61] = {
    [aux_sym_value_repeat1] = STATE(70),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(143),
  },
  [62] = {
    [aux_sym__entry_block_repeat1] = STATE(73),
    [sym__ws] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(189),
  },
  [63] = {
    [aux_sym__entry_block_repeat1] = STATE(76),
    [sym__ws] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(193),
  },
  [64] = {
    [sym_value] = STATE(77),
    [sym_piece] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [65] = {
    [sym_value] = STATE(77),
    [sym_piece] = STATE(34),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [66] = {
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [sym__text] = ACTIONS(197),
  },
  [67] = {
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [sym__quote_text] = ACTIONS(201),
  },
  [68] = {
    [sym_piece] = STATE(78),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [69] = {
    [aux_sym_value_repeat1] = STATE(69),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(205),
  },
  [70] = {
    [aux_sym_value_repeat1] = STATE(70),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(205),
  },
  [71] = {
    [anon_sym_RBRACE] = ACTIONS(208),
  },
  [72] = {
    [sym_field] = STATE(81),
    [sym__ws] = ACTIONS(210),
  },
  [73] = {
    [aux_sym__entry_block_repeat1] = STATE(84),
    [sym__ws] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(214),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(208),
  },
  [75] = {
    [sym_field] = STATE(81),
    [sym__ws] = ACTIONS(216),
  },
  [76] = {
    [aux_sym__entry_block_repeat1] = STATE(84),
    [sym__ws] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(220),
  },
  [77] = {
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
  },
  [78] = {
    [sym__ws] = ACTIONS(224),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_comment] = ACTIONS(226),
    [anon_sym_AT] = ACTIONS(228),
  },
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(230),
    [sym_identifier] = ACTIONS(232),
  },
  [81] = {
    [sym__ws] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(234),
  },
  [82] = {
    [anon_sym_RBRACE] = ACTIONS(230),
  },
  [83] = {
    [sym_field] = STATE(81),
    [sym__ws] = ACTIONS(236),
  },
  [84] = {
    [aux_sym__entry_block_repeat1] = STATE(84),
    [sym__ws] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(238),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(230),
    [sym_identifier] = ACTIONS(232),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(230),
  },
  [87] = {
    [sym_field] = STATE(81),
    [sym__ws] = ACTIONS(241),
  },
  [88] = {
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_POUND] = ACTIONS(243),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_comment] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(247),
  },
  [90] = {
    [sym__ws] = ACTIONS(249),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym_identifier] = ACTIONS(232),
  },
  [92] = {
    [sym_field] = STATE(81),
    [sym__ws] = ACTIONS(253),
  },
  [93] = {
    [anon_sym_RPAREN] = ACTIONS(251),
    [sym_identifier] = ACTIONS(232),
  },
  [94] = {
    [anon_sym_EQ] = ACTIONS(255),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_comment] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(259),
  },
  [96] = {
    [sym_identifier] = ACTIONS(232),
  },
  [97] = {
    [sym__ws] = ACTIONS(261),
  },
  [98] = {
    [sym_value] = STATE(99),
    [sym_piece] = STATE(100),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [99] = {
    [sym__ws] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
  },
  [100] = {
    [sym__ws] = ACTIONS(265),
  },
  [101] = {
    [aux_sym_value_repeat1] = STATE(103),
    [sym__ws] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_POUND] = ACTIONS(269),
  },
  [102] = {
    [sym__ws] = ACTIONS(271),
  },
  [103] = {
    [aux_sym_value_repeat1] = STATE(105),
    [sym__ws] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(269),
  },
  [104] = {
    [sym_piece] = STATE(106),
    [anon_sym_LBRACE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [105] = {
    [aux_sym_value_repeat1] = STATE(105),
    [sym__ws] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_POUND] = ACTIONS(277),
  },
  [106] = {
    [sym__ws] = ACTIONS(280),
  },
  [107] = {
    [sym__ws] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_POUND] = ACTIONS(282),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(10),
  [21] = {.count = 1, .reusable = false}, SHIFT(7),
  [23] = {.count = 1, .reusable = false}, SHIFT(8),
  [25] = {.count = 1, .reusable = false}, SHIFT(9),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [32] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.count = 1, .reusable = false}, SHIFT(11),
  [37] = {.count = 1, .reusable = false}, SHIFT(12),
  [39] = {.count = 1, .reusable = false}, SHIFT(13),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym__at_command, 3),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym__at_command, 3),
  [45] = {.count = 1, .reusable = true}, SHIFT(14),
  [47] = {.count = 1, .reusable = true}, SHIFT(15),
  [49] = {.count = 1, .reusable = true}, SHIFT(17),
  [51] = {.count = 1, .reusable = true}, SHIFT(18),
  [53] = {.count = 1, .reusable = true}, SHIFT(20),
  [55] = {.count = 1, .reusable = true}, SHIFT(21),
  [57] = {.count = 1, .reusable = true}, SHIFT(23),
  [59] = {.count = 1, .reusable = true}, SHIFT(25),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [65] = {.count = 1, .reusable = true}, SHIFT(27),
  [67] = {.count = 1, .reusable = true}, SHIFT(28),
  [69] = {.count = 1, .reusable = true}, SHIFT(29),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_preamble, 3),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_preamble, 3),
  [75] = {.count = 1, .reusable = false}, SHIFT(35),
  [77] = {.count = 1, .reusable = false}, SHIFT(36),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_entry, 3),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_entry, 3),
  [83] = {.count = 1, .reusable = false}, SHIFT(37),
  [85] = {.count = 1, .reusable = true}, SHIFT(38),
  [87] = {.count = 1, .reusable = false}, SHIFT(39),
  [89] = {.count = 1, .reusable = false}, SHIFT(40),
  [91] = {.count = 1, .reusable = false}, SHIFT(41),
  [93] = {.count = 1, .reusable = true}, SHIFT(42),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_piece, 1),
  [97] = {.count = 1, .reusable = false}, SHIFT(43),
  [99] = {.count = 1, .reusable = true}, SHIFT(44),
  [101] = {.count = 1, .reusable = true}, SHIFT(45),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_preamble_body, 1),
  [105] = {.count = 1, .reusable = false}, SHIFT(46),
  [107] = {.count = 1, .reusable = false}, SHIFT(47),
  [109] = {.count = 1, .reusable = true}, SHIFT(48),
  [111] = {.count = 1, .reusable = true}, SHIFT(49),
  [113] = {.count = 1, .reusable = true}, SHIFT(50),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__string_block, 3),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym__string_block, 3),
  [119] = {.count = 1, .reusable = true}, SHIFT(51),
  [121] = {.count = 1, .reusable = false}, SHIFT(52),
  [123] = {.count = 1, .reusable = true}, SHIFT(53),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_piece, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(54),
  [129] = {.count = 1, .reusable = true}, SHIFT(55),
  [131] = {.count = 1, .reusable = false}, SHIFT(56),
  [133] = {.count = 1, .reusable = true}, SHIFT(57),
  [135] = {.count = 1, .reusable = true}, SHIFT(58),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__preamble_block, 3),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__preamble_block, 3),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_value, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(59),
  [145] = {.count = 1, .reusable = false}, SHIFT(62),
  [147] = {.count = 1, .reusable = false}, SHIFT(63),
  [149] = {.count = 1, .reusable = false}, SHIFT(64),
  [151] = {.count = 1, .reusable = false}, SHIFT(65),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym__balanced, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym__balanced, 2),
  [157] = {.count = 1, .reusable = false}, SHIFT(66),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_piece, 3),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_piece_repeat1, 2), SHIFT_REPEAT(40),
  [164] = {.count = 1, .reusable = false}, REDUCE(aux_sym_piece_repeat1, 2),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_piece_repeat1, 2), SHIFT_REPEAT(55),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym__quote_balanced, 2),
  [173] = {.count = 1, .reusable = false}, SHIFT(67),
  [175] = {.count = 2, .reusable = false}, REDUCE(aux_sym_piece_repeat2, 2), SHIFT_REPEAT(43),
  [178] = {.count = 1, .reusable = false}, REDUCE(aux_sym_piece_repeat2, 2),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_piece_repeat2, 2), SHIFT_REPEAT(58),
  [183] = {.count = 1, .reusable = false}, SHIFT(68),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_value, 3),
  [187] = {.count = 1, .reusable = false}, SHIFT(71),
  [189] = {.count = 1, .reusable = false}, SHIFT(72),
  [191] = {.count = 1, .reusable = false}, SHIFT(74),
  [193] = {.count = 1, .reusable = false}, SHIFT(75),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__balanced, 3),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__balanced, 3),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym__quote_balanced, 3),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__quote_balanced, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(59),
  [208] = {.count = 1, .reusable = true}, SHIFT(79),
  [210] = {.count = 1, .reusable = false}, SHIFT(80),
  [212] = {.count = 1, .reusable = false}, SHIFT(82),
  [214] = {.count = 1, .reusable = false}, SHIFT(83),
  [216] = {.count = 1, .reusable = false}, SHIFT(85),
  [218] = {.count = 1, .reusable = false}, SHIFT(86),
  [220] = {.count = 1, .reusable = false}, SHIFT(87),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_string_body, 5),
  [224] = {.count = 1, .reusable = false}, SHIFT(88),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym__entry_block, 6),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym__entry_block, 6),
  [230] = {.count = 1, .reusable = true}, SHIFT(89),
  [232] = {.count = 1, .reusable = true}, SHIFT(90),
  [234] = {.count = 1, .reusable = false}, REDUCE(aux_sym__entry_block_repeat1, 2),
  [236] = {.count = 1, .reusable = false}, SHIFT(91),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym__entry_block_repeat1, 2), SHIFT_REPEAT(92),
  [241] = {.count = 1, .reusable = false}, SHIFT(93),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_repeat1, 4),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__entry_block, 7),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym__entry_block, 7),
  [249] = {.count = 1, .reusable = false}, SHIFT(94),
  [251] = {.count = 1, .reusable = true}, SHIFT(95),
  [253] = {.count = 1, .reusable = false}, SHIFT(96),
  [255] = {.count = 1, .reusable = true}, SHIFT(97),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym__entry_block, 8),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym__entry_block, 8),
  [261] = {.count = 1, .reusable = false}, SHIFT(98),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_field, 6),
  [265] = {.count = 1, .reusable = false}, SHIFT(101),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_value, 2),
  [269] = {.count = 1, .reusable = false}, SHIFT(102),
  [271] = {.count = 1, .reusable = false}, SHIFT(104),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_value, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2),
  [277] = {.count = 2, .reusable = false}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(102),
  [280] = {.count = 1, .reusable = false}, SHIFT(107),
  [282] = {.count = 1, .reusable = false}, REDUCE(aux_sym_value_repeat1, 4),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}

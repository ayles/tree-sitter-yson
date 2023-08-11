#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LT = 1,
  anon_sym_SEMI = 2,
  anon_sym_GT = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_EQ = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  aux_sym_string_content_token1 = 11,
  sym_escape_sequence = 12,
  sym_number = 13,
  sym_true = 14,
  sym_false = 15,
  sym_nan = 16,
  sym_inf = 17,
  sym_entity = 18,
  sym_comment = 19,
  sym_document = 20,
  sym__tree = 21,
  sym_attributes = 22,
  sym__value = 23,
  sym_object = 24,
  sym_pair = 25,
  sym_array = 26,
  sym_string = 27,
  sym_string_content = 28,
  aux_sym_document_repeat1 = 29,
  aux_sym_attributes_repeat1 = 30,
  aux_sym_array_repeat1 = 31,
  aux_sym_string_content_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_SEMI] = ";",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_nan] = "nan",
  [sym_inf] = "inf",
  [sym_entity] = "entity",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__tree] = "_tree",
  [sym_attributes] = "attributes",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_nan] = sym_nan,
  [sym_inf] = sym_inf,
  [sym_entity] = sym_entity,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__tree] = sym__tree,
  [sym_attributes] = sym_attributes,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
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
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_nan] = {
    .visible = true,
    .named = true,
  },
  [sym_inf] = {
    .visible = true,
    .named = true,
  },
  [sym_entity] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__tree] = {
    .visible = false,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(31);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '%' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_nan);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_inf);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_entity);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_nan] = ACTIONS(1),
    [sym_inf] = ACTIONS(1),
    [sym_entity] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(53),
    [sym__tree] = STATE(2),
    [sym_attributes] = STATE(21),
    [sym__value] = STATE(2),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_string_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nan] = ACTIONS(17),
    [sym_inf] = ACTIONS(17),
    [sym_entity] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__tree] = STATE(3),
    [sym_attributes] = STATE(21),
    [sym__value] = STATE(3),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_string_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nan] = ACTIONS(17),
    [sym_inf] = ACTIONS(17),
    [sym_entity] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__tree] = STATE(3),
    [sym_attributes] = STATE(21),
    [sym__value] = STATE(3),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [aux_sym_string_token1] = ACTIONS(35),
    [sym_number] = ACTIONS(38),
    [sym_true] = ACTIONS(38),
    [sym_false] = ACTIONS(38),
    [sym_nan] = ACTIONS(38),
    [sym_inf] = ACTIONS(38),
    [sym_entity] = ACTIONS(38),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_EQ] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [aux_sym_string_token1] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_true] = ACTIONS(41),
    [sym_false] = ACTIONS(41),
    [sym_nan] = ACTIONS(41),
    [sym_inf] = ACTIONS(41),
    [sym_entity] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_string_token1] = ACTIONS(43),
    [sym_number] = ACTIONS(43),
    [sym_true] = ACTIONS(43),
    [sym_false] = ACTIONS(43),
    [sym_nan] = ACTIONS(43),
    [sym_inf] = ACTIONS(43),
    [sym_entity] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [aux_sym_string_token1] = ACTIONS(45),
    [sym_number] = ACTIONS(45),
    [sym_true] = ACTIONS(45),
    [sym_false] = ACTIONS(45),
    [sym_nan] = ACTIONS(45),
    [sym_inf] = ACTIONS(45),
    [sym_entity] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__tree] = STATE(38),
    [sym_attributes] = STATE(21),
    [sym__value] = STATE(38),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_string_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nan] = ACTIONS(17),
    [sym_inf] = ACTIONS(17),
    [sym_entity] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [aux_sym_string_token1] = ACTIONS(47),
    [sym_number] = ACTIONS(47),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_nan] = ACTIONS(47),
    [sym_inf] = ACTIONS(47),
    [sym_entity] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_string_token1] = ACTIONS(49),
    [sym_number] = ACTIONS(49),
    [sym_true] = ACTIONS(49),
    [sym_false] = ACTIONS(49),
    [sym_nan] = ACTIONS(49),
    [sym_inf] = ACTIONS(49),
    [sym_entity] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [aux_sym_string_token1] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_nan] = ACTIONS(51),
    [sym_inf] = ACTIONS(51),
    [sym_entity] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [aux_sym_string_token1] = ACTIONS(53),
    [sym_number] = ACTIONS(53),
    [sym_true] = ACTIONS(53),
    [sym_false] = ACTIONS(53),
    [sym_nan] = ACTIONS(53),
    [sym_inf] = ACTIONS(53),
    [sym_entity] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [aux_sym_string_token1] = ACTIONS(55),
    [sym_number] = ACTIONS(55),
    [sym_true] = ACTIONS(55),
    [sym_false] = ACTIONS(55),
    [sym_nan] = ACTIONS(55),
    [sym_inf] = ACTIONS(55),
    [sym_entity] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [aux_sym_string_token1] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym_true] = ACTIONS(57),
    [sym_false] = ACTIONS(57),
    [sym_nan] = ACTIONS(57),
    [sym_inf] = ACTIONS(57),
    [sym_entity] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [aux_sym_string_token1] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
    [sym_true] = ACTIONS(59),
    [sym_false] = ACTIONS(59),
    [sym_nan] = ACTIONS(59),
    [sym_inf] = ACTIONS(59),
    [sym_entity] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__value] = STATE(40),
    [sym_object] = STATE(8),
    [sym_array] = STATE(8),
    [sym_string] = STATE(8),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_string_token1] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_nan] = ACTIONS(17),
    [sym_inf] = ACTIONS(17),
    [sym_entity] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [aux_sym_string_token1] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_false] = ACTIONS(65),
    [sym_nan] = ACTIONS(65),
    [sym_inf] = ACTIONS(65),
    [sym_entity] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [aux_sym_string_token1] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_true] = ACTIONS(67),
    [sym_false] = ACTIONS(67),
    [sym_nan] = ACTIONS(67),
    [sym_inf] = ACTIONS(67),
    [sym_entity] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__value,
    STATE(8), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(17), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_nan,
      sym_inf,
      sym_entity,
  [35] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__value,
    STATE(8), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(17), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_nan,
      sym_inf,
      sym_entity,
  [70] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 15,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_number,
      sym_true,
      sym_false,
      sym_nan,
      sym_inf,
      sym_entity,
  [91] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    STATE(20), 1,
      sym__value,
    STATE(8), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(17), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_nan,
      sym_inf,
      sym_entity,
  [123] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    STATE(47), 1,
      sym__value,
    STATE(8), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(17), 6,
      sym_number,
      sym_true,
      sym_false,
      sym_nan,
      sym_inf,
      sym_entity,
  [155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_number,
      sym_true,
      sym_false,
      sym_nan,
      sym_inf,
      sym_entity,
  [171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_number,
      sym_true,
      sym_false,
      sym_nan,
      sym_inf,
      sym_entity,
  [187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_number,
      sym_true,
      sym_false,
      sym_nan,
      sym_inf,
      sym_entity,
  [203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym_number,
      sym_true,
      sym_false,
      sym_nan,
      sym_inf,
      sym_entity,
  [219] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    ACTIONS(85), 1,
      anon_sym_GT,
    STATE(46), 1,
      sym_pair,
    STATE(51), 1,
      sym_string,
  [241] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    ACTIONS(87), 1,
      anon_sym_SEMI,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_pair,
    STATE(51), 1,
      sym_string,
  [263] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    ACTIONS(91), 1,
      anon_sym_GT,
    STATE(39), 1,
      sym_pair,
    STATE(51), 1,
      sym_string,
  [282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_pair,
    STATE(51), 1,
      sym_string,
  [301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_pair,
    STATE(51), 1,
      sym_string,
  [320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    ACTIONS(97), 1,
      anon_sym_GT,
    STATE(39), 1,
      sym_pair,
    STATE(51), 1,
      sym_string,
  [339] = 5,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_string_content_repeat1,
    STATE(48), 1,
      sym_string_content,
    ACTIONS(101), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_attributes_repeat1,
    ACTIONS(108), 2,
      anon_sym_GT,
      anon_sym_RBRACE,
  [370] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_token1,
    STATE(39), 1,
      sym_pair,
    STATE(51), 1,
      sym_string,
  [386] = 4,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(112), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [400] = 4,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(116), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_RBRACE,
  [423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 3,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_RBRACE,
  [432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_array_repeat1,
  [445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_attributes_repeat1,
  [458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    ACTIONS(127), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      aux_sym_array_repeat1,
  [471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_attributes_repeat1,
  [484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_array_repeat1,
  [497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_attributes_repeat1,
  [510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      anon_sym_GT,
    STATE(45), 1,
      aux_sym_attributes_repeat1,
  [523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
  [538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
  [545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
  [552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_EQ,
  [559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_GT,
  [566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 35,
  [SMALL_STATE(20)] = 70,
  [SMALL_STATE(21)] = 91,
  [SMALL_STATE(22)] = 123,
  [SMALL_STATE(23)] = 155,
  [SMALL_STATE(24)] = 171,
  [SMALL_STATE(25)] = 187,
  [SMALL_STATE(26)] = 203,
  [SMALL_STATE(27)] = 219,
  [SMALL_STATE(28)] = 241,
  [SMALL_STATE(29)] = 263,
  [SMALL_STATE(30)] = 282,
  [SMALL_STATE(31)] = 301,
  [SMALL_STATE(32)] = 320,
  [SMALL_STATE(33)] = 339,
  [SMALL_STATE(34)] = 356,
  [SMALL_STATE(35)] = 370,
  [SMALL_STATE(36)] = 386,
  [SMALL_STATE(37)] = 400,
  [SMALL_STATE(38)] = 414,
  [SMALL_STATE(39)] = 423,
  [SMALL_STATE(40)] = 432,
  [SMALL_STATE(41)] = 445,
  [SMALL_STATE(42)] = 458,
  [SMALL_STATE(43)] = 471,
  [SMALL_STATE(44)] = 484,
  [SMALL_STATE(45)] = 497,
  [SMALL_STATE(46)] = 510,
  [SMALL_STATE(47)] = 523,
  [SMALL_STATE(48)] = 531,
  [SMALL_STATE(49)] = 538,
  [SMALL_STATE(50)] = 545,
  [SMALL_STATE(51)] = 552,
  [SMALL_STATE(52)] = 559,
  [SMALL_STATE(53)] = 566,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tree, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(35),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(37),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(22),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_yson(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

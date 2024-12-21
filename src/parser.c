#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_EQ = 2,
  sym_alias_keyword = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_uint = 9,
  sym_color = 10,
  sym_literal = 11,
  sym_bool = 12,
  sym_line_comment = 13,
  sym_block_comment = 14,
  sym_type_value_identifier = 15,
  sym_source_file = 16,
  sym_alias_definitions = 17,
  sym_alias_definition = 18,
  sym_node_type_definition = 19,
  sym_constructor = 20,
  sym_property_list = 21,
  sym_property_definition = 22,
  sym_children_definition = 23,
  sym__property_value = 24,
  sym_type_value_definition = 25,
  aux_sym_alias_definitions_repeat1 = 26,
  aux_sym_property_list_repeat1 = 27,
  aux_sym_children_definition_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [sym_alias_keyword] = "alias_keyword",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_uint] = "uint",
  [sym_color] = "color",
  [sym_literal] = "literal",
  [sym_bool] = "bool",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_type_value_identifier] = "type_value_identifier",
  [sym_source_file] = "source_file",
  [sym_alias_definitions] = "alias_definitions",
  [sym_alias_definition] = "alias_definition",
  [sym_node_type_definition] = "node_type_definition",
  [sym_constructor] = "constructor",
  [sym_property_list] = "property_list",
  [sym_property_definition] = "property_definition",
  [sym_children_definition] = "children_definition",
  [sym__property_value] = "_property_value",
  [sym_type_value_definition] = "type_value_definition",
  [aux_sym_alias_definitions_repeat1] = "alias_definitions_repeat1",
  [aux_sym_property_list_repeat1] = "property_list_repeat1",
  [aux_sym_children_definition_repeat1] = "children_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_alias_keyword] = sym_alias_keyword,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_uint] = sym_uint,
  [sym_color] = sym_color,
  [sym_literal] = sym_literal,
  [sym_bool] = sym_bool,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_type_value_identifier] = sym_type_value_identifier,
  [sym_source_file] = sym_source_file,
  [sym_alias_definitions] = sym_alias_definitions,
  [sym_alias_definition] = sym_alias_definition,
  [sym_node_type_definition] = sym_node_type_definition,
  [sym_constructor] = sym_constructor,
  [sym_property_list] = sym_property_list,
  [sym_property_definition] = sym_property_definition,
  [sym_children_definition] = sym_children_definition,
  [sym__property_value] = sym__property_value,
  [sym_type_value_definition] = sym_type_value_definition,
  [aux_sym_alias_definitions_repeat1] = aux_sym_alias_definitions_repeat1,
  [aux_sym_property_list_repeat1] = aux_sym_property_list_repeat1,
  [aux_sym_children_definition_repeat1] = aux_sym_children_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_alias_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_uint] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_type_value_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_definitions] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_node_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_property_list] = {
    .visible = true,
    .named = true,
  },
  [sym_property_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_children_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__property_value] = {
    .visible = false,
    .named = true,
  },
  [sym_type_value_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_alias_definitions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_children_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '#', 9,
        '(', 13,
        ')', 14,
        ',', 15,
        '/', 3,
        '=', 12,
        'f', 18,
        't', 21,
        '{', 16,
        '}', 17,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_uint);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_uint);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_color);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_color);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_alias_keyword);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 2, .external_lex_state = 1},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_alias_keyword] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_uint] = ACTIONS(1),
    [sym_color] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_type_value_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_alias_definitions] = STATE(24),
    [sym_alias_definition] = STATE(7),
    [sym_node_type_definition] = STATE(31),
    [aux_sym_alias_definitions_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(5),
    [sym_alias_keyword] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 2,
      sym_alias_keyword,
      sym_identifier,
    ACTIONS(9), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [16] = 5,
    ACTIONS(15), 1,
      sym_bool,
    ACTIONS(17), 1,
      sym_type_value_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(25), 2,
      sym__property_value,
      sym_type_value_definition,
    ACTIONS(13), 3,
      sym_uint,
      sym_color,
      sym_literal,
  [36] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(21), 2,
      sym_alias_keyword,
      sym_identifier,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [52] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_children_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [68] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(12), 2,
      sym_node_type_definition,
      aux_sym_children_definition_repeat1,
  [83] = 4,
    ACTIONS(7), 1,
      sym_alias_keyword,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_alias_definition,
      aux_sym_alias_definitions_repeat1,
  [98] = 4,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(8), 2,
      sym_node_type_definition,
      aux_sym_children_definition_repeat1,
  [113] = 5,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_property_definition,
    STATE(32), 1,
      sym_property_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [130] = 4,
    ACTIONS(42), 1,
      sym_identifier,
    ACTIONS(44), 1,
      sym_alias_keyword,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_alias_definition,
      aux_sym_alias_definitions_repeat1,
  [145] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      sym_alias_keyword,
      sym_identifier,
    ACTIONS(49), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [158] = 4,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(8), 2,
      sym_node_type_definition,
      aux_sym_children_definition_repeat1,
  [173] = 4,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_property_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [187] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [197] = 4,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [211] = 4,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_property_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [225] = 4,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [239] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [249] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [259] = 4,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [273] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(74), 2,
      sym_alias_keyword,
      sym_identifier,
  [282] = 3,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_constructor,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [293] = 3,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_constructor,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [304] = 3,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(35), 1,
      sym_node_type_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [315] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(78), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [324] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(57), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [333] = 3,
    ACTIONS(17), 1,
      sym_type_value_identifier,
    STATE(21), 1,
      sym_type_value_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [344] = 3,
    ACTIONS(38), 1,
      sym_identifier,
    STATE(26), 1,
      sym_property_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [355] = 2,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [363] = 2,
    ACTIONS(82), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [371] = 2,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [379] = 2,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [387] = 2,
    ACTIONS(88), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [395] = 2,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [403] = 2,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 130,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 158,
  [SMALL_STATE(13)] = 173,
  [SMALL_STATE(14)] = 187,
  [SMALL_STATE(15)] = 197,
  [SMALL_STATE(16)] = 211,
  [SMALL_STATE(17)] = 225,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 249,
  [SMALL_STATE(20)] = 259,
  [SMALL_STATE(21)] = 273,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 293,
  [SMALL_STATE(24)] = 304,
  [SMALL_STATE(25)] = 315,
  [SMALL_STATE(26)] = 324,
  [SMALL_STATE(27)] = 333,
  [SMALL_STATE(28)] = 344,
  [SMALL_STATE(29)] = 355,
  [SMALL_STATE(30)] = 363,
  [SMALL_STATE(31)] = 371,
  [SMALL_STATE(32)] = 379,
  [SMALL_STATE(33)] = 387,
  [SMALL_STATE(34)] = 395,
  [SMALL_STATE(35)] = 403,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 3, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_type_definition, 2, 0, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_definitions, 1, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_definition_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_alias_definitions_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_alias_definitions_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_value_definition, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_value_definition, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_definition, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_definition, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_type_definition, 3, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_definition, 4, 0, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 3, 0, 1),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_type_value_identifier = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_type_value_identifier] = sym_type_value_identifier,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_type_value_identifier] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_noti_external_scanner_create(void);
void tree_sitter_noti_external_scanner_destroy(void *);
bool tree_sitter_noti_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_noti_external_scanner_serialize(void *, char *);
void tree_sitter_noti_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_noti(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_noti_external_scanner_create,
      tree_sitter_noti_external_scanner_destroy,
      tree_sitter_noti_external_scanner_scan,
      tree_sitter_noti_external_scanner_serialize,
      tree_sitter_noti_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

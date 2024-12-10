#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_EQ = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  sym_uint = 8,
  sym_color = 9,
  sym_literal = 10,
  sym_bool = 11,
  sym_type_value_identifier = 12,
  sym_line_comment = 13,
  sym_block_comment = 14,
  sym_source_file = 15,
  sym_node_type_definition = 16,
  sym_property_list = 17,
  sym_property_definition = 18,
  sym_children_definition = 19,
  sym__property_value = 20,
  sym_type_value_definition = 21,
  aux_sym_property_list_repeat1 = 22,
  aux_sym_children_definition_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_uint] = "uint",
  [sym_color] = "color",
  [sym_literal] = "literal",
  [sym_bool] = "bool",
  [sym_type_value_identifier] = "type_value_identifier",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym_node_type_definition] = "node_type_definition",
  [sym_property_list] = "property_list",
  [sym_property_definition] = "property_definition",
  [sym_children_definition] = "children_definition",
  [sym__property_value] = "_property_value",
  [sym_type_value_definition] = "type_value_definition",
  [aux_sym_property_list_repeat1] = "property_list_repeat1",
  [aux_sym_children_definition_repeat1] = "children_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_uint] = sym_uint,
  [sym_color] = sym_color,
  [sym_literal] = sym_literal,
  [sym_bool] = sym_bool,
  [sym_type_value_identifier] = sym_type_value_identifier,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym_node_type_definition] = sym_node_type_definition,
  [sym_property_list] = sym_property_list,
  [sym_property_definition] = sym_property_definition,
  [sym_children_definition] = sym_children_definition,
  [sym__property_value] = sym__property_value,
  [sym_type_value_definition] = sym_type_value_definition,
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
  [anon_sym_EQ] = {
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
  [sym_type_value_identifier] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_node_type_definition] = {
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '#', 7,
        '(', 10,
        ')', 11,
        ',', 12,
        '/', 4,
        '=', 13,
        'f', 16,
        't', 19,
        '{', 14,
        '}', 15,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_uint);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_color);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == 'l') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == 's') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '(') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_literal);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_type_value_identifier);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_uint] = ACTIONS(1),
    [sym_color] = ACTIONS(1),
    [sym_literal] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym_node_type_definition] = STATE(27),
    [sym_identifier] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      sym_bool,
    ACTIONS(11), 1,
      sym_type_value_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(20), 2,
      sym__property_value,
      sym_type_value_definition,
    ACTIONS(7), 3,
      sym_uint,
      sym_color,
      sym_literal,
  [20] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_children_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [36] = 4,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_children_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [52] = 4,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym_node_type_definition,
      aux_sym_children_definition_repeat1,
  [67] = 5,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(26), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_property_definition,
    STATE(25), 1,
      sym_property_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [84] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(8), 2,
      sym_node_type_definition,
      aux_sym_children_definition_repeat1,
  [99] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym_node_type_definition,
      aux_sym_children_definition_repeat1,
  [114] = 5,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_property_definition,
    STATE(29), 1,
      sym_property_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [131] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [141] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [151] = 4,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [165] = 4,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_property_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [179] = 4,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [193] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [203] = 4,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_property_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [217] = 4,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_property_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [231] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
  [241] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(38), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [250] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(55), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [259] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(57), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [268] = 3,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(19), 1,
      sym_property_definition,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [279] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [288] = 2,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [296] = 2,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [304] = 2,
    ACTIONS(65), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [312] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [320] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [328] = 2,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 67,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 114,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 141,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 165,
  [SMALL_STATE(14)] = 179,
  [SMALL_STATE(15)] = 193,
  [SMALL_STATE(16)] = 203,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 241,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 259,
  [SMALL_STATE(22)] = 268,
  [SMALL_STATE(23)] = 279,
  [SMALL_STATE(24)] = 288,
  [SMALL_STATE(25)] = 296,
  [SMALL_STATE(26)] = 304,
  [SMALL_STATE(27)] = 312,
  [SMALL_STATE(28)] = 320,
  [SMALL_STATE(29)] = 328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_type_definition, 3, 0, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_type_definition, 4, 0, 1),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_definition_repeat1, 2, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_type_definition, 5, 0, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_definition, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_list_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_list, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children_definition, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_definition, 3, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_value_definition, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_value_definition, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

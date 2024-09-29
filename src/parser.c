#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_namespace = 1,
  anon_sym_SEMI = 2,
  anon_sym_def = 3,
  anon_sym_record = 4,
  anon_sym_end = 5,
  anon_sym_template = 6,
  anon_sym_do = 7,
  sym_type_ident = 8,
  sym_var_ident = 9,
  sym_comment = 10,
  anon_sym_POUND = 11,
  aux_sym_documentation_token1 = 12,
  anon_sym_LF = 13,
  sym_source = 14,
  sym_namespace = 15,
  sym__toplevel_stmt = 16,
  sym_def_record = 17,
  sym_record_components = 18,
  sym_record_component = 19,
  sym_def_template = 20,
  sym_ns_ident = 21,
  sym_documentation = 22,
  aux_sym_source_repeat1 = 23,
  aux_sym_record_components_repeat1 = 24,
  aux_sym_documentation_repeat1 = 25,
  anon_alias_sym_ = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_namespace] = "namespace",
  [anon_sym_SEMI] = ";",
  [anon_sym_def] = "def",
  [anon_sym_record] = "record",
  [anon_sym_end] = "end",
  [anon_sym_template] = "template",
  [anon_sym_do] = "do",
  [sym_type_ident] = "ident",
  [sym_var_ident] = "ident",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "#",
  [aux_sym_documentation_token1] = "documentation_token1",
  [anon_sym_LF] = "\n",
  [sym_source] = "source",
  [sym_namespace] = "namespace",
  [sym__toplevel_stmt] = "_toplevel_stmt",
  [sym_def_record] = "def_record",
  [sym_record_components] = "components",
  [sym_record_component] = "component",
  [sym_def_template] = "def_template",
  [sym_ns_ident] = "ident",
  [sym_documentation] = "documentation",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_record_components_repeat1] = "record_components_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [anon_alias_sym_] = "",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_do] = anon_sym_do,
  [sym_type_ident] = sym_type_ident,
  [sym_var_ident] = sym_type_ident,
  [sym_comment] = sym_comment,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_documentation_token1] = aux_sym_documentation_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_source] = sym_source,
  [sym_namespace] = sym_namespace,
  [sym__toplevel_stmt] = sym__toplevel_stmt,
  [sym_def_record] = sym_def_record,
  [sym_record_components] = sym_record_components,
  [sym_record_component] = sym_record_component,
  [sym_def_template] = sym_def_template,
  [sym_ns_ident] = sym_type_ident,
  [sym_documentation] = sym_documentation,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_record_components_repeat1] = aux_sym_record_components_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
  [anon_alias_sym_] = anon_alias_sym_,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [sym_type_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_var_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_documentation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_def_record] = {
    .visible = true,
    .named = true,
  },
  [sym_record_components] = {
    .visible = true,
    .named = true,
  },
  [sym_record_component] = {
    .visible = true,
    .named = true,
  },
  [sym_def_template] = {
    .visible = true,
    .named = true,
  },
  [sym_ns_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_documentation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_components_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_documentation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_target = 2,
  field_type = 3,
  field_var = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_target] = "target",
  [field_type] = "type",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_target, 1},
  [2] =
    {field_name, 2},
  [3] =
    {field_type, 2},
    {field_var, 1},
  [5] =
    {field_name, 0},
    {field_type, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 't') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '#') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_type_ident);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_var_ident);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_var_ident);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_var_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(3);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(49);
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
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 46},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [sym_type_ident] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(26),
    [sym_namespace] = STATE(3),
    [sym_documentation] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_namespace] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_def,
    ACTIONS(16), 1,
      anon_sym_template,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_documentation,
    STATE(2), 4,
      sym__toplevel_stmt,
      sym_def_record,
      sym_def_template,
      aux_sym_source_repeat1,
  [25] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_def,
    ACTIONS(26), 1,
      anon_sym_template,
    STATE(39), 1,
      sym_documentation,
    STATE(4), 4,
      sym__toplevel_stmt,
      sym_def_record,
      sym_def_template,
      aux_sym_source_repeat1,
  [50] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(24), 1,
      anon_sym_def,
    ACTIONS(26), 1,
      anon_sym_template,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
      sym_documentation,
    STATE(2), 4,
      sym__toplevel_stmt,
      sym_def_record,
      sym_def_template,
      aux_sym_source_repeat1,
  [75] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_end,
    ACTIONS(32), 1,
      sym_var_ident,
    STATE(31), 1,
      sym_record_components,
    STATE(7), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [92] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_var_ident,
    ACTIONS(34), 1,
      anon_sym_end,
    STATE(42), 1,
      sym_record_components,
    STATE(7), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_var_ident,
    ACTIONS(36), 1,
      anon_sym_end,
    STATE(10), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_POUND,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_end,
    ACTIONS(48), 1,
      sym_var_ident,
    STATE(10), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_POUND,
    STATE(13), 1,
      aux_sym_documentation_repeat1,
    ACTIONS(59), 2,
      anon_sym_namespace,
      anon_sym_def,
  [199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_POUND,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_POUND,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_POUND,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_POUND,
    STATE(13), 1,
      aux_sym_documentation_repeat1,
    ACTIONS(76), 2,
      anon_sym_namespace,
      anon_sym_def,
  [249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_POUND,
    STATE(17), 1,
      aux_sym_documentation_repeat1,
    ACTIONS(80), 2,
      anon_sym_namespace,
      anon_sym_def,
  [263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_POUND,
    ACTIONS(82), 2,
      anon_sym_namespace,
      anon_sym_def,
  [274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_var_ident,
    STATE(43), 1,
      sym_ns_ident,
  [284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_var_ident,
    STATE(29), 1,
      sym_ns_ident,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_end,
      sym_var_ident,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      sym_type_ident,
      sym_var_ident,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_var_ident,
  [317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_record,
  [324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [331] = 2,
    ACTIONS(98), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_documentation_token1,
  [338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_do,
  [345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_type_ident,
  [359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_end,
  [366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_type_ident,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_end,
  [380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_type_ident,
  [387] = 2,
    ACTIONS(98), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_LF,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_record,
  [401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [408] = 2,
    ACTIONS(98), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LF,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_def,
  [422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_type_ident,
  [429] = 2,
    ACTIONS(98), 1,
      sym_comment,
    ACTIONS(128), 1,
      aux_sym_documentation_token1,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_end,
  [443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_SEMI,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_SEMI,
  [457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_namespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 147,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 173,
  [SMALL_STATE(13)] = 185,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 211,
  [SMALL_STATE(16)] = 223,
  [SMALL_STATE(17)] = 235,
  [SMALL_STATE(18)] = 249,
  [SMALL_STATE(19)] = 263,
  [SMALL_STATE(20)] = 274,
  [SMALL_STATE(21)] = 284,
  [SMALL_STATE(22)] = 294,
  [SMALL_STATE(23)] = 302,
  [SMALL_STATE(24)] = 310,
  [SMALL_STATE(25)] = 317,
  [SMALL_STATE(26)] = 324,
  [SMALL_STATE(27)] = 331,
  [SMALL_STATE(28)] = 338,
  [SMALL_STATE(29)] = 345,
  [SMALL_STATE(30)] = 352,
  [SMALL_STATE(31)] = 359,
  [SMALL_STATE(32)] = 366,
  [SMALL_STATE(33)] = 373,
  [SMALL_STATE(34)] = 380,
  [SMALL_STATE(35)] = 387,
  [SMALL_STATE(36)] = 394,
  [SMALL_STATE(37)] = 401,
  [SMALL_STATE(38)] = 408,
  [SMALL_STATE(39)] = 415,
  [SMALL_STATE(40)] = 422,
  [SMALL_STATE(41)] = 429,
  [SMALL_STATE(42)] = 436,
  [SMALL_STATE(43)] = 443,
  [SMALL_STATE(44)] = 450,
  [SMALL_STATE(45)] = 457,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_components, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 4),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_template, 5, 0, 5),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_template, 5, 0, 5),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, 0, 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, 0, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 4, 0, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 4, 0, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 6, 0, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 6, 0, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 5, 0, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 4, 0, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_component, 3, 0, 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ns_ident, 1, 0, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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

TS_PUBLIC const TSLanguage *tree_sitter_tel(void) {
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

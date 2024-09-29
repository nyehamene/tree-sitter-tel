#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 1
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_namespace = 1,
  anon_sym_SEMI = 2,
  anon_sym_def = 3,
  anon_sym_record = 4,
  anon_sym_end = 5,
  sym_type_ident = 6,
  sym_var_ident = 7,
  sym_comment = 8,
  anon_sym_POUND = 9,
  aux_sym_documentation_token1 = 10,
  anon_sym_LF = 11,
  sym_source = 12,
  sym_namespace = 13,
  sym__toplevel_stmt = 14,
  sym_def_record = 15,
  sym_record_components = 16,
  sym_record_component = 17,
  sym_ns_ident = 18,
  sym_documentation = 19,
  aux_sym_source_repeat1 = 20,
  aux_sym_record_components_repeat1 = 21,
  aux_sym_documentation_repeat1 = 22,
  anon_alias_sym_ = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_namespace] = "namespace",
  [anon_sym_SEMI] = ";",
  [anon_sym_def] = "def",
  [anon_sym_record] = "record",
  [anon_sym_end] = "end",
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
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_target] = "target",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_target, 1},
  [2] =
    {field_name, 2},
  [3] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '#') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_type_ident);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_var_ident);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_var_ident);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_var_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(40);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 4},
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
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 37},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_type_ident] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(29),
    [sym_namespace] = STATE(3),
    [sym_documentation] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_namespace] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_def,
    STATE(38), 1,
      sym_documentation,
    STATE(4), 3,
      sym__toplevel_stmt,
      sym_def_record,
      aux_sym_source_repeat1,
  [21] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_def,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_documentation,
    STATE(2), 3,
      sym__toplevel_stmt,
      sym_def_record,
      aux_sym_source_repeat1,
  [42] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_def,
    ACTIONS(22), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_documentation,
    STATE(4), 3,
      sym__toplevel_stmt,
      sym_def_record,
      aux_sym_source_repeat1,
  [63] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_end,
    ACTIONS(27), 1,
      sym_var_ident,
    STATE(37), 1,
      sym_record_components,
    STATE(10), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [80] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_var_ident,
    ACTIONS(29), 1,
      anon_sym_end,
    STATE(28), 1,
      sym_record_components,
    STATE(10), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [97] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    STATE(11), 1,
      aux_sym_documentation_repeat1,
    ACTIONS(31), 2,
      anon_sym_namespace,
      anon_sym_def,
  [111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_end,
    ACTIONS(37), 1,
      sym_var_ident,
    STATE(8), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_documentation_repeat1,
    ACTIONS(40), 2,
      anon_sym_namespace,
      anon_sym_def,
  [139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_var_ident,
    ACTIONS(45), 1,
      anon_sym_end,
    STATE(8), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_documentation_repeat1,
    ACTIONS(47), 2,
      anon_sym_namespace,
      anon_sym_def,
  [167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(57), 2,
      anon_sym_namespace,
      anon_sym_def,
  [200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_POUND,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_POUND,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_end,
      sym_var_ident,
  [252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_var_ident,
    STATE(32), 1,
      sym_ns_ident,
  [262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_var_ident,
    STATE(25), 1,
      sym_ns_ident,
  [272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      sym_type_ident,
      sym_var_ident,
  [280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_record,
  [287] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym_documentation_token1,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_SEMI,
  [301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_record,
  [308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_type_ident,
  [315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_end,
  [322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_namespace,
  [336] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LF,
  [343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_SEMI,
  [350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SEMI,
  [357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_type_ident,
  [364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_SEMI,
  [371] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_LF,
  [378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_end,
  [385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_def,
  [392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_type_ident,
  [399] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_documentation_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 139,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 178,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 200,
  [SMALL_STATE(16)] = 211,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 233,
  [SMALL_STATE(19)] = 244,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 262,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 280,
  [SMALL_STATE(24)] = 287,
  [SMALL_STATE(25)] = 294,
  [SMALL_STATE(26)] = 301,
  [SMALL_STATE(27)] = 308,
  [SMALL_STATE(28)] = 315,
  [SMALL_STATE(29)] = 322,
  [SMALL_STATE(30)] = 329,
  [SMALL_STATE(31)] = 336,
  [SMALL_STATE(32)] = 343,
  [SMALL_STATE(33)] = 350,
  [SMALL_STATE(34)] = 357,
  [SMALL_STATE(35)] = 364,
  [SMALL_STATE(36)] = 371,
  [SMALL_STATE(37)] = 378,
  [SMALL_STATE(38)] = 385,
  [SMALL_STATE(39)] = 392,
  [SMALL_STATE(40)] = 399,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 4, 0, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_components, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 5, 0, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, 0, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, 0, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 6, 0, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 6, 0, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 4, 0, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 4, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_component, 3, 0, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ns_ident, 1, 0, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
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

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  sym_ident = 1,
  sym_comment = 2,
  anon_sym_namespace = 3,
  anon_sym_SEMI = 4,
  anon_sym_def = 5,
  anon_sym_record = 6,
  anon_sym_end = 7,
  anon_sym_template = 8,
  anon_sym_do = 9,
  anon_sym_POUND = 10,
  aux_sym_documentation_token1 = 11,
  anon_sym_LF = 12,
  aux_sym_documentation_token2 = 13,
  sym_source = 14,
  sym__toplevel_stmt = 15,
  sym_record_components = 16,
  sym_namespace = 17,
  sym_record_component = 18,
  sym_def_record = 19,
  sym_def_template = 20,
  sym_documentation = 21,
  aux_sym_source_repeat1 = 22,
  aux_sym_record_components_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
  [anon_sym_namespace] = "namespace",
  [anon_sym_SEMI] = ";",
  [anon_sym_def] = "def",
  [anon_sym_record] = "record",
  [anon_sym_end] = "end",
  [anon_sym_template] = "template",
  [anon_sym_do] = "do",
  [anon_sym_POUND] = "#",
  [aux_sym_documentation_token1] = "documentation_token1",
  [anon_sym_LF] = "\n",
  [aux_sym_documentation_token2] = "documentation_token2",
  [sym_source] = "source",
  [sym__toplevel_stmt] = "_toplevel_stmt",
  [sym_record_components] = "components",
  [sym_namespace] = "namespace",
  [sym_record_component] = "component",
  [sym_def_record] = "def_record",
  [sym_def_template] = "def_template",
  [sym_documentation] = "documentation",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_record_components_repeat1] = "record_components_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_ident] = sym_ident,
  [sym_comment] = sym_comment,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_documentation_token1] = aux_sym_documentation_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_documentation_token2] = aux_sym_documentation_token2,
  [sym_source] = sym_source,
  [sym__toplevel_stmt] = sym__toplevel_stmt,
  [sym_record_components] = sym_record_components,
  [sym_namespace] = sym_namespace,
  [sym_record_component] = sym_record_component,
  [sym_def_record] = sym_def_record,
  [sym_def_template] = sym_def_template,
  [sym_documentation] = sym_documentation,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_record_components_repeat1] = aux_sym_record_components_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [aux_sym_documentation_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_record_components] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_record_component] = {
    .visible = true,
    .named = true,
  },
  [sym_def_record] = {
    .visible = true,
    .named = true,
  },
  [sym_def_template] = {
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 2},
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
  [7] =
    {field_type, 3},
    {field_var, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_ident,
  },
  [3] = {
    [1] = sym_ident,
  },
  [4] = {
    [2] = sym_ident,
  },
  [5] = {
    [1] = sym_ident,
    [2] = sym_ident,
  },
  [7] = {
    [0] = sym_ident,
    [1] = sym_ident,
  },
  [8] = {
    [2] = sym_ident,
    [3] = sym_ident,
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
  [46] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ';') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(10);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '#') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(6);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(4);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_documentation_token2);
      if (lookahead == '#') ADVANCE(4);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_documentation_token2);
      if (lookahead == '#') ADVANCE(5);
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
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_namespace);
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
  [15] = {.lex_state = 20},
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
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(41),
    [sym__toplevel_stmt] = STATE(4),
    [sym_namespace] = STATE(5),
    [sym_def_record] = STATE(4),
    [sym_def_template] = STATE(4),
    [sym_documentation] = STATE(20),
    [aux_sym_source_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_namespace] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(20), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_POUND,
    STATE(21), 1,
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
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_template,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_documentation,
    STATE(2), 4,
      sym__toplevel_stmt,
      sym_def_record,
      sym_def_template,
      aux_sym_source_repeat1,
  [50] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_template,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_documentation,
    STATE(2), 4,
      sym__toplevel_stmt,
      sym_def_record,
      sym_def_template,
      aux_sym_source_repeat1,
  [75] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_template,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_documentation,
    STATE(3), 4,
      sym__toplevel_stmt,
      sym_def_record,
      sym_def_template,
      aux_sym_source_repeat1,
  [100] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(32), 1,
      anon_sym_end,
    STATE(29), 1,
      sym_record_components,
    STATE(18), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(34), 1,
      anon_sym_end,
    STATE(42), 1,
      sym_record_components,
    STATE(18), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_POUND,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_POUND,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [158] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_ident,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(10), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [220] = 3,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_documentation_token2,
    ACTIONS(67), 3,
      anon_sym_namespace,
      anon_sym_def,
      anon_sym_template,
  [232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_template,
  [256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(79), 1,
      anon_sym_end,
    STATE(10), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_namespace,
      anon_sym_def,
      anon_sym_template,
  [279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_namespace,
    ACTIONS(85), 1,
      anon_sym_def,
    ACTIONS(87), 1,
      anon_sym_template,
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_def,
    ACTIONS(87), 1,
      anon_sym_template,
  [302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym_ident,
      anon_sym_end,
  [310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_record,
  [317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SEMI,
  [324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_record,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_ident,
  [338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_ident,
  [345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_ident,
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_end,
  [359] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LF,
  [366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_end,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_do,
  [380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_ident,
  [387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_ident,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_do,
  [401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_SEMI,
  [408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym_ident,
  [415] = 2,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_documentation_token1,
  [422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_ident,
  [429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_SEMI,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_end,
  [450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_end,
  [457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_ident,
  [464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_ident,
  [471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 220,
  [SMALL_STATE(16)] = 232,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 256,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 279,
  [SMALL_STATE(21)] = 292,
  [SMALL_STATE(22)] = 302,
  [SMALL_STATE(23)] = 310,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 331,
  [SMALL_STATE(27)] = 338,
  [SMALL_STATE(28)] = 345,
  [SMALL_STATE(29)] = 352,
  [SMALL_STATE(30)] = 359,
  [SMALL_STATE(31)] = 366,
  [SMALL_STATE(32)] = 373,
  [SMALL_STATE(33)] = 380,
  [SMALL_STATE(34)] = 387,
  [SMALL_STATE(35)] = 394,
  [SMALL_STATE(36)] = 401,
  [SMALL_STATE(37)] = 408,
  [SMALL_STATE(38)] = 415,
  [SMALL_STATE(39)] = 422,
  [SMALL_STATE(40)] = 429,
  [SMALL_STATE(41)] = 436,
  [SMALL_STATE(42)] = 443,
  [SMALL_STATE(43)] = 450,
  [SMALL_STATE(44)] = 457,
  [SMALL_STATE(45)] = 464,
  [SMALL_STATE(46)] = 471,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 6),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_template, 5, 0, 5),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_template, 5, 0, 5),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_template, 6, 0, 8),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_template, 6, 0, 8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 4, 0, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 4, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, 0, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, 0, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 4, 0, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 6, 0, 6),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 6, 0, 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_components, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 5, 0, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_component, 3, 0, 7),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_ident,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

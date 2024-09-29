#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  sym_ident = 1,
  sym_comment = 2,
  anon_sym_namespace = 3,
  anon_sym_SEMI = 4,
  anon_sym_def = 5,
  anon_sym_record = 6,
  anon_sym_end = 7,
  anon_sym_templ = 8,
  anon_sym_do = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  anon_sym_EQ = 12,
  aux_sym_attr_token1 = 13,
  anon_sym_POUND = 14,
  aux_sym_documentation_token1 = 15,
  anon_sym_LF = 16,
  aux_sym_documentation_token2 = 17,
  sym_source = 18,
  sym__toplevel_stmt = 19,
  sym_record_components = 20,
  sym_namespace = 21,
  sym_record_component = 22,
  sym_def_record = 23,
  sym_def_templ = 24,
  sym_element = 25,
  sym_attrs = 26,
  sym_attr = 27,
  sym_documentation = 28,
  aux_sym_source_repeat1 = 29,
  aux_sym_record_components_repeat1 = 30,
  aux_sym_attrs_repeat1 = 31,
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
  [anon_sym_templ] = "templ",
  [anon_sym_do] = "do",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [aux_sym_attr_token1] = "text",
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
  [sym_def_templ] = "def_templ",
  [sym_element] = "element",
  [sym_attrs] = "attrs",
  [sym_attr] = "attr",
  [sym_documentation] = "documentation",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_record_components_repeat1] = "record_components_repeat1",
  [aux_sym_attrs_repeat1] = "attrs_repeat1",
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
  [anon_sym_templ] = anon_sym_templ,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_attr_token1] = aux_sym_attr_token1,
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
  [sym_def_templ] = sym_def_templ,
  [sym_element] = sym_element,
  [sym_attrs] = sym_attrs,
  [sym_attr] = sym_attr,
  [sym_documentation] = sym_documentation,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_record_components_repeat1] = aux_sym_record_components_repeat1,
  [aux_sym_attrs_repeat1] = aux_sym_attrs_repeat1,
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
  [anon_sym_templ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attr_token1] = {
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
  [sym_def_templ] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_attrs] = {
    .visible = true,
    .named = true,
  },
  [sym_attr] = {
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
  [aux_sym_attrs_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_name = 2,
  field_tag = 3,
  field_target = 4,
  field_type = 5,
  field_val = 6,
  field_var = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_target] = "target",
  [field_type] = "type",
  [field_val] = "val",
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
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 2},
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
  [9] =
    {field_tag, 1},
  [10] =
    {field_key, 0},
    {field_val, 2},
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
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '_') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '#') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '_') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '_') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(13);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(6);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(4);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_attr_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ']') ADVANCE(1);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_attr_token1);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_attr_token1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_attr_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ']') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_documentation_token2);
      if (lookahead == '#') ADVANCE(4);
      END_STATE();
    case 31:
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
      ACCEPT_TOKEN(anon_sym_templ);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 27:
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
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
    [anon_sym_templ] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(50),
    [sym__toplevel_stmt] = STATE(3),
    [sym_namespace] = STATE(2),
    [sym_def_record] = STATE(3),
    [sym_def_templ] = STATE(3),
    [sym_documentation] = STATE(24),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_namespace] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_templ] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_templ,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_documentation,
    STATE(4), 4,
      sym__toplevel_stmt,
      sym_def_record,
      sym_def_templ,
      aux_sym_source_repeat1,
  [25] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_templ,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_documentation,
    STATE(5), 4,
      sym__toplevel_stmt,
      sym_def_record,
      sym_def_templ,
      aux_sym_source_repeat1,
  [50] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_templ,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_documentation,
    STATE(5), 4,
      sym__toplevel_stmt,
      sym_def_record,
      sym_def_templ,
      aux_sym_source_repeat1,
  [75] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_def,
    ACTIONS(24), 1,
      anon_sym_templ,
    ACTIONS(27), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_documentation,
    STATE(5), 4,
      sym__toplevel_stmt,
      sym_def_record,
      sym_def_templ,
      aux_sym_source_repeat1,
  [100] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(32), 1,
      anon_sym_end,
    STATE(51), 1,
      sym_record_components,
    STATE(23), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      sym_ident,
    ACTIONS(36), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      sym_attrs,
    STATE(17), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
  [134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(38), 1,
      anon_sym_end,
    STATE(44), 1,
      sym_record_components,
    STATE(23), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_POUND,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_templ,
  [163] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_POUND,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_templ,
  [175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_POUND,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_templ,
  [187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_POUND,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_templ,
  [199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_POUND,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_templ,
  [211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_templ,
  [223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_POUND,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_templ,
  [235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(71), 1,
      anon_sym_end,
    STATE(16), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      sym_ident,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(18), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
  [263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(18), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
  [277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_POUND,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_templ,
  [289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_POUND,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_templ,
  [301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_POUND,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_templ,
  [313] = 3,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_documentation_token2,
    ACTIONS(94), 3,
      anon_sym_namespace,
      anon_sym_def,
      anon_sym_templ,
  [325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_ident,
    ACTIONS(98), 1,
      anon_sym_end,
    STATE(16), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_namespace,
    ACTIONS(102), 1,
      anon_sym_def,
    ACTIONS(104), 1,
      anon_sym_templ,
  [352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_end,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_element,
  [365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 3,
      anon_sym_namespace,
      anon_sym_def,
      anon_sym_templ,
  [374] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_end,
    STATE(41), 1,
      sym_element,
  [387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_def,
    ACTIONS(104), 1,
      anon_sym_templ,
  [397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      sym_ident,
      anon_sym_end,
  [405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      sym_ident,
      anon_sym_RBRACK,
  [413] = 2,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_documentation_token1,
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_end,
  [427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_record,
  [434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_SEMI,
  [441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_do,
  [448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SEMI,
  [455] = 2,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LF,
  [462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_do,
  [469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_ident,
  [476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_ident,
  [483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_end,
  [490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_ident,
  [497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_ident,
  [504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_end,
  [511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_ident,
  [518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_ident,
  [525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_end,
  [532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_record,
  [539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_SEMI,
  [546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_end,
  [560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_EQ,
  [567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_ident,
  [574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
  [581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_ident,
  [588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_ident,
  [595] = 2,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(170), 1,
      aux_sym_attr_token1,
  [602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_end,
  [609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_ident,
  [616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
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
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 187,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 211,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 263,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 301,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 325,
  [SMALL_STATE(24)] = 339,
  [SMALL_STATE(25)] = 352,
  [SMALL_STATE(26)] = 365,
  [SMALL_STATE(27)] = 374,
  [SMALL_STATE(28)] = 387,
  [SMALL_STATE(29)] = 397,
  [SMALL_STATE(30)] = 405,
  [SMALL_STATE(31)] = 413,
  [SMALL_STATE(32)] = 420,
  [SMALL_STATE(33)] = 427,
  [SMALL_STATE(34)] = 434,
  [SMALL_STATE(35)] = 441,
  [SMALL_STATE(36)] = 448,
  [SMALL_STATE(37)] = 455,
  [SMALL_STATE(38)] = 462,
  [SMALL_STATE(39)] = 469,
  [SMALL_STATE(40)] = 476,
  [SMALL_STATE(41)] = 483,
  [SMALL_STATE(42)] = 490,
  [SMALL_STATE(43)] = 497,
  [SMALL_STATE(44)] = 504,
  [SMALL_STATE(45)] = 511,
  [SMALL_STATE(46)] = 518,
  [SMALL_STATE(47)] = 525,
  [SMALL_STATE(48)] = 532,
  [SMALL_STATE(49)] = 539,
  [SMALL_STATE(50)] = 546,
  [SMALL_STATE(51)] = 553,
  [SMALL_STATE(52)] = 560,
  [SMALL_STATE(53)] = 567,
  [SMALL_STATE(54)] = 574,
  [SMALL_STATE(55)] = 581,
  [SMALL_STATE(56)] = 588,
  [SMALL_STATE(57)] = 595,
  [SMALL_STATE(58)] = 602,
  [SMALL_STATE(59)] = 609,
  [SMALL_STATE(60)] = 616,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 6, 0, 5),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 6, 0, 5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 6),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 6),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 7, 0, 8),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 7, 0, 8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, 0, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, 0, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 5, 0, 5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 5, 0, 5),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrs, 1, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attrs_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attrs_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 6, 0, 6),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 6, 0, 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 4, 0, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 4, 0, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 6, 0, 8),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 6, 0, 8),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 4, 0, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_components, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 5, 0, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_component, 3, 0, 7),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, 0, 10),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 9),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 9),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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

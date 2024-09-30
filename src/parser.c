#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  sym_ident = 1,
  sym_comment = 2,
  aux_sym_escape_char_token1 = 3,
  aux_sym_escape_char_token2 = 4,
  anon_sym_namespace = 5,
  anon_sym_SEMI = 6,
  anon_sym_def = 7,
  anon_sym_record = 8,
  anon_sym_end = 9,
  anon_sym_templ = 10,
  anon_sym_do = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  aux_sym_element_token1 = 16,
  anon_sym_EQ = 17,
  aux_sym_attr_token1 = 18,
  anon_sym_POUND = 19,
  aux_sym_documentation_token1 = 20,
  anon_sym_LF = 21,
  aux_sym_documentation_token2 = 22,
  sym_source = 23,
  sym__toplevel_stmt = 24,
  sym__stmt = 25,
  sym_escape_char = 26,
  sym_record_components = 27,
  sym_namespace = 28,
  sym_record_component = 29,
  sym_def_record = 30,
  sym_def_templ = 31,
  sym_expr = 32,
  sym_element = 33,
  sym_attrs = 34,
  sym_attr = 35,
  sym_documentation = 36,
  aux_sym_source_repeat1 = 37,
  aux_sym_record_components_repeat1 = 38,
  aux_sym_attrs_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
  [aux_sym_escape_char_token1] = "escape_char_token1",
  [aux_sym_escape_char_token2] = "escape_char_token2",
  [anon_sym_namespace] = "namespace",
  [anon_sym_SEMI] = ";",
  [anon_sym_def] = "def",
  [anon_sym_record] = "record",
  [anon_sym_end] = "end",
  [anon_sym_templ] = "templ",
  [anon_sym_do] = "do",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_element_token1] = "element_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_attr_token1] = "text",
  [anon_sym_POUND] = "#",
  [aux_sym_documentation_token1] = "documentation_token1",
  [anon_sym_LF] = "\n",
  [aux_sym_documentation_token2] = "documentation_token2",
  [sym_source] = "source",
  [sym__toplevel_stmt] = "_toplevel_stmt",
  [sym__stmt] = "_stmt",
  [sym_escape_char] = "escape_char",
  [sym_record_components] = "components",
  [sym_namespace] = "namespace",
  [sym_record_component] = "component",
  [sym_def_record] = "def_record",
  [sym_def_templ] = "def_templ",
  [sym_expr] = "expr",
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
  [aux_sym_escape_char_token1] = aux_sym_escape_char_token1,
  [aux_sym_escape_char_token2] = aux_sym_escape_char_token2,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_templ] = anon_sym_templ,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_element_token1] = aux_sym_element_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_attr_token1] = aux_sym_attr_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_documentation_token1] = aux_sym_documentation_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_documentation_token2] = aux_sym_documentation_token2,
  [sym_source] = sym_source,
  [sym__toplevel_stmt] = sym__toplevel_stmt,
  [sym__stmt] = sym__stmt,
  [sym_escape_char] = sym_escape_char,
  [sym_record_components] = sym_record_components,
  [sym_namespace] = sym_namespace,
  [sym_record_component] = sym_record_component,
  [sym_def_record] = sym_def_record,
  [sym_def_templ] = sym_def_templ,
  [sym_expr] = sym_expr,
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
  [aux_sym_escape_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_escape_char_token2] = {
    .visible = false,
    .named = false,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [aux_sym_element_token1] = {
    .visible = false,
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
  [sym__stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_char] = {
    .visible = true,
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
  [sym_expr] = {
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
  field_keyword = 2,
  field_name = 3,
  field_tag = 4,
  field_target = 5,
  field_type = 6,
  field_val = 7,
  field_var = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_keyword] = "keyword",
  [field_name] = "name",
  [field_tag] = "tag",
  [field_target] = "target",
  [field_type] = "type",
  [field_val] = "val",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 0, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 1},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 4, .length = 1},
  [10] = {.index = 9, .length = 2},
  [11] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_tag, 1},
  [2] =
    {field_keyword, 1},
  [3] =
    {field_target, 1},
  [4] =
    {field_name, 2},
  [5] =
    {field_type, 2},
    {field_var, 1},
  [7] =
    {field_key, 0},
    {field_val, 2},
  [9] =
    {field_name, 0},
    {field_type, 1},
  [11] =
    {field_type, 3},
    {field_var, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_ident,
  },
  [6] = {
    [2] = sym_ident,
  },
  [7] = {
    [1] = sym_ident,
    [2] = sym_ident,
  },
  [10] = {
    [0] = sym_ident,
    [1] = sym_ident,
  },
  [11] = {
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
  [25] = 23,
  [26] = 26,
  [27] = 22,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 19,
  [71] = 20,
  [72] = 9,
  [73] = 10,
  [74] = 74,
  [75] = 75,
  [76] = 47,
  [77] = 45,
  [78] = 67,
  [79] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '#', 30,
        '(', 20,
        ')', 21,
        ';', 19,
        '=', 25,
        '[', 22,
        '\\', 7,
        ']', 23,
        '_', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '#') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '[') ADVANCE(17);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '#', 30,
        '(', 20,
        ')', 21,
        ';', 19,
        '[', 22,
        '\\', 7,
        ']', 23,
        '_', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '_') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(6);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(4);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_escape_char_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_escape_char_token2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_element_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_attr_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ']') ADVANCE(1);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_attr_token1);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ']') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_attr_token1);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ']') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_attr_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ']') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_documentation_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_documentation_token2);
      if (lookahead == '#') ADVANCE(4);
      END_STATE();
    case 37:
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 32},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_escape_char_token1] = ACTIONS(1),
    [aux_sym_escape_char_token2] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_templ] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_element_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(63),
    [sym__toplevel_stmt] = STATE(5),
    [sym__stmt] = STATE(5),
    [sym_escape_char] = STATE(5),
    [sym_namespace] = STATE(2),
    [sym_def_record] = STATE(5),
    [sym_def_templ] = STATE(5),
    [sym_expr] = STATE(5),
    [sym_element] = STATE(5),
    [sym_documentation] = STATE(36),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_escape_char_token1] = ACTIONS(7),
    [aux_sym_escape_char_token2] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_def] = ACTIONS(11),
    [anon_sym_templ] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [aux_sym_element_token1] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_def,
    ACTIONS(13), 1,
      anon_sym_templ,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_documentation,
    ACTIONS(7), 2,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
    STATE(3), 8,
      sym__toplevel_stmt,
      sym__stmt,
      sym_escape_char,
      sym_def_record,
      sym_def_templ,
      sym_expr,
      sym_element,
      aux_sym_source_repeat1,
  [42] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_def,
    ACTIONS(13), 1,
      anon_sym_templ,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_documentation,
    ACTIONS(7), 2,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
    STATE(4), 8,
      sym__toplevel_stmt,
      sym__stmt,
      sym_escape_char,
      sym_def_record,
      sym_def_templ,
      sym_expr,
      sym_element,
      aux_sym_source_repeat1,
  [84] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_def,
    ACTIONS(35), 1,
      anon_sym_templ,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      aux_sym_element_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_documentation,
    ACTIONS(29), 2,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
    STATE(4), 8,
      sym__toplevel_stmt,
      sym__stmt,
      sym_escape_char,
      sym_def_record,
      sym_def_templ,
      sym_expr,
      sym_element,
      aux_sym_source_repeat1,
  [126] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_def,
    ACTIONS(13), 1,
      anon_sym_templ,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_documentation,
    ACTIONS(7), 2,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
    STATE(4), 8,
      sym__toplevel_stmt,
      sym__stmt,
      sym_escape_char,
      sym_def_record,
      sym_def_templ,
      sym_expr,
      sym_element,
      aux_sym_source_repeat1,
  [168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(54), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(58), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(70), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(110), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [440] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_ident,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_attrs,
    STATE(33), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
  [457] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_ident,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_attrs,
    STATE(33), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
  [474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_ident,
    ACTIONS(122), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_record_components,
    STATE(34), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_ident,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_attrs,
    STATE(33), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
  [508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_ident,
    ACTIONS(126), 1,
      anon_sym_end,
    STATE(43), 1,
      sym_record_components,
    STATE(34), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_ident,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_attrs,
    STATE(33), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
  [542] = 3,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_documentation_token2,
    ACTIONS(132), 3,
      anon_sym_namespace,
      anon_sym_def,
      anon_sym_templ,
  [554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_end,
    STATE(29), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_ident,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(30), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
  [582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_end,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      aux_sym_element_token1,
    STATE(68), 1,
      sym_element,
  [598] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 1,
      aux_sym_element_token1,
    ACTIONS(152), 1,
      anon_sym_end,
    STATE(40), 1,
      sym_element,
  [614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_ident,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(30), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
  [628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_ident,
    ACTIONS(156), 1,
      anon_sym_end,
    STATE(29), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_namespace,
      anon_sym_def,
      anon_sym_templ,
  [651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_namespace,
    ACTIONS(162), 1,
      anon_sym_def,
    ACTIONS(164), 1,
      anon_sym_templ,
  [664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_def,
    ACTIONS(164), 1,
      anon_sym_templ,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      sym_ident,
      anon_sym_RBRACK,
  [682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      sym_ident,
      anon_sym_end,
  [690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_end,
  [697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_SEMI,
  [704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_ident,
  [711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_end,
  [718] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_LF,
  [725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
  [732] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_attr_token1,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
  [746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_EQ,
  [753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_do,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_ident,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_ident,
  [774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_ident,
  [781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_do,
  [788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_record,
  [795] = 2,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_documentation_token1,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_ident,
  [816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_ident,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SEMI,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_ident,
  [837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_SEMI,
  [844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_end,
  [851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_ident,
  [865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_record,
  [872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_ident,
  [879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_ident,
  [886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_end,
  [893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_ident,
  [900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_end,
  [907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_end,
  [914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_end,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_end,
  [928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_ident,
  [935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_ident,
  [942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
  [949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
  [956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_ident,
  [963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 236,
  [SMALL_STATE(11)] = 253,
  [SMALL_STATE(12)] = 270,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 304,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 338,
  [SMALL_STATE(17)] = 355,
  [SMALL_STATE(18)] = 372,
  [SMALL_STATE(19)] = 389,
  [SMALL_STATE(20)] = 406,
  [SMALL_STATE(21)] = 423,
  [SMALL_STATE(22)] = 440,
  [SMALL_STATE(23)] = 457,
  [SMALL_STATE(24)] = 474,
  [SMALL_STATE(25)] = 491,
  [SMALL_STATE(26)] = 508,
  [SMALL_STATE(27)] = 525,
  [SMALL_STATE(28)] = 542,
  [SMALL_STATE(29)] = 554,
  [SMALL_STATE(30)] = 568,
  [SMALL_STATE(31)] = 582,
  [SMALL_STATE(32)] = 598,
  [SMALL_STATE(33)] = 614,
  [SMALL_STATE(34)] = 628,
  [SMALL_STATE(35)] = 642,
  [SMALL_STATE(36)] = 651,
  [SMALL_STATE(37)] = 664,
  [SMALL_STATE(38)] = 674,
  [SMALL_STATE(39)] = 682,
  [SMALL_STATE(40)] = 690,
  [SMALL_STATE(41)] = 697,
  [SMALL_STATE(42)] = 704,
  [SMALL_STATE(43)] = 711,
  [SMALL_STATE(44)] = 718,
  [SMALL_STATE(45)] = 725,
  [SMALL_STATE(46)] = 732,
  [SMALL_STATE(47)] = 739,
  [SMALL_STATE(48)] = 746,
  [SMALL_STATE(49)] = 753,
  [SMALL_STATE(50)] = 760,
  [SMALL_STATE(51)] = 767,
  [SMALL_STATE(52)] = 774,
  [SMALL_STATE(53)] = 781,
  [SMALL_STATE(54)] = 788,
  [SMALL_STATE(55)] = 795,
  [SMALL_STATE(56)] = 802,
  [SMALL_STATE(57)] = 809,
  [SMALL_STATE(58)] = 816,
  [SMALL_STATE(59)] = 823,
  [SMALL_STATE(60)] = 830,
  [SMALL_STATE(61)] = 837,
  [SMALL_STATE(62)] = 844,
  [SMALL_STATE(63)] = 851,
  [SMALL_STATE(64)] = 858,
  [SMALL_STATE(65)] = 865,
  [SMALL_STATE(66)] = 872,
  [SMALL_STATE(67)] = 879,
  [SMALL_STATE(68)] = 886,
  [SMALL_STATE(69)] = 893,
  [SMALL_STATE(70)] = 900,
  [SMALL_STATE(71)] = 907,
  [SMALL_STATE(72)] = 914,
  [SMALL_STATE(73)] = 921,
  [SMALL_STATE(74)] = 928,
  [SMALL_STATE(75)] = 935,
  [SMALL_STATE(76)] = 942,
  [SMALL_STATE(77)] = 949,
  [SMALL_STATE(78)] = 956,
  [SMALL_STATE(79)] = 963,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 9),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 9),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 6, 0, 9),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 6, 0, 9),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 6, 0, 7),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 6, 0, 7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_char, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 6, 0, 11),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 6, 0, 11),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 5, 0, 7),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 5, 0, 7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 7, 0, 11),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 7, 0, 11),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 4, 0, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 4, 0, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, 0, 6),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, 0, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 4, 0, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attrs_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attrs_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrs, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_components, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 5, 0, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, 0, 8),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_component, 3, 0, 10),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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

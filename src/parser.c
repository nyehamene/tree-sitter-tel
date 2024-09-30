#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
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
  sym__children = 34,
  sym_attrs = 35,
  sym_attr = 36,
  sym_documentation = 37,
  aux_sym_source_repeat1 = 38,
  aux_sym_record_components_repeat1 = 39,
  aux_sym_attrs_repeat1 = 40,
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
  [sym__children] = "_children",
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
  [sym__children] = sym__children,
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
  [sym__children] = {
    .visible = false,
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
  [8] = 7,
  [9] = 6,
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
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 31,
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
  [70] = 56,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 14,
  [77] = 13,
  [78] = 11,
  [79] = 12,
  [80] = 10,
  [81] = 16,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 55,
  [87] = 87,
  [88] = 50,
  [89] = 53,
  [90] = 82,
  [91] = 75,
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
  [28] = {.lex_state = 0},
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
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
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
  [66] = {.lex_state = 32},
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
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
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
    [sym_source] = STATE(72),
    [sym__toplevel_stmt] = STATE(5),
    [sym__stmt] = STATE(5),
    [sym_escape_char] = STATE(5),
    [sym_namespace] = STATE(3),
    [sym_def_record] = STATE(5),
    [sym_def_templ] = STATE(5),
    [sym_expr] = STATE(5),
    [sym_element] = STATE(5),
    [sym_documentation] = STATE(42),
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
    STATE(45), 1,
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
    STATE(45), 1,
      sym_documentation,
    ACTIONS(7), 2,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
    STATE(2), 8,
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
    STATE(45), 1,
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
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
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
  [168] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(50), 1,
      sym_ident,
    ACTIONS(52), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_attrs,
    STATE(30), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
    STATE(86), 3,
      sym_expr,
      sym_element,
      sym__children,
  [199] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(50), 1,
      sym_ident,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      sym_attrs,
    STATE(30), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
    STATE(70), 3,
      sym_expr,
      sym_element,
      sym__children,
  [230] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(50), 1,
      sym_ident,
    ACTIONS(56), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_attrs,
    STATE(30), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
    STATE(56), 3,
      sym_expr,
      sym_element,
      sym__children,
  [261] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(50), 1,
      sym_ident,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_attrs,
    STATE(30), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
    STATE(55), 3,
      sym_expr,
      sym_element,
      sym__children,
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      aux_sym_element_token1,
  [310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      aux_sym_element_token1,
  [328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      aux_sym_element_token1,
  [346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(72), 8,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      aux_sym_element_token1,
  [364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      aux_sym_element_token1,
  [382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      aux_sym_element_token1,
  [400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      aux_sym_element_token1,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(96), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(108), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      aux_sym_escape_char_token1,
      aux_sym_escape_char_token2,
      anon_sym_def,
      anon_sym_templ,
      anon_sym_LPAREN,
      aux_sym_element_token1,
  [605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(88), 3,
      sym_expr,
      sym_element,
      sym__children,
  [626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(50), 3,
      sym_expr,
      sym_element,
      sym__children,
  [647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_ident,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(33), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
    ACTIONS(136), 3,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      aux_sym_element_token1,
  [666] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(53), 3,
      sym_expr,
      sym_element,
      sym__children,
  [687] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      aux_sym_element_token1,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
    STATE(89), 3,
      sym_expr,
      sym_element,
      sym__children,
  [708] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_ident,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    STATE(33), 2,
      sym_attr,
      aux_sym_attrs_repeat1,
    ACTIONS(147), 3,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      aux_sym_element_token1,
  [727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_ident,
    ACTIONS(153), 1,
      anon_sym_end,
    STATE(67), 1,
      sym_record_components,
    STATE(41), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_ident,
    ACTIONS(155), 1,
      anon_sym_end,
    STATE(69), 1,
      sym_record_components,
    STATE(41), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(157), 4,
      sym_ident,
      anon_sym_LPAREN,
      anon_sym_RBRACK,
      aux_sym_element_token1,
  [774] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_end,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      aux_sym_element_token1,
    STATE(74), 1,
      sym_element,
  [790] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_ident,
    ACTIONS(170), 1,
      anon_sym_end,
    STATE(38), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [804] = 3,
    ACTIONS(172), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_documentation_token2,
    ACTIONS(174), 3,
      anon_sym_namespace,
      anon_sym_def,
      anon_sym_templ,
  [816] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      aux_sym_element_token1,
    ACTIONS(178), 1,
      anon_sym_end,
    STATE(62), 1,
      sym_element,
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_ident,
    ACTIONS(180), 1,
      anon_sym_end,
    STATE(38), 2,
      sym_record_component,
      aux_sym_record_components_repeat1,
  [846] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_namespace,
    ACTIONS(184), 1,
      anon_sym_def,
    ACTIONS(186), 1,
      anon_sym_templ,
  [859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_namespace,
      anon_sym_def,
      anon_sym_templ,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      sym_ident,
      anon_sym_end,
  [876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_def,
    ACTIONS(186), 1,
      anon_sym_templ,
  [886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
  [893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_ident,
  [900] = 2,
    ACTIONS(172), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_attr_token1,
  [907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_ident,
  [914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
  [921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_record,
  [928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SEMI,
  [935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
  [942] = 2,
    ACTIONS(172), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_LF,
  [949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
  [956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
  [963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_do,
  [970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_SEMI,
  [977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_EQ,
  [984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_do,
  [991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_ident,
  [998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_end,
  [1005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_ident,
  [1012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_ident,
  [1019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_ident,
  [1026] = 2,
    ACTIONS(172), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_documentation_token1,
  [1033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_end,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_ident,
  [1047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_end,
  [1054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
  [1061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SEMI,
  [1068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
  [1075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_ident,
  [1082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_end,
  [1089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_ident,
  [1096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_end,
  [1103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_end,
  [1110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_end,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_end,
  [1124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_end,
  [1131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_end,
  [1138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_ident,
  [1145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_ident,
  [1152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_record,
  [1159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_ident,
  [1166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_RBRACK,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_ident,
  [1180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
  [1187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
  [1194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_ident,
  [1201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 199,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 292,
  [SMALL_STATE(11)] = 310,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 346,
  [SMALL_STATE(14)] = 364,
  [SMALL_STATE(15)] = 382,
  [SMALL_STATE(16)] = 400,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 435,
  [SMALL_STATE(19)] = 452,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 486,
  [SMALL_STATE(22)] = 503,
  [SMALL_STATE(23)] = 520,
  [SMALL_STATE(24)] = 537,
  [SMALL_STATE(25)] = 554,
  [SMALL_STATE(26)] = 571,
  [SMALL_STATE(27)] = 588,
  [SMALL_STATE(28)] = 605,
  [SMALL_STATE(29)] = 626,
  [SMALL_STATE(30)] = 647,
  [SMALL_STATE(31)] = 666,
  [SMALL_STATE(32)] = 687,
  [SMALL_STATE(33)] = 708,
  [SMALL_STATE(34)] = 727,
  [SMALL_STATE(35)] = 744,
  [SMALL_STATE(36)] = 761,
  [SMALL_STATE(37)] = 774,
  [SMALL_STATE(38)] = 790,
  [SMALL_STATE(39)] = 804,
  [SMALL_STATE(40)] = 816,
  [SMALL_STATE(41)] = 832,
  [SMALL_STATE(42)] = 846,
  [SMALL_STATE(43)] = 859,
  [SMALL_STATE(44)] = 868,
  [SMALL_STATE(45)] = 876,
  [SMALL_STATE(46)] = 886,
  [SMALL_STATE(47)] = 893,
  [SMALL_STATE(48)] = 900,
  [SMALL_STATE(49)] = 907,
  [SMALL_STATE(50)] = 914,
  [SMALL_STATE(51)] = 921,
  [SMALL_STATE(52)] = 928,
  [SMALL_STATE(53)] = 935,
  [SMALL_STATE(54)] = 942,
  [SMALL_STATE(55)] = 949,
  [SMALL_STATE(56)] = 956,
  [SMALL_STATE(57)] = 963,
  [SMALL_STATE(58)] = 970,
  [SMALL_STATE(59)] = 977,
  [SMALL_STATE(60)] = 984,
  [SMALL_STATE(61)] = 991,
  [SMALL_STATE(62)] = 998,
  [SMALL_STATE(63)] = 1005,
  [SMALL_STATE(64)] = 1012,
  [SMALL_STATE(65)] = 1019,
  [SMALL_STATE(66)] = 1026,
  [SMALL_STATE(67)] = 1033,
  [SMALL_STATE(68)] = 1040,
  [SMALL_STATE(69)] = 1047,
  [SMALL_STATE(70)] = 1054,
  [SMALL_STATE(71)] = 1061,
  [SMALL_STATE(72)] = 1068,
  [SMALL_STATE(73)] = 1075,
  [SMALL_STATE(74)] = 1082,
  [SMALL_STATE(75)] = 1089,
  [SMALL_STATE(76)] = 1096,
  [SMALL_STATE(77)] = 1103,
  [SMALL_STATE(78)] = 1110,
  [SMALL_STATE(79)] = 1117,
  [SMALL_STATE(80)] = 1124,
  [SMALL_STATE(81)] = 1131,
  [SMALL_STATE(82)] = 1138,
  [SMALL_STATE(83)] = 1145,
  [SMALL_STATE(84)] = 1152,
  [SMALL_STATE(85)] = 1159,
  [SMALL_STATE(86)] = 1166,
  [SMALL_STATE(87)] = 1173,
  [SMALL_STATE(88)] = 1180,
  [SMALL_STATE(89)] = 1187,
  [SMALL_STATE(90)] = 1194,
  [SMALL_STATE(91)] = 1201,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 4, 0, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 4, 0, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 5, 0, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 5, 0, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, 0, 6),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, 0, 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 7, 0, 11),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 7, 0, 11),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 5, 0, 9),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 5, 0, 9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 6, 0, 11),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 6, 0, 11),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 6, 0, 9),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 6, 0, 9),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_record, 4, 0, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_record, 4, 0, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_char, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_char, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 6, 0, 7),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 6, 0, 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_templ, 5, 0, 7),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_templ, 5, 0, 7),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrs, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attrs, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attrs_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attrs_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attrs_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr, 3, 0, 8),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr, 3, 0, 8),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_components_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 4, 0, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_components, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 5, 0, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_component, 3, 0, 10),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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

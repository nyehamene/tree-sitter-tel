/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/** @param {string[]} patts */
function regex(...patts) {
  return RegExp(patts.join(""));
}

const PASCAL_CASE = /[A-Z][A-Za-z0-9]*/;
const CAMEL_CASE = /[a-z_][A-Za-z0-9]*/;
const SNAKE_CASE = /[a-z_][a-z_]*/;
const KEBAB_CASE = /[a-z][a-z-]*/;

const IDENT = token(choice(PASCAL_CASE, CAMEL_CASE, SNAKE_CASE, KEBAB_CASE));

const ESCAPE_MARK = token("\\");
const ESCAPE_CHAR = choice("[", "(");
const ESCAPE = seq(ESCAPE_MARK, ESCAPE_CHAR);

const COMMENT = token(repeat1(seq(/#+/, /[^\n]*/, optional("\n"))));

const BOOL = choice("true", "false");
const NUMBER = token(choice("0", /[1-9][0-9_]*/));

const SYM = choice("+", "-", "*", "/");

// XXX: replace with basic expressions, e.g. str, int, bool, vector
const ATTR_VAL = token(/[^\s\]]*/);

const BLOCK = field("marker", "do");

/** @param {any} $ */
const NS = ($) => seq("namespace", field("name", $.ident), ";");

/** @param {any} $ */
const KWD = ($) => choice(seq(field("marker", ":"), field("name", $.ident)));

// XXX: replace escape with text
/** @param {any} $ */
const FORM = ($) => choice($.element, $._expr, $.escape);

/** @param {any} $ */
const DEF = ($) => choice($.def_record, $.def_templ, $._form);

/** @param {any} $ */
const ATTRS = ($) => prec.right(repeat1($.attr));

/** @param {any} $ */
const TYPE = ($) => choice($.ident, $.slice_lit);

/** @param {any} $ */
const SLICE = ($) => seq(field("marker", "[]"), field("name", $.ident));

/** @param {any} $ */
const FIELD = ($) => seq(field("name", $.ident), field("type", $._type), ";");

/** @param {any} $ */
const FIELDS = ($) => repeat1($.field);

/** @param {any} $ */
const FIELD_ACCESS = ($) =>
  seq(field("object", $.ident), ".", field("field", $.ident));

const escape_char = () => token(seq("\\", /[^\[\(\{]/));

/**
 * @param {string} marker
 */
const str_text = (marker) => token(regex("[^", marker, "\\\\]"));

/**
 * @param {any} $
 * @param {string} marker
 */
const str_with_marker = ($, marker) =>
  seq(
    marker,
    repeat(
      choice(
        $.escape_char,
        str_text(marker),
        seq(field("open", "\\("), field("templ", $._expr), field("close", ")")),
      ),
    ),
    marker,
  );

/** @param {any} $ */
const STR = ($) => choice(str_with_marker($, '"'), str_with_marker($, "'"));

module.exports = grammar({
  name: "tel",

  extras: ($) => [$.comment, /\s/],

  // externals: ($) => [$.escape_char, $._str_text],

  word: ($) => $.ident,

  rules: {
    source: ($) => optional(seq(optional($.namespace), repeat($._def))),

    namespace: ($) => NS($),

    ident: () => IDENT,

    comment: () => COMMENT,

    sym: (_) => SYM,

    int_lit: () => NUMBER,

    str_lit: ($) => prec.left(STR($)),

    escape_char: () => escape_char(),

    bool_lit: () => BOOL,

    kwd_lit: ($) => KWD($),

    // XXX: remove escape after implementing text
    escape: () => ESCAPE,

    // XXX: remove _form
    _def: ($) => DEF($),

    _form: ($) => FORM($),

    _type: ($) => TYPE($),

    attrs: ($) => ATTRS($),

    slice_lit: ($) => SLICE($),

    field_access: ($) => FIELD_ACCESS($),

    fields: ($) => FIELDS($),

    field: ($) => FIELD($),

    _expr: ($) =>
      choice(
        $.sym,
        $.ident,
        $.bool_lit,
        $.int_lit,
        $.str_lit,
        $.field_access,
        $.list_lit,
        $.kwd_lit,
      ),

    list_lit: ($) =>
      seq(
        field("open", "("),
        repeat1(field("value", $._form)),
        field("close", ")"),
      ),

    element: ($) =>
      seq(
        field("open", "["),
        field("tag", choice($.ident, $.kwd_lit)),
        optional($.attrs),
        optional(alias($._elements, $.children)),
        field("close", "]"),
      ),

    _elements: ($) => repeat1($._form),

    attr: ($) =>
      seq(
        field("key", $.ident),
        token.immediate("="),
        field("value", alias(ATTR_VAL, $.text)),
      ),

    def_record: ($) =>
      seq(
        field("open", "record"),
        field("name", $.ident),
        optional(field("body", $._record_body)),
        field("close", "end"),
      ),

    _record_body: ($) => seq(BLOCK, $.fields),

    def_templ: ($) =>
      seq(
        field("open", "templ"),
        field("var", $.ident),
        field("type", $.ident),
        optional(alias($._templ_body, $.body)),
        field("close", "end"),
      ),

    _templ_body: ($) => seq(BLOCK, repeat1($._form)),
  },
});

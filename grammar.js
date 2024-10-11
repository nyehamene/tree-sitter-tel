/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const NOT_SPACE = /[^\s]*/;

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
const STRING = token(choice(seq("'", /[^']*/, "'"), seq('"', /[^"]*/, '"')));
const SYM = choice("+", "-", "*", "/");

// XXX: replace with basic expressions, e.g. str, int, bool, vector
const ATTR_VAL = token(/[^\s\]]*/);

const BLOCK = field("marker", "do");

const NS = ($) => seq("namespace", field("name", $.ident), ";");

const KWD = ($) => choice(seq(field("marker", ":"), field("name", $.ident)));

// XXX: replace escape with text
const FORM = ($) => choice($.element, $._expr, $.escape);

const DEF = ($) => choice($.def_record, $.def_templ, $._form);

const ATTRS = ($) => prec.right(repeat1($.attr));

const TYPE = ($) => choice($.ident, $.slice_lit);

const SLICE = ($) => seq(field("marker", "[]"), field("name", $.ident));

const FIELD = ($) => seq(field("name", $.ident), field("type", $._type), ";");

const FIELDS = ($) => repeat1($.field);

const FIELD_ACCESS = ($) =>
  seq(field("object", $.ident), ".", field("field", $.ident));

module.exports = grammar({
  name: "tel",

  extras: ($) => [$.comment, /\s/],

  word: ($) => $.ident,

  rules: {
    source: ($) => optional(seq(optional($.namespace), repeat($._def))),

    namespace: ($) => NS($),

    ident: ($) => IDENT,

    comment: ($) => COMMENT,

    sym: ($) => SYM,

    int_lit: ($) => NUMBER,

    str_lit: ($) => STRING,

    bool_lit: ($) => BOOL,

    kwd_lit: ($) => KWD($),

    // XXX: remove escape after implementing text
    escape: ($) => ESCAPE,

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

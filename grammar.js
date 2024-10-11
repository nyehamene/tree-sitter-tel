/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PASCAL_CASE = /[A-Z][A-Za-z0-9]*/;
const CAMEL_CASE = /[a-z_][A-Za-z0-9]*/;
const SNAKE_CASE = /[a-z_][a-z_]*/;
const KEBAB_CASE = /[a-z][a-z-]*/;
const NOT_SPACE = /[^\s]*/;

function FIELD() {
  return {
    name: "name",
    type: "type",
    target: "target",
    tag: "tag",
    var: "var",
    key: "key",
    value: "val",
    keyword: "keyword",
  };
}

function KEYWORD() {
  return {
    namespace: "namespace",
    record: "record",
    end: "end",
    do: "do",
    templ: "templ",
  };
}

function PUNC() {
  return {
    forwardSlash: "/",
    semiColon: ";",
    bracketLeft: "[",
    bracketRight: "]",
    eq: "=",
    parLeft: "(",
    parRight: ")",
    backSlash: "\\",
    colon: ":",
  };
}

module.exports = grammar({
  name: "tel",

  extras: ($) => [$.comment, /\s/],

  word: ($) => $.ident,

  rules: {
    source: ($) =>
      optional(seq(optional($.namespace), repeat($._toplevel_stmt))),

    ident: ($) =>
      token(choice(PASCAL_CASE, CAMEL_CASE, SNAKE_CASE, KEBAB_CASE)),

    comment: ($) => token(repeat1(seq(/#+/, /[^\n]*/, optional("\n")))),

    _toplevel_stmt: ($) => choice($.def_record, $.def_templ, $._stmt),

    _stmt: ($) => choice($.element, $.expr, $.escape_char),

    escape_char: ($) =>
      choice(
        token(seq(PUNC().backSlash, PUNC().bracketLeft)),
        token(seq(PUNC().backSlash, PUNC().parLeft)),
      ),

    record_components: ($) => repeat1(alias($.record_component, $.component)),

    namespace: ($) =>
      seq(
        KEYWORD().namespace,
        field(FIELD().name, alias($.ident, $.ident)),
        PUNC().semiColon,
      ),

    record_component: ($) =>
      seq(
        field(FIELD().name, $.ident),
        field(FIELD().type, $._type),
        PUNC().semiColon,
      ),

    _type: ($) => choice($.ident, alias($.slice_type, $.slice)),

    slice_type: ($) => seq("[]", $.ident),

    def_record: ($) =>
      seq(
        KEYWORD().record,
        field(FIELD().name, $.ident /* alias($.ident, $.ident) */),
        optional(seq(KEYWORD().do, alias($.record_components, $.components))),
        KEYWORD().end,
      ),

    def_templ: ($) =>
      seq(
        KEYWORD().templ,
        field(FIELD().var, alias($.ident, $.ident)),
        field(FIELD().type, alias($.ident, $.ident)),
        optional(seq(KEYWORD().do, alias($.templ_body, $.body))),
        KEYWORD().end,
      ),

    templ_body: ($) => repeat1($._stmt),

    expr: ($) =>
      seq(
        PUNC().parLeft,
        choice($._basic_expr, $._control_expr, $._operation),
        PUNC().parRight,
      ),

    _basic_expr: ($) =>
      choice(
        $.literal_bool,
        $.ident,
        $.literal_int,
        $.literal_str,
        $.field_access,
      ),

    _control_expr: ($) => choice($.foreach),

    _operation: ($) => seq($.operator, repeat1($._basic_expr)),

    operator: ($) => choice("+", "-", "*", "/"),

    literal_int: ($) => token(choice("0", /[1-9][0-9_]*/)),

    literal_str: ($) =>
      token(choice(seq("'", /[^']*/, "'"), seq('"', /[^"]*/, '"'))),

    literal_bool: ($) => choice("true", "false"),

    field_access: ($) =>
      seq(field("object", $.ident), ".", field("field", $.ident)),

    _expr_special: ($) => choice($.foreach),

    foreach: ($) =>
      seq(
        ":",
        "foreach",
        PUNC().parLeft,
        field("index", $.ident),
        ",",
        field("item", $.ident),
        "in",
        field("iter", $.field_access),
        PUNC().parRight,
        alias($.foreach_body, $.body),
      ),

    foreach_body: ($) => repeat1(choice($.element)),

    element: ($) =>
      choice(
        seq(
          PUNC().bracketLeft,
          field(FIELD().tag, $.ident),
          optional($.attrs),
          optional($.elements),
          PUNC().bracketRight,
        ),
        seq(
          token(seq(PUNC().bracketLeft, PUNC().colon)),
          field(FIELD().keyword, $.ident),
          optional($.attrs),
          optional($.elements),
          PUNC().bracketRight,
        ),
      ),

    elements: ($) => repeat1($._stmt),

    attrs: ($) => repeat1($.attr),

    attr: ($) =>
      seq(
        field(FIELD().key, $.ident),
        token.immediate(PUNC().eq),
        field(FIELD().value, alias(token(/[^\s\]]*/), $.text)),
      ),
  },
});

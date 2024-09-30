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
    def: "def",
    do: "do",
    templ: "templ",
  };
}

function PUNC() {
  return {
    hash: "#",
    hashDouble: "##",
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

    comment: () => token(repeat1(seq(PUNC().hashDouble, /[^\n]*/, "\n"))),

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
        optional($.documentation),
        KEYWORD().namespace,
        field(FIELD().name, alias($.ident, $.ident)),
        PUNC().semiColon,
      ),

    record_component: ($) =>
      seq(
        field(FIELD().name, alias($.ident, $.ident)),
        field(FIELD().type, alias($.ident, $.ident)),
        PUNC().semiColon,
      ),

    def_record: ($) =>
      seq(
        optional($.documentation),
        KEYWORD().def,
        field(FIELD().name, $.ident /* alias($.ident, $.ident) */),
        KEYWORD().record,
        optional(alias($.record_components, $.components)),
        KEYWORD().end,
      ),

    def_templ: ($) =>
      seq(
        optional($.documentation),
        KEYWORD().templ,
        field(FIELD().var, alias($.ident, $.ident)),
        field(FIELD().type, alias($.ident, $.ident)),
        KEYWORD().do,
        optional($.element),
        KEYWORD().end,
      ),

    expr: ($) => seq(PUNC().parLeft, $.ident, PUNC().parRight),

    element: ($) =>
      choice(
        seq(
          PUNC().bracketLeft,
          field(FIELD().tag, $.ident),
          optional($.attrs),
          optional($._children),
          PUNC().bracketRight,
        ),
        seq(
          token(seq(PUNC().bracketLeft, PUNC().colon)),
          field(FIELD().keyword, $.ident),
          optional($.attrs),
          optional($._children),
          PUNC().bracketRight,
        ),
      ),

    _children: ($) => choice($.element, $.expr),

    attrs: ($) => repeat1($.attr),

    attr: ($) =>
      seq(
        field(FIELD().key, $.ident),
        token.immediate(PUNC().eq),
        field(FIELD().value, alias(token(/[^\s\]]*/), $.text)),
      ),

    documentation: ($) => {
      let docContinued = token(repeat(seq(PUNC().hash, /[^\n]*/, "\n")));
      let doc = seq(
        PUNC().hash,
        field(FIELD().target, $.ident),
        /[^\n]*/,
        "\n",
      );
      return seq(doc, optional(docContinued));
    },
  },
});

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PASCAL_CASE = /[A-Z][A-Za-z0-9]*/;
const CAMEL_CASE = /[a-z_][A-Za-z0-9]*/;
const SNAKE_CASE = /[a-z_][a-z_]*/;

function FIELD() {
  return {
    name: "name",
    type: "type",
    target: "target",
    var: "var",
  };
}

function KEYWORD() {
  return {
    namespace: "namespace",
    record: "record",
    end: "end",
    def: "def",
    do: "do",
    template: "template",
  };
}

function PUNC() {
  return {
    hash: "#",
    d_hash: "##",
    semi_colon: ";",
  };
}

module.exports = grammar({
  name: "tel",

  extras: ($) => [$.comment, /\s/],

  word: ($) => $.ident,

  rules: {
    source: ($) =>
      optional(seq(optional($.namespace), repeat($._toplevel_stmt))),

    ident: ($) => token(choice(PASCAL_CASE, CAMEL_CASE, SNAKE_CASE)),

    comment: () => token(repeat1(seq(PUNC().d_hash, /[^\n]*/, "\n"))),

    _toplevel_stmt: ($) => choice($.def_record, $.def_template),

    record_components: ($) => repeat1(alias($.record_component, $.component)),

    namespace: ($) =>
      seq(
        optional($.documentation),
        KEYWORD().namespace,
        field(FIELD().name, alias($.ident, $.ident)),
        PUNC().semi_colon,
      ),

    record_component: ($) =>
      seq(
        field(FIELD().name, alias($.ident, $.ident)),
        field(FIELD().type, alias($.ident, $.ident)),
        PUNC().semi_colon,
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

    def_template: ($) =>
      seq(
        optional($.documentation),
        KEYWORD().template,
        field(FIELD().var, alias($.ident, $.ident)),
        field(FIELD().type, alias($.ident, $.ident)),
        KEYWORD().do,
        KEYWORD().end,
      ),

    documentation: ($) => {
      let docContinued = token(repeat(seq(PUNC().hash, /[^\n]*/, "\n")));
      let doc = seq(
        PUNC().hash,
        field(
          FIELD().target,
          choice(
            alias($.ident, $.ident),
            // alias($.ident, $.ident), // fix using precedence
            alias($.ident, $.ident),
          ),
        ),
        /[^\n]*/,
        "\n",
      );
      return seq(doc, optional(docContinued));
    },
  },
});

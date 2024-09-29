/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "tel",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source: ($) => optional(seq($.namespace, repeat($._toplevel_stmt))),

    namespace: ($) =>
      seq(
        optional($.documentation),
        KEYWORD().namespace,
        field(FIELD().name, alias($.ns_ident, $.ident)),
        PUNC().semi_colon,
      ),

    _toplevel_stmt: ($) => choice($.def_record, $.def_template),

    def_record: ($) =>
      seq(
        optional($.documentation),
        KEYWORD().def,
        field(FIELD().name, alias($.type_ident, $.ident)),
        KEYWORD().record,
        optional(alias($.record_components, $.components)),
        KEYWORD().end,
      ),

    record_components: ($) => repeat1(alias($.record_component, $.component)),

    record_component: ($) =>
      seq(
        field(FIELD().name, alias($.var_ident, $.ident)),
        field(FIELD().type, alias($.type_ident, $.ident)),
        PUNC().semi_colon,
      ),

    def_template: ($) =>
      seq(
        KEYWORD().template,
        field(FIELD().var, alias($.var_ident, $.ident)),
        field(FIELD().type, alias($.type_ident, $.ident)),
        KEYWORD().do,
        KEYWORD().end,
      ),

    type_ident: () => token(/[A-Z][a-zA-Z]*/),

    var_ident: ($) => token(/[a-z][a-z_]*/),

    ns_ident: ($) => alias($.var_ident, ""),

    comment: () => token(seq(PUNC().d_hash, /[^\n]*/, "\n")),

    documentation: ($) =>
      seq(
        PUNC().hash,
        field(
          FIELD().target,
          choice(
            alias($.type_ident, $.ident),
            // alias($.ns_ident, $.ident), // fix using precedence
            alias($.var_ident, $.ident),
          ),
        ),
        /[^\n]*/,
        "\n",
        repeat(seq(PUNC().hash, /[^\n]*/, "\n")),
      ),
  },
});

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

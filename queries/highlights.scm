[
    "def"
    "end"
    "namespace"
    "record"
    "do"
    "templ"
] @keyword

(comment) @comment

(namespace
  name: (ident) @module)

(def_record
  name: (ident) @type.definition)

(def_templ
  var: (ident) @variable.parameter
  type: (ident) @type)

(component
    name: (ident) @variable.member
    type: (ident) @type)

(component
  ";" @punctuation.delimiter)

(element
  tag: (ident) @tag)

(element
  "[" @tag.delimiter
  "]" @tag.delimiter)

(attr
  key: (ident) @tag.attribute @property
  val: (text) @string)

(attr
  "=" @punctuation.delimiter)

(expr (ident)) @function.call

(expr
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

[
    "def"
    "end"
    "namespace"
    "record"
    "do"
    "templ"
] @keyword

(comment) @comment

(documentation) @comment.documentation

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

(expr (ident)) @function.call

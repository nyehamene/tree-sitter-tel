[
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

(field
    name: (ident) @variable.member
    type: (ident) @type)

(field
  ";" @punctuation.delimiter)

(slice_lit (ident) @type)

(slice_lit "[]" @operator)

(element
  tag: (ident) @tag)

(element
  open: "[" @tag.delimiter
  close: "]" @tag.delimiter)

(attr
  key: (ident) @tag.attribute @property
  value: (text) @string)

(attr
  "=" @punctuation.delimiter)

(list_lit value: (ident)) @function.call

(int_lit) @number

(str_lit) @string

(str_lit
  (escape_char)  @string.escape)

(str_lit
  open: "\\(" @string.escape
  close: ")" @string.escape)

(bool_lit) @boolean

(list_lit
  open: "(" @punctuation.bracket
  close: ")" @punctuation.bracket)

(sym) @operator

(field_access
  object: (ident) @variable
  field: (ident) @variable.member)

(field_access
  "." @punctuation.delimiter)

(kwd_lit
  name: (ident) @name @keyword.repeat
  (#eq? @name "each"))

(kwd_lit
  name: (ident) @name @keyword
  (#any-of? @name "and" "or" "not"))

(list_lit
  .
  value: (kwd_lit name: (ident) @name
                  (#eq? @name "each"))
  .
  value: (list_lit
           .
           value: (ident) @op @keyword
           (#eq? @op "in")
           .
           [ (field_access) (ident)]
           .
           (ident)+ @variable.parameter))

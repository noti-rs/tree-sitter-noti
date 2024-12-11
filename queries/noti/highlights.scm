(node_type_definition name: (identifier) @type.builtin)
(type_value_identifier) @type.builtin

(property_definition name: (identifier) @variable.member)

[
 "("
 ")"
 "{"
 "}"
] @punctuation.bracket

(",") @punctuation.delimiter

(bool) @boolean
(color) @string.special
(uint) @number
(literal) @string

(line_comment) @comment @spell
(block_comment) @comment @spell

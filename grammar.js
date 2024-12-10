/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "noti",

  word: $ => $.identifier,

  extras: $ => [' ', '\n', '\t', $.line_comment, $.block_comment],

  rules: {
    source_file: $ => $.node_type_definition,

    node_type_definition: $ => seq(
      field("name", $.identifier),
      '(',
      optional($.property_list),
      ')',
      optional($.children_definition),
    ),

    property_list: $ => seq(
      $.property_definition,
      repeat(
        seq(
          ',',
          $.property_definition
        )
      ),
      optional(','),
    ),

    property_definition: $ => seq(
      field("name", $.identifier),
      token('='),
      $._property_value,
    ),

    children_definition: $ => seq(
      '{',
      repeat($.node_type_definition),
      '}',
    ),

    identifier: $ => /[a-zA-Z][a-zA-Z_]*/,

    _property_value: $ => choice(
      $.bool,
      $.color,
      $.literal,
      $.type_value_definition,
      $.uint,
    ),

    uint: $ => /\d+/,
    color: $ => /#[a-zA-Z0-9]{3,8}/,
    literal: $ => /#?[a-zA-Z0-9][a-zA-Z0-9_-]*/,
    bool: $ => token(prec(2, choice(/true/, /false/))),

    // INFO: the difference between this TypeValue identifier and identifier above
    // is additional open parenthesis. Unfortunately, the tree-sitter parser doesn't
    // have backtracking. So it is impossible to match valid pattern in place
    // without adding opening parenthesis at the end of RegExp.
    type_value_identifier: $ => /[a-zA-Z][a-zA-Z_]*\s*\(/,

    type_value_definition: $ => seq(
      $.type_value_identifier,
      optional($.property_list),
      ')',
    ),

    line_comment: $ => /\/\/.*\n/,
    block_comment: $ => /\/\*(.|\n)*\*\//,
  },
});

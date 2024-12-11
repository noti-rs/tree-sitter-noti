/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "noti",

  word: $ => $.identifier,

  extras: $ => [' ', '\n', '\t', $.line_comment, $.block_comment],

  externals: $ => [
    $.type_value_identifier
  ],

  rules: {
    source_file: $ => $.node_type_definition,

    node_type_definition: $ => seq(
      field("name", $.identifier),
      $.constructor,
      optional($.children_definition),
    ),

    constructor: $ => seq(
      '(',
      optional($.property_list),
      ')',
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
      $.type_value_definition,
      $.bool,
      $.color,
      $.literal,
      $.uint,
    ),

    type_value_definition: $ => seq(
      $.type_value_identifier,
      $.constructor,
    ),

    // ---- Primitives ----
    uint: $ => /\d+/,
    color: $ => /#[a-zA-Z0-9]{3,8}/,
    literal: $ => /#?[a-zA-Z0-9][a-zA-Z0-9_-]*/,
    bool: $ => token(prec(2, choice(/true/, /false/))),

    // ---- Commentaries  ----
    line_comment: $ => /\/\/.*\n/,
    block_comment: $ => /\/\*(.|\n)*\*\//,
  },
});

let noCase = str => {
  return new RegExp(
    str
    .split("")
    .map(c => /[a-zA-Z]/.test(c) ? `[${c.toLowerCase()}${c.toUpperCase()}]` : c)
    .join("")
  );
}

/*
  Adapted from the PEG grammar given here https://github.com/aclements/biblib
*/

module.exports = grammar({
  name: "bibtex",

  rules: {

    program: $ => repeat(choice($._command, $.comment)),

    comment: $ => /[^@]+/,

    ws: $ => /[\s\t\n]*/,

    identifier: $ => {
      const first = /[\!\$\&\*\+\-\.\/\:\;\<\>\?\@\[\]\\\^\_\`\|\~a-zA-Z]/;
      const later = /[\!\$\&\*\+\-\.\/\:\;\<\>\?\@\[\]\\\^\_\`\|\~a-zA-Z0-9]/;
      return token(seq(first, repeat(later)));
    },

    _command: $ => seq($._begin_command, $.ws, choice(
      prec.dynamic(3, $.string),
      prec.dynamic(2, $.comment_command),
      prec.dynamic(1, $.preamble),
      prec.dynamic(0, $.entry)
    )),

    _begin_command: $ => '@',

    comment_command: $ => prec.dynamic(10, noCase("comment")),

    string: $ => prec.dynamic(10, seq(noCase("string"))),
    // string: $ => prec.dynamic(10, seq("string", $.ws, choice(
    //   seq('{', $.ws, $.string_body, $.ws, '}'),
    //   seq('(', $.ws, $.string_body, $.ws, ')')
    // ))),

    preamble: $ => prec.dynamic(10, seq(noCase("preamble"))),
    // preamble: $ => prec.dynamic(10, seq(noCase("preamble"), $.ws, choice(
    //   seq('{', $.ws, $.preamble_body, $.ws, '}'),
    //   seq('(', $.ws, $.preamble_body, $.ws, ')')
    // ))),

    entry: $ => seq($.identifier, $.ws, choice(
      // seq('{', $.ws, $.key, optional(repeat1(seq(',', $.ws, $.identifier, $.ws, '=', $.ws, $.value, $.ws)), optional(',')), $.ws, '}'),
      // seq('(', $.ws, $.key_paren, optional(repeat1(seq(',', $.ws, $.identifier, $.ws, '=', $.ws, $.value, $.ws)), optional(',')), $.ws, ')')
      seq('{', $.ws, $.key, optional($.entry_body), $.ws, '}'),
      seq('(', $.ws, $.key_paren, optional($.entry_body), $.ws, ')')
    )),

    key: $ => /[^, \t}\n]*/,

    key_paren: $ => /[^, \t\n]*/,

    entry_type: $ => alias($.identifier, "entry_type"),

    entry_body: $ => seq(repeat1(seq(',', $.ws, $.identifier, $.ws, '=', $.ws, $.value, $.ws)), optional(',')),

    string_body: $ => seq($.identifier, $.ws, '=', $.ws, $.value),

    preamble_body: $ => $.value,

    value: $ => prec.left(1, seq($.piece, repeat(seq($.ws, '#', $.ws, $.piece)))),

    piece: $ => choice(
      /[0-9]+/,
      seq('{', repeat($.balanced), '}'),
      seq('"', repeat($.balanced), '"'),
      $.identifier
    ),

    balanced: $ => choice(
      seq('{', repeat($.balanced), '}'),
      /[^\{\}]+/
    )
  }
})

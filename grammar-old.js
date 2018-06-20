let noCase = str => {
  return new RegExp(
    str
    .split("")
    .map(c => /[a-zA-Z]/.test(c) ? `[${c.toLowerCase()}${c.toUpperCase()}]` : c)
    .join("")
  );
};

/*
  Adapted from the PEG grammar given here https://github.com/aclements/biblib
*/

module.exports = grammar({
  name: "bibtex",

  rules: {
    program: $ => repeat(choice($._command, $._ws, $.comment)),

    comment: $ => /[^\s\n\t@][^@]*/, // <- so we don't get comments at every empty line

    _command: $ => choice(
      $.comment_command,
      $.string,
      $.preamble,
      $.entry
    ),

    _ws: $ => /[\s\t\n]*/,

    comment_command: $ => seq('@', $._ws, noCase("comment")),

    string: $ => seq('@', $._ws, noCase("string"), $._ws, choice(
      seq('{', $._ws, $.identifier, $._ws, '=', $._ws, $.value, $._ws, '}'),
      seq('(', $._ws, $.identifier, $._ws, '=', $._ws, $.value, $._ws, ')')
    )),

    preamble: $ => seq('@', $._ws, noCase("preamble"), $._ws, choice(
      seq('{', $._ws, $.value, $._ws, '}'),
      seq('(', $._ws, $.value, $._ws, ')')
    )),

    entry: $ => seq('@', $._ws, $.identifier, $._ws, choice(
      seq('{', $._ws, $.key_b, $._ws, repeat(seq(',', $._ws, $.field)), optional(','), $._ws, '}'),
      seq('(', $._ws, $.key_p, $._ws, repeat(seq(',', $._ws, $.field)), optional(','), $._ws, ')')
    )),

    key_b: $ => /[^,\s\t\n\}]*/, // "braces key"
    key_p: $ => /[^,\s\t\n\)]*/, // "parentheses key"

    field: $ => seq($.identifier, $._ws, '=', $._ws, $.value),

    identifier: $ => {
      const first = /[\!\$\&\*\+\-\.\/\:\;<>\?\@\[\]\\\^\_\`\|\~a-zA-Z]/; // https://regex101.com/r/fAkBEf/1
      const later = /[\!\$\&\*\+\-\.\/\:\;<>\?\@\[\]\\\^\_\`\|\~a-zA-Z0-9]/; // basically all visible ascii except: "#%'(),={}
      return token(seq(first, repeat(later)));
    },

    value: $ => seq($.piece, $._ws, repeat(seq('#', $._ws, $.piece, $._ws))),

    piece: $ => choice(
      seq("{", repeat($._balanced), '}'),
      seq('"', repeat($._quote_balanced), '"'),
      $.integer,
      $.identifier
    ),

    integer: $ => /[0-9]+/,

    _balanced: $ => choice(
      seq('{', repeat($._balanced), '}'),
      $._text
    ),

    _quote_balanced: $ => choice(
      seq('{', repeat($._balanced), '}'),
      $._quote_text
    ),

    _text: $ => /[^\{\}]+/,

    _quote_text: $ => /[^\"\{\}]+/
  }
});

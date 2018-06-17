let noCase = str => {
  return new RegExp(
    str
    .split("")
    .map(c => /[a-zA-Z]/.test(c) ? `[${c.toLowerCase()}${c.toUpperCase()}]` : c)
    .join("")
  );
}

module.exports = grammar({
  name: "bibtex",

  rules: {
    program: $ => repeat(choice($.command, $.comment)),

    _ws: $ => /[\s\t\n]*/, // newlines seem to be ignored

    comment: $ => /[^@]*/,

    command: $ => seq($.begin_command, $._ws, choice(
      $.string,
      $.comment_block,
      $.preamble,
      $.entry
    )),

    begin_command: $ => "@",

    string: $ => seq(noCase("string"), $._ws, "{", $.entry_contents, "}"), // FIXME

    comment_block: $ => seq(noCase("comment"), $._ws, "{", $.comment_contents, "}"),

    preamble: $ => seq(noCase("preamble"), $._ws, "{", $.entry_contents, "}"),

    entry: $ => seq($.entry_type, $._ws, "{", $.entry_contents, "}"),

    entry_type: $ => /[a-zA-Z]*/,

    entry_contents: $ => /[^\\{}$&#^_~%\[\]]+/,

    comment_contents: $ => /[^\}]/
  }
})

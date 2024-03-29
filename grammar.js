module.exports = grammar({
  name: 'ocamllex',

  extras: $ => [
    /\s/,
    $.comment
  ],

  inline: $ => [
    $._regexp_name,
    $._lexer_entry_name,
    $._lexer_argument
  ],

  precedences: $ => [
    [
      $.regexp_difference,
      $.regexp_repetition,
      $.regexp_concatenation,
      $.regexp_alternative,
      $.aliased_regexp,
    ],
  ],

  word: $ => $._identifier,

  supertypes: $ => [
    $._regexp
  ],

  rules: {
    lexer_definition: $ => seq(
      optional($.action),
      repeat($.named_regexp),
      optional($.refill_handler),
      'rule',
      sep1('and', $.lexer_entry),
      optional($.action)
    ),

    action: $ => seq('{', $.ocaml, '}'),

    named_regexp: $ => seq(
      'let',
      field('name', $._regexp_name),
      '=',
      field('regexp', $._regexp)
    ),

    _regexp: $ => choice(
      alias('_', $.any),
      alias('eof', $.eof),
      $._regexp_name,
      $.character,
      $.string,
      $.character_set,
      $.regexp_difference,
      $.regexp_repetition,
      $.regexp_alternative,
      $.regexp_concatenation,
      $.aliased_regexp,
      $.parenthesized_regexp
    ),

    character: $ => seq(
      "'",
      choice(
        /[^\\']/,
        $._null,
        $.escape_sequence
      ),
      "'"
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(' '),
        token.immediate('\n'),
        token.immediate('\t'),
        /[^\\"]+/,
        $._null,
        $.escape_sequence,
        alias(/\\u\{[0-9A-Fa-f]+\}/, $.escape_sequence),
        alias(/\\\n[\t ]*/, $.escape_sequence)
      )),
      '"'
    ),

    escape_sequence: $ => choice(
      /\\[\\"'ntbr ]/,
      /\\[0-9][0-9][0-9]/,
      /\\x[0-9A-Fa-f][0-9A-Fa-f]/,
      /\\o[0-3][0-7][0-7]/
    ),

    character_set: $ => seq(
      '[',
      optional('^'),
      repeat1(choice(
        $.character,
        $.character_range
      )),
      ']'
    ),

    character_range: $ => seq($.character, '-', $.character),

    regexp_difference: $ => prec.left(seq(
      $._regexp,
      '#',
      $._regexp
    )),

    regexp_repetition: $ => seq($._regexp, choice('*', '+', '?')),

    regexp_alternative: $ => prec.left(seq(
      $._regexp,
      '|',
      $._regexp
    )),

    regexp_concatenation: $ => prec.left(seq(
      $._regexp,
      $._regexp
    )),

    parenthesized_regexp: $ => parenthesize($._regexp),

    aliased_regexp: $ => prec.right(seq(
      $._regexp,
      'as',
      $._regexp_name
    )),

    refill_handler: $ => seq(
      'refill', '{',
      $.ocaml,
      '}'
    ),

    lexer_entry: $ => seq(
      field('name', $._lexer_entry_name),
      repeat($._lexer_argument),
      '=',
      choice('parse', 'shortest'),
      optional('|'),
      sep1('|', $.lexer_case)
    ),

    lexer_case: $ => seq(
      $._regexp,
      $.action
    ),

    _identifier: $ => /[a-z_][a-zA-Z0-9_']*/,

    _regexp_name: $ => alias($._identifier, $.regexp_name),
    _lexer_entry_name: $ => alias($._identifier, $.lexer_entry_name),
    _lexer_argument: $ => alias($._identifier, $.lexer_argument),
  },

  externals: $ => [
    $.comment,
    $.ocaml,
    '"',
    $._null,
  ]
})

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)))
}

function parenthesize(rule) {
  return seq('(', rule, ')')
}

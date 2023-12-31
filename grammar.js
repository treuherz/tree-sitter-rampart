module.exports = grammar({
  name: 'rampart',

  rules: {
    source_file: $ => seq(
      repeat('\n'),
      repeat($.series),
    ),

    series: $ => seq($.point_list, choice('\n', '\0')),

    point_list: $ => repeat1(seq($.point, '\n')),

    point: $ => seq(
      field('time', $._time),
      repeat1(' '),
      field('power', $._power),
    ),

    _time: $ => choice($.m, $.hh_mm_ss, $.mm_ss, $.ss),
    m: $ => /[0-5]?[0-9]/,
    hh_mm_ss: $ => /([01]?[0-9]|2[0-3]):[0-5][0-9]:[0-5][0-9]/,
    mm_ss: $ => /:?[0-5]?[0-9]:[0-5][0-9]/,
    ss: $ => /:[0-5][0-9]/,

    _power: $ => choice($.integer, $.decimal, $.exponent),
    integer: $ => /-?\d(_?\d)*/,
    decimal: $ => /-?(\d(_?\d)*)?\.(_?\d)*/,
    exponent: $ => /-?(\d(_?\d)*)?(\.(_?\d)*)?[eE]-?\d(_?\d)*/,

    comment: $ => /\s*;.*/,
  },

  inline: $ => [$.leading_number, $.continuing_number],

  extras: $ => [$.comment],
});

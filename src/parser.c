#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_ = 2,
  anon_sym_2 = 3,
  sym_m = 4,
  sym_hh_mm_ss = 5,
  sym_mm_ss = 6,
  sym_ss = 7,
  sym_integer = 8,
  sym_decimal = 9,
  sym_exponent = 10,
  sym_comment = 11,
  sym_source_file = 12,
  sym_series = 13,
  sym_point_list = 14,
  sym_point = 15,
  sym__time = 16,
  sym__power = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_source_file_repeat2 = 19,
  aux_sym_point_list_repeat1 = 20,
  aux_sym_point_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_] = " ",
  [anon_sym_2] = " ",
  [sym_m] = "m",
  [sym_hh_mm_ss] = "hh_mm_ss",
  [sym_mm_ss] = "mm_ss",
  [sym_ss] = "ss",
  [sym_integer] = "integer",
  [sym_decimal] = "decimal",
  [sym_exponent] = "exponent",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_series] = "series",
  [sym_point_list] = "point_list",
  [sym_point] = "point",
  [sym__time] = "_time",
  [sym__power] = "_power",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_point_list_repeat1] = "point_list_repeat1",
  [aux_sym_point_repeat1] = "point_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [sym_m] = sym_m,
  [sym_hh_mm_ss] = sym_hh_mm_ss,
  [sym_mm_ss] = sym_mm_ss,
  [sym_ss] = sym_ss,
  [sym_integer] = sym_integer,
  [sym_decimal] = sym_decimal,
  [sym_exponent] = sym_exponent,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_series] = sym_series,
  [sym_point_list] = sym_point_list,
  [sym_point] = sym_point,
  [sym__time] = sym__time,
  [sym__power] = sym__power,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_point_list_repeat1] = aux_sym_point_list_repeat1,
  [aux_sym_point_repeat1] = aux_sym_point_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [sym_m] = {
    .visible = true,
    .named = true,
  },
  [sym_hh_mm_ss] = {
    .visible = true,
    .named = true,
  },
  [sym_mm_ss] = {
    .visible = true,
    .named = true,
  },
  [sym_ss] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_series] = {
    .visible = true,
    .named = true,
  },
  [sym_point_list] = {
    .visible = true,
    .named = true,
  },
  [sym_point] = {
    .visible = true,
    .named = true,
  },
  [sym__time] = {
    .visible = false,
    .named = true,
  },
  [sym__power] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_point_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_point_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_power = 1,
  field_time = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_power] = "power",
  [field_time] = "time",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_power, 2},
    {field_time, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == 0) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(24);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(25);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(5);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(14);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(15);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(16);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == 0) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '2') ADVANCE(28);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('3' <= lookahead && lookahead <= '5')) ADVANCE(30);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_m);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(23);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_m);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_m);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_m);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_m);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_m);
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_m);
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(27);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_m);
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_m);
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_m);
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_hh_mm_ss);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_mm_ss);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_mm_ss);
      if (lookahead == ':') ADVANCE(10);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_ss);
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_exponent);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [sym_m] = ACTIONS(1),
    [sym_hh_mm_ss] = ACTIONS(1),
    [sym_mm_ss] = ACTIONS(1),
    [sym_ss] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_exponent] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym_series] = STATE(3),
    [sym_point_list] = STATE(13),
    [sym_point] = STATE(16),
    [sym__time] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_point_list_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(7),
    [sym_m] = ACTIONS(9),
    [sym_hh_mm_ss] = ACTIONS(11),
    [sym_mm_ss] = ACTIONS(9),
    [sym_ss] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_series] = STATE(4),
    [sym_point_list] = STATE(13),
    [sym_point] = STATE(16),
    [sym__time] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym_point_list_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [sym_m] = ACTIONS(9),
    [sym_hh_mm_ss] = ACTIONS(11),
    [sym_mm_ss] = ACTIONS(9),
    [sym_ss] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_series] = STATE(5),
    [sym_point_list] = STATE(13),
    [sym_point] = STATE(16),
    [sym__time] = STATE(14),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_point_list_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_m] = ACTIONS(9),
    [sym_hh_mm_ss] = ACTIONS(11),
    [sym_mm_ss] = ACTIONS(9),
    [sym_ss] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_series] = STATE(5),
    [sym_point_list] = STATE(13),
    [sym_point] = STATE(16),
    [sym__time] = STATE(14),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_point_list_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_m] = ACTIONS(9),
    [sym_hh_mm_ss] = ACTIONS(11),
    [sym_mm_ss] = ACTIONS(9),
    [sym_ss] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_series] = STATE(5),
    [sym_point_list] = STATE(13),
    [sym_point] = STATE(16),
    [sym__time] = STATE(14),
    [aux_sym_source_file_repeat2] = STATE(5),
    [aux_sym_point_list_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_m] = ACTIONS(21),
    [sym_hh_mm_ss] = ACTIONS(24),
    [sym_mm_ss] = ACTIONS(21),
    [sym_ss] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_hh_mm_ss,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      anon_sym_,
    STATE(7), 1,
      aux_sym_point_list_repeat1,
    STATE(14), 1,
      sym__time,
    STATE(16), 1,
      sym_point,
    ACTIONS(9), 3,
      sym_m,
      sym_mm_ss,
      sym_ss,
  [27] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      anon_sym_,
    ACTIONS(38), 1,
      sym_hh_mm_ss,
    STATE(7), 1,
      aux_sym_point_list_repeat1,
    STATE(14), 1,
      sym__time,
    STATE(16), 1,
      sym_point,
    ACTIONS(35), 3,
      sym_m,
      sym_mm_ss,
      sym_ss,
  [54] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_hh_mm_ss,
    ACTIONS(46), 3,
      sym_m,
      sym_mm_ss,
      sym_ss,
  [73] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_,
      sym_hh_mm_ss,
    ACTIONS(31), 4,
      anon_sym_LF,
      sym_m,
      sym_mm_ss,
      sym_ss,
  [87] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_2,
    ACTIONS(52), 1,
      sym_exponent,
    STATE(12), 1,
      aux_sym_point_repeat1,
    STATE(17), 1,
      sym__power,
    ACTIONS(50), 2,
      sym_integer,
      sym_decimal,
  [107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym_hh_mm_ss,
    ACTIONS(56), 3,
      sym_m,
      sym_mm_ss,
      sym_ss,
  [120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_2,
    ACTIONS(63), 1,
      sym_exponent,
    STATE(12), 1,
      aux_sym_point_repeat1,
    ACTIONS(61), 2,
      sym_integer,
      sym_decimal,
  [137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_LF,
    ACTIONS(67), 1,
      anon_sym_,
  [147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_2,
    STATE(10), 1,
      aux_sym_point_repeat1,
  [157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LF,
  [171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 27,
  [SMALL_STATE(8)] = 54,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 87,
  [SMALL_STATE(11)] = 107,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 137,
  [SMALL_STATE(14)] = 147,
  [SMALL_STATE(15)] = 157,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 171,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(14),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_point_list, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_point_list, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_point_list_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_point_list_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_point_list_repeat1, 2), SHIFT_REPEAT(14),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_point_list_repeat1, 2), SHIFT_REPEAT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_series, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_series, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_point_repeat1, 2), SHIFT_REPEAT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_point_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_point_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_point, 3, .production_id = 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rampart(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

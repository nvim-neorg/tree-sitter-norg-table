#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__column_separator = 1,
  sym__ruler = 2,
  sym__new_line = 3,
  sym_integer = 4,
  sym_float = 5,
  sym_word = 6,
  sym_table = 7,
  sym_row = 8,
  sym_cell = 9,
  sym_horizontal_rule = 10,
  aux_sym_table_repeat1 = 11,
  aux_sym_row_repeat1 = 12,
  aux_sym_cell_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__column_separator] = "_column_separator",
  [sym__ruler] = "_ruler",
  [sym__new_line] = "_new_line",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_word] = "word",
  [sym_table] = "table",
  [sym_row] = "row",
  [sym_cell] = "cell",
  [sym_horizontal_rule] = "horizontal_rule",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
  [aux_sym_cell_repeat1] = "cell_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__column_separator] = sym__column_separator,
  [sym__ruler] = sym__ruler,
  [sym__new_line] = sym__new_line,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_word] = sym_word,
  [sym_table] = sym_table,
  [sym_row] = sym_row,
  [sym_cell] = sym_cell,
  [sym_horizontal_rule] = sym_horizontal_rule,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_row_repeat1] = aux_sym_row_repeat1,
  [aux_sym_cell_repeat1] = aux_sym_cell_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__column_separator] = {
    .visible = false,
    .named = true,
  },
  [sym__ruler] = {
    .visible = false,
    .named = true,
  },
  [sym__new_line] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_row] = {
    .visible = true,
    .named = true,
  },
  [sym_cell] = {
    .visible = true,
    .named = true,
  },
  [sym_horizontal_rule] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_row_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cell_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '|') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '|') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__column_separator);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__ruler);
      if (lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__ruler);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__new_line);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__column_separator] = ACTIONS(1),
    [sym__ruler] = ACTIONS(1),
    [sym__new_line] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_table] = STATE(23),
    [sym_row] = STATE(3),
    [sym_cell] = STATE(10),
    [sym_horizontal_rule] = STATE(3),
    [aux_sym_table_repeat1] = STATE(3),
    [aux_sym_cell_repeat1] = STATE(8),
    [sym__column_separator] = ACTIONS(3),
    [sym__ruler] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_word] = ACTIONS(7),
  },
  [2] = {
    [sym_row] = STATE(2),
    [sym_cell] = STATE(10),
    [sym_horizontal_rule] = STATE(2),
    [aux_sym_table_repeat1] = STATE(2),
    [aux_sym_cell_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym__column_separator] = ACTIONS(11),
    [sym__ruler] = ACTIONS(14),
    [sym_integer] = ACTIONS(17),
    [sym_float] = ACTIONS(17),
    [sym_word] = ACTIONS(17),
  },
  [3] = {
    [sym_row] = STATE(2),
    [sym_cell] = STATE(10),
    [sym_horizontal_rule] = STATE(2),
    [aux_sym_table_repeat1] = STATE(2),
    [aux_sym_cell_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(20),
    [sym__column_separator] = ACTIONS(3),
    [sym__ruler] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_word] = ACTIONS(7),
  },
  [4] = {
    [sym_cell] = STATE(14),
    [aux_sym_cell_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym__column_separator] = ACTIONS(24),
    [sym__ruler] = ACTIONS(24),
    [sym__new_line] = ACTIONS(26),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_word] = ACTIONS(7),
  },
  [5] = {
    [sym_cell] = STATE(14),
    [aux_sym_cell_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym__column_separator] = ACTIONS(30),
    [sym__ruler] = ACTIONS(30),
    [sym__new_line] = ACTIONS(32),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_word] = ACTIONS(7),
  },
  [6] = {
    [sym_cell] = STATE(14),
    [aux_sym_cell_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym__column_separator] = ACTIONS(36),
    [sym__ruler] = ACTIONS(36),
    [sym__new_line] = ACTIONS(38),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(7),
    [sym_word] = ACTIONS(7),
  },
  [7] = {
    [aux_sym_row_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym__column_separator] = ACTIONS(40),
    [sym__ruler] = ACTIONS(24),
    [sym__new_line] = ACTIONS(26),
    [sym_integer] = ACTIONS(24),
    [sym_float] = ACTIONS(24),
    [sym_word] = ACTIONS(24),
  },
  [8] = {
    [aux_sym_cell_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym__column_separator] = ACTIONS(44),
    [sym__ruler] = ACTIONS(44),
    [sym__new_line] = ACTIONS(42),
    [sym_integer] = ACTIONS(46),
    [sym_float] = ACTIONS(46),
    [sym_word] = ACTIONS(46),
  },
  [9] = {
    [aux_sym_row_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym__column_separator] = ACTIONS(40),
    [sym__ruler] = ACTIONS(24),
    [sym__new_line] = ACTIONS(26),
    [sym_integer] = ACTIONS(24),
    [sym_float] = ACTIONS(24),
    [sym_word] = ACTIONS(24),
  },
  [10] = {
    [aux_sym_row_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym__column_separator] = ACTIONS(50),
    [sym__ruler] = ACTIONS(52),
    [sym__new_line] = ACTIONS(54),
    [sym_integer] = ACTIONS(52),
    [sym_float] = ACTIONS(52),
    [sym_word] = ACTIONS(52),
  },
  [11] = {
    [aux_sym_cell_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym__column_separator] = ACTIONS(58),
    [sym__ruler] = ACTIONS(58),
    [sym__new_line] = ACTIONS(56),
    [sym_integer] = ACTIONS(60),
    [sym_float] = ACTIONS(60),
    [sym_word] = ACTIONS(60),
  },
  [12] = {
    [aux_sym_row_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym__column_separator] = ACTIONS(63),
    [sym__ruler] = ACTIONS(36),
    [sym__new_line] = ACTIONS(38),
    [sym_integer] = ACTIONS(36),
    [sym_float] = ACTIONS(36),
    [sym_word] = ACTIONS(36),
  },
  [13] = {
    [aux_sym_row_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym__column_separator] = ACTIONS(67),
    [sym__ruler] = ACTIONS(70),
    [sym__new_line] = ACTIONS(65),
    [sym_integer] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [sym_word] = ACTIONS(70),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym__new_line,
    ACTIONS(70), 5,
      sym__column_separator,
      sym__ruler,
      sym_integer,
      sym_float,
      sym_word,
  [12] = 3,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym__new_line,
    ACTIONS(74), 5,
      sym__column_separator,
      sym__ruler,
      sym_integer,
      sym_float,
      sym_word,
  [26] = 2,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym__column_separator,
    ACTIONS(80), 4,
      sym__ruler,
      sym_integer,
      sym_float,
      sym_word,
  [37] = 2,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      sym__column_separator,
    ACTIONS(24), 4,
      sym__ruler,
      sym_integer,
      sym_float,
      sym_word,
  [48] = 2,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      sym__column_separator,
    ACTIONS(36), 4,
      sym__ruler,
      sym_integer,
      sym_float,
      sym_word,
  [59] = 2,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      sym__column_separator,
    ACTIONS(30), 4,
      sym__ruler,
      sym_integer,
      sym_float,
      sym_word,
  [70] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      sym__column_separator,
    ACTIONS(84), 4,
      sym__ruler,
      sym_integer,
      sym_float,
      sym_word,
  [81] = 3,
    STATE(8), 1,
      aux_sym_cell_repeat1,
    STATE(9), 1,
      sym_cell,
    ACTIONS(7), 3,
      sym_integer,
      sym_float,
      sym_word,
  [93] = 3,
    STATE(8), 1,
      aux_sym_cell_repeat1,
    STATE(14), 1,
      sym_cell,
    ACTIONS(7), 3,
      sym_integer,
      sym_float,
      sym_word,
  [105] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 12,
  [SMALL_STATE(16)] = 26,
  [SMALL_STATE(17)] = 37,
  [SMALL_STATE(18)] = 48,
  [SMALL_STATE(19)] = 59,
  [SMALL_STATE(20)] = 70,
  [SMALL_STATE(21)] = 81,
  [SMALL_STATE(22)] = 93,
  [SMALL_STATE(23)] = 105,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(21),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(15),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(8),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 4),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cell_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cell_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cell_repeat1, 2), SHIFT_REPEAT(11),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(22),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 5),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 5),
  [86] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_norg_table(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

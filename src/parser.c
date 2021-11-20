#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_integer = 1,
  sym_float = 2,
  sym__ruler = 3,
  sym__word = 4,
  sym_column_separator = 5,
  sym__new_line = 6,
  sym_table = 7,
  sym_row = 8,
  sym_cell = 9,
  sym_paragraph = 10,
  sym_horizontal_rule = 11,
  aux_sym_table_repeat1 = 12,
  aux_sym_row_repeat1 = 13,
  aux_sym_paragraph_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym__ruler] = "_ruler",
  [sym__word] = "_word",
  [sym_column_separator] = "_column_separator",
  [sym__new_line] = "_new_line",
  [sym_table] = "table",
  [sym_row] = "row",
  [sym_cell] = "cell",
  [sym_paragraph] = "paragraph",
  [sym_horizontal_rule] = "horizontal_rule",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym__ruler] = sym__ruler,
  [sym__word] = sym__word,
  [sym_column_separator] = sym_column_separator,
  [sym__new_line] = sym__new_line,
  [sym_table] = sym_table,
  [sym_row] = sym_row,
  [sym_cell] = sym_cell,
  [sym_paragraph] = sym_paragraph,
  [sym_horizontal_rule] = sym_horizontal_rule,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_row_repeat1] = aux_sym_row_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [sym__ruler] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_column_separator] = {
    .visible = true,
    .named = false,
  },
  [sym__new_line] = {
    .visible = false,
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
  [sym_paragraph] = {
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
  [aux_sym_paragraph_repeat1] = {
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
      if (eof) ADVANCE(7);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__ruler);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__ruler);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_column_separator);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_column_separator);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__new_line);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym__ruler] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym_column_separator] = ACTIONS(1),
  },
  [1] = {
    [sym_table] = STATE(23),
    [sym_row] = STATE(2),
    [sym_cell] = STATE(16),
    [sym_paragraph] = STATE(22),
    [sym_horizontal_rule] = STATE(2),
    [aux_sym_table_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(14),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym__ruler] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
    [sym_column_separator] = ACTIONS(9),
  },
  [2] = {
    [sym_row] = STATE(3),
    [sym_cell] = STATE(16),
    [sym_paragraph] = STATE(22),
    [sym_horizontal_rule] = STATE(3),
    [aux_sym_table_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym__ruler] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
    [sym_column_separator] = ACTIONS(9),
  },
  [3] = {
    [sym_row] = STATE(3),
    [sym_cell] = STATE(16),
    [sym_paragraph] = STATE(22),
    [sym_horizontal_rule] = STATE(3),
    [aux_sym_table_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_integer] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [sym__ruler] = ACTIONS(18),
    [sym__word] = ACTIONS(21),
    [sym_column_separator] = ACTIONS(24),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(27), 1,
      sym__new_line,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(21), 1,
      sym_cell,
    STATE(22), 1,
      sym_paragraph,
    ACTIONS(3), 2,
      sym_integer,
      sym_float,
  [20] = 6,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(29), 1,
      sym__new_line,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(21), 1,
      sym_cell,
    STATE(22), 1,
      sym_paragraph,
    ACTIONS(3), 2,
      sym_integer,
      sym_float,
  [40] = 6,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(31), 1,
      sym__new_line,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(21), 1,
      sym_cell,
    STATE(22), 1,
      sym_paragraph,
    ACTIONS(3), 2,
      sym_integer,
      sym_float,
  [60] = 2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 5,
      sym_integer,
      sym_float,
      sym__ruler,
      sym__word,
      sym_column_separator,
  [71] = 2,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 5,
      sym_integer,
      sym_float,
      sym__ruler,
      sym__word,
      sym_column_separator,
  [82] = 5,
    ACTIONS(7), 1,
      sym__word,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(21), 1,
      sym_cell,
    STATE(22), 1,
      sym_paragraph,
    ACTIONS(3), 2,
      sym_integer,
      sym_float,
  [99] = 5,
    ACTIONS(7), 1,
      sym__word,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
    STATE(20), 1,
      sym_cell,
    STATE(22), 1,
      sym_paragraph,
    ACTIONS(3), 2,
      sym_integer,
      sym_float,
  [116] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 5,
      sym_integer,
      sym_float,
      sym__ruler,
      sym__word,
      sym_column_separator,
  [127] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 5,
      sym_integer,
      sym_float,
      sym__ruler,
      sym__word,
      sym_column_separator,
  [138] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 5,
      sym_integer,
      sym_float,
      sym__ruler,
      sym__word,
      sym_column_separator,
  [149] = 4,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(55), 1,
      sym_column_separator,
    ACTIONS(57), 1,
      sym__new_line,
    STATE(15), 1,
      aux_sym_paragraph_repeat1,
  [162] = 4,
    ACTIONS(59), 1,
      sym__word,
    ACTIONS(62), 1,
      sym_column_separator,
    ACTIONS(64), 1,
      sym__new_line,
    STATE(15), 1,
      aux_sym_paragraph_repeat1,
  [175] = 3,
    ACTIONS(66), 1,
      sym_column_separator,
    ACTIONS(68), 1,
      sym__new_line,
    STATE(17), 1,
      aux_sym_row_repeat1,
  [185] = 3,
    ACTIONS(29), 1,
      sym__new_line,
    ACTIONS(70), 1,
      sym_column_separator,
    STATE(19), 1,
      aux_sym_row_repeat1,
  [195] = 3,
    ACTIONS(31), 1,
      sym__new_line,
    ACTIONS(72), 1,
      sym_column_separator,
    STATE(19), 1,
      aux_sym_row_repeat1,
  [205] = 3,
    ACTIONS(74), 1,
      sym_column_separator,
    ACTIONS(77), 1,
      sym__new_line,
    STATE(19), 1,
      aux_sym_row_repeat1,
  [215] = 3,
    ACTIONS(29), 1,
      sym__new_line,
    ACTIONS(70), 1,
      sym_column_separator,
    STATE(18), 1,
      aux_sym_row_repeat1,
  [225] = 2,
    ACTIONS(77), 1,
      sym__new_line,
    ACTIONS(79), 1,
      sym_column_separator,
  [232] = 2,
    ACTIONS(81), 1,
      sym_column_separator,
    ACTIONS(83), 1,
      sym__new_line,
  [239] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [243] = 1,
    ACTIONS(87), 1,
      sym__new_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 71,
  [SMALL_STATE(9)] = 82,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 127,
  [SMALL_STATE(13)] = 138,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 162,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 185,
  [SMALL_STATE(18)] = 195,
  [SMALL_STATE(19)] = 205,
  [SMALL_STATE(20)] = 215,
  [SMALL_STATE(21)] = 225,
  [SMALL_STATE(22)] = 232,
  [SMALL_STATE(23)] = 239,
  [SMALL_STATE(24)] = 243,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(22),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(24),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(14),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 5),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(15),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell, 1),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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

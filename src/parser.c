#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym__column_separator = 2,
  sym_integer = 3,
  sym_float = 4,
  sym_word = 5,
  sym_table = 6,
  sym_row = 7,
  sym_cell = 8,
  aux_sym_table_repeat1 = 9,
  aux_sym_row_repeat1 = 10,
  aux_sym_cell_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym__column_separator] = "_column_separator",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_word] = "word",
  [sym_table] = "table",
  [sym_row] = "row",
  [sym_cell] = "cell",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
  [aux_sym_cell_repeat1] = "cell_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym__column_separator] = sym__column_separator,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_word] = sym_word,
  [sym_table] = sym_table,
  [sym_row] = sym_row,
  [sym_cell] = sym_cell,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_row_repeat1] = aux_sym_row_repeat1,
  [aux_sym_cell_repeat1] = aux_sym_cell_repeat1,
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
  [sym__column_separator] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(9);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == '|') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__column_separator);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(9);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym__column_separator] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_table] = STATE(16),
    [sym_row] = STATE(2),
    [sym_cell] = STATE(4),
    [aux_sym_table_repeat1] = STATE(2),
    [aux_sym_cell_repeat1] = STATE(5),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(5),
    [sym_word] = ACTIONS(5),
  },
  [2] = {
    [sym_row] = STATE(3),
    [sym_cell] = STATE(4),
    [aux_sym_table_repeat1] = STATE(3),
    [aux_sym_cell_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(5),
    [sym_word] = ACTIONS(5),
  },
  [3] = {
    [sym_row] = STATE(3),
    [sym_cell] = STATE(4),
    [aux_sym_table_repeat1] = STATE(3),
    [aux_sym_cell_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(14),
    [sym_word] = ACTIONS(14),
  },
  [4] = {
    [aux_sym_row_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(19),
    [sym__column_separator] = ACTIONS(21),
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [sym_word] = ACTIONS(23),
  },
  [5] = {
    [aux_sym_cell_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(25),
    [sym__column_separator] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_float] = ACTIONS(29),
    [sym_word] = ACTIONS(29),
  },
  [6] = {
    [sym_cell] = STATE(11),
    [aux_sym_cell_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym_word] = ACTIONS(3),
  },
  [7] = {
    [aux_sym_row_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LF] = ACTIONS(33),
    [sym__column_separator] = ACTIONS(35),
    [sym_integer] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [sym_word] = ACTIONS(37),
  },
  [8] = {
    [aux_sym_cell_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(39),
    [sym__column_separator] = ACTIONS(41),
    [sym_integer] = ACTIONS(43),
    [sym_float] = ACTIONS(43),
    [sym_word] = ACTIONS(43),
  },
  [9] = {
    [sym_cell] = STATE(11),
    [aux_sym_cell_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_LF] = ACTIONS(48),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym_word] = ACTIONS(3),
  },
  [10] = {
    [aux_sym_row_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LF] = ACTIONS(50),
    [sym__column_separator] = ACTIONS(52),
    [sym_integer] = ACTIONS(55),
    [sym_float] = ACTIONS(55),
    [sym_word] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(55), 4,
      sym__column_separator,
      sym_integer,
      sym_float,
      sym_word,
  [11] = 4,
    ACTIONS(3), 1,
      sym_integer,
    STATE(5), 1,
      aux_sym_cell_repeat1,
    STATE(11), 1,
      sym_cell,
    ACTIONS(5), 2,
      sym_float,
      sym_word,
  [25] = 2,
    ACTIONS(37), 1,
      sym_integer,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym_float,
      sym_word,
  [34] = 2,
    ACTIONS(57), 1,
      sym_integer,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      sym_float,
      sym_word,
  [43] = 2,
    ACTIONS(61), 1,
      sym_integer,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      sym_float,
      sym_word,
  [52] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 11,
  [SMALL_STATE(13)] = 25,
  [SMALL_STATE(14)] = 34,
  [SMALL_STATE(15)] = 43,
  [SMALL_STATE(16)] = 52,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(5),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cell_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cell_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cell_repeat1, 2), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 4),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

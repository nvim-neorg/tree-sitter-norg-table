#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 9
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym__column_separator = 1,
  sym_integer = 2,
  sym_float = 3,
  sym_table = 4,
  sym_row = 5,
  sym_cell = 6,
  aux_sym_table_repeat1 = 7,
  aux_sym_row_repeat1 = 8,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__column_separator] = "_column_separator",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_table] = "table",
  [sym_row] = "row",
  [sym_cell] = "cell",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_row_repeat1] = "row_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__column_separator] = sym__column_separator,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_table] = sym_table,
  [sym_row] = sym_row,
  [sym_cell] = sym_cell,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_row_repeat1] = aux_sym_row_repeat1,
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
      if (eof) ADVANCE(1);
      if (lookahead == '|') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__column_separator);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__column_separator] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_table] = STATE(8),
    [sym_row] = STATE(5),
    [aux_sym_table_repeat1] = STATE(5),
    [sym__column_separator] = ACTIONS(3),
  },
  [2] = {
    [sym_cell] = STATE(10),
    [aux_sym_row_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__column_separator] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(9),
  },
  [3] = {
    [sym_cell] = STATE(10),
    [aux_sym_row_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__column_separator] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_float] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      sym_integer,
    ACTIONS(9), 1,
      sym_float,
    STATE(2), 1,
      aux_sym_row_repeat1,
    STATE(10), 1,
      sym_cell,
  [13] = 3,
    ACTIONS(3), 1,
      sym__column_separator,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_row,
      aux_sym_table_repeat1,
  [24] = 3,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym__column_separator,
    STATE(6), 2,
      sym_row,
      aux_sym_table_repeat1,
  [35] = 2,
    ACTIONS(26), 1,
      sym_integer,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      sym__column_separator,
      sym_float,
  [44] = 1,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
  [48] = 1,
    ACTIONS(30), 1,
      sym__column_separator,
  [52] = 1,
    ACTIONS(32), 1,
      sym__column_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 35,
  [SMALL_STATE(8)] = 44,
  [SMALL_STATE(9)] = 48,
  [SMALL_STATE(10)] = 52,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(9),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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

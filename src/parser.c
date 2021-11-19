#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  sym__column_separator = 1,
  sym_integer = 2,
  sym_float = 3,
  sym_word = 4,
  sym_table = 5,
  sym_row = 6,
  sym_cell = 7,
  aux_sym_table_repeat1 = 8,
  aux_sym_row_repeat1 = 9,
  aux_sym_cell_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
      if (eof) ADVANCE(2);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(6);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__column_separator);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(6);
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
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__column_separator] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_table] = STATE(10),
    [sym_row] = STATE(8),
    [aux_sym_table_repeat1] = STATE(8),
    [sym__column_separator] = ACTIONS(3),
  },
  [2] = {
    [sym_cell] = STATE(11),
    [aux_sym_row_repeat1] = STATE(3),
    [aux_sym_cell_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__column_separator] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(9),
    [sym_word] = ACTIONS(9),
  },
  [3] = {
    [sym_cell] = STATE(11),
    [aux_sym_row_repeat1] = STATE(3),
    [aux_sym_cell_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__column_separator] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_float] = ACTIONS(16),
    [sym_word] = ACTIONS(16),
  },
  [4] = {
    [sym_cell] = STATE(11),
    [aux_sym_row_repeat1] = STATE(2),
    [aux_sym_cell_repeat1] = STATE(5),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(9),
    [sym_word] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      sym__column_separator,
    ACTIONS(21), 1,
      sym_integer,
    STATE(7), 1,
      aux_sym_cell_repeat1,
    ACTIONS(23), 2,
      sym_float,
      sym_word,
  [14] = 2,
    ACTIONS(25), 1,
      sym_integer,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      sym__column_separator,
      sym_float,
      sym_word,
  [24] = 4,
    ACTIONS(27), 1,
      sym__column_separator,
    ACTIONS(29), 1,
      sym_integer,
    STATE(7), 1,
      aux_sym_cell_repeat1,
    ACTIONS(32), 2,
      sym_float,
      sym_word,
  [38] = 3,
    ACTIONS(3), 1,
      sym__column_separator,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_row,
      aux_sym_table_repeat1,
  [49] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym__column_separator,
    STATE(9), 2,
      sym_row,
      aux_sym_table_repeat1,
  [60] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [64] = 1,
    ACTIONS(44), 1,
      sym__column_separator,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 38,
  [SMALL_STATE(9)] = 49,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 64,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cell_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cell_repeat1, 2), SHIFT_REPEAT(7),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cell_repeat1, 2), SHIFT_REPEAT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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

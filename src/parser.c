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
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '+') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '|') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '+') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '|') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '+') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__column_separator);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
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
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
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
    [sym_float] = ACTIONS(3),
    [sym_word] = ACTIONS(3),
  },
  [2] = {
    [sym_row] = STATE(3),
    [sym_cell] = STATE(4),
    [aux_sym_table_repeat1] = STATE(3),
    [aux_sym_cell_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym_word] = ACTIONS(3),
  },
  [3] = {
    [sym_row] = STATE(3),
    [sym_cell] = STATE(4),
    [aux_sym_table_repeat1] = STATE(3),
    [aux_sym_cell_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(9),
    [sym_word] = ACTIONS(9),
  },
  [4] = {
    [aux_sym_row_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(12),
    [anon_sym_LF] = ACTIONS(14),
    [sym__column_separator] = ACTIONS(16),
    [sym_integer] = ACTIONS(18),
    [sym_float] = ACTIONS(18),
    [sym_word] = ACTIONS(18),
  },
  [5] = {
    [aux_sym_cell_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(20),
    [anon_sym_LF] = ACTIONS(20),
    [sym__column_separator] = ACTIONS(22),
    [sym_integer] = ACTIONS(24),
    [sym_float] = ACTIONS(24),
    [sym_word] = ACTIONS(24),
  },
  [6] = {
    [sym_cell] = STATE(11),
    [aux_sym_cell_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(28),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym_word] = ACTIONS(3),
  },
  [7] = {
    [aux_sym_row_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(28),
    [sym__column_separator] = ACTIONS(30),
    [sym_integer] = ACTIONS(32),
    [sym_float] = ACTIONS(32),
    [sym_word] = ACTIONS(32),
  },
  [8] = {
    [aux_sym_cell_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_LF] = ACTIONS(34),
    [sym__column_separator] = ACTIONS(36),
    [sym_integer] = ACTIONS(38),
    [sym_float] = ACTIONS(38),
    [sym_word] = ACTIONS(38),
  },
  [9] = {
    [sym_cell] = STATE(11),
    [aux_sym_cell_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LF] = ACTIONS(43),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [sym_word] = ACTIONS(3),
  },
  [10] = {
    [aux_sym_row_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LF] = ACTIONS(45),
    [sym__column_separator] = ACTIONS(47),
    [sym_integer] = ACTIONS(50),
    [sym_float] = ACTIONS(50),
    [sym_word] = ACTIONS(50),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(50), 4,
      sym__column_separator,
      sym_integer,
      sym_float,
      sym_word,
  [11] = 3,
    STATE(5), 1,
      aux_sym_cell_repeat1,
    STATE(11), 1,
      sym_cell,
    ACTIONS(3), 3,
      sym_integer,
      sym_float,
      sym_word,
  [23] = 2,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 3,
      sym_integer,
      sym_float,
      sym_word,
  [32] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 3,
      sym_integer,
      sym_float,
      sym_word,
  [41] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 3,
      sym_integer,
      sym_float,
      sym_word,
  [50] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 11,
  [SMALL_STATE(13)] = 23,
  [SMALL_STATE(14)] = 32,
  [SMALL_STATE(15)] = 41,
  [SMALL_STATE(16)] = 50,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(5),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 1),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cell, 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cell, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cell_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cell_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cell_repeat1, 2), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_row_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2), SHIFT_REPEAT(12),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_row_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row, 4),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row, 4),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

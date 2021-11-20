module.exports = grammar({
    name: 'norg_table',

    rules: {
        table: $ => repeat1(
            choice(
                $.row,
                $.horizontal_rule,
            ),
        ),

        row: $ => prec.right(
            seq(
                optional(
                    $._column_separator,
                ),
                $.cell,
                repeat(
                    seq(
                        $._column_separator,
                        $.cell,
                    ),
                ),
                optional(
                    $._column_separator,
                ),
                optional(
                    $._new_line,
                ),
            ),
        ),

        cell: $ => prec.right(
            repeat1(
                choice(
                    $.integer,
                    $.float,
                    $.word,
                ),
            ),
        ),

        _column_separator: $ => '|',

        _ruler: $ => /\-+/,

        _new_line: $ => token.immediate('\n'),

        integer: $ => /[\+-]?\d+/,

        float: $ => /[\+-]?\d+\.\d*/,

        word: $ => /[a-zA-Z-_]\S*/,

        horizontal_rule: $ => seq(
            $._ruler,
            optional(
                $._new_line,
            ),
        ),
    }
})

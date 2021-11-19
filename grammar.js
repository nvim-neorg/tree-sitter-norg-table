module.exports = grammar({
    name: 'norg_table',

    rules: {
        table: $ => repeat1(
            choice(
                $.row,
            ),
        ),

        row: $ => prec.right(
            seq(
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
                    // This looks stupid but it ensures that line breaks are
                    // able to end a row while also not requiring an empty line
                    // below the final row.
                    token.immediate('\n'),
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

        // TODO: handle negative numbers, too
        integer: $ => /\d+/,

        float: $ => /\d+\.\d*/,

        word: $ => /[a-zA-Z_]\S+/,
    }
})

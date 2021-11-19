module.exports = grammar({
    name: 'norg_table',

    rules: {
        table: $ => repeat1(
            choice(
                $.row,
            ),
        ),

        row: $ => seq(
            $._column_separator,
            repeat1(
                seq(
                    $.cell,
                    $._column_separator,
                ),
            ),
        ),

        cell: $ => repeat1(
            choice(
                $.integer,
                $.float,
                $.word,
            ),
        ),

        _column_separator: $ => /\|/,

        integer: $ => /\d+/,

        float: $ => /\d+\.\d*/,

        word: $ => /[a-zA-Z_]\S+/,
    }
})

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

        cell: $ => choice(
            $.integer,
            $.float,
        ),

        _column_separator: $ => /\|/,

        integer: $ => /\d+/,
        float: $ => /\d+\.\d*/,
    }
})

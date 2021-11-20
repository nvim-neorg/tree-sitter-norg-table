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
                    alias($.column_separator, "_column_separator"),
                ),
                $.cell,
                repeat(
                    seq(
                        alias($.column_separator, "_column_separator"),
                        $.cell,
                    ),
                ),
                optional(
                    alias($.column_separator, "_column_separator"),
                ),
                $._new_line,
            ),
        ),

        cell: $ => choice(
            $.integer,
            $.float,
            $.paragraph,
        ),

        paragraph: $ => prec(2,
            repeat1(
                $._word,
            ),
        ),

        horizontal_rule: $ => seq(
            $._ruler,
            $._new_line,
        ),

        integer: $ => /[\+-]?\d+/,

        float: $ => /[\+-]?\d+\.\d*/,

        _ruler: $ => /\-+/,

        _word: $ => /\S+/,

        column_separator: $ => '|',

        _new_line: $ => token.immediate('\n'),
    }
})

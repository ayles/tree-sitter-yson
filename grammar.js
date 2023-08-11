module.exports = grammar({
    name: 'yson',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    supertypes: $ => [
        $._value
    ],

    rules: {
        document: $ => repeat($._tree),

        _tree: $ => seq(
            optional($.attributes),
            $._value,
        ),

        attributes: $ => seq(
            "<",
            semicolonSep($.pair),
            ">",
        ),

        _value: $ => choice(
            $.object,
            $.array,
            $.number,
            $.string,
            $.true,
            $.false,
            $.nan,
            $.inf,
            $.entity,
        ),

        object: $ => seq(
            "{", semicolonSep($.pair), "}"
        ),

        pair: $ => seq(
            field("key", $.string),
            "=",
            field("value", $._tree)
        ),

        array: $ => seq(
            "[", semicolonSep($._value), "]"
        ),

        string: $ => choice(
            seq('"', '"'),
            seq('"', $.string_content, '"'),
            /[a-zA-Z_][a-zA-Z0-9_\-%\.]*/,
        ),

        string_content: $ => repeat1(choice(
            token.immediate(prec(1, /[^\\"\n]+/)),
            $.escape_sequence
        )),

        escape_sequence: $ => token.immediate(seq(
            '\\',
            /(\"|\\|\/|b|f|n|r|t|u)/
        )),

        number: $ => {
            const hex_literal = seq(
                choice('0x', '0X'),
                /[\da-fA-F]+/
            )

            const decimal_digits = /\d+/
            const signed_integer = seq(optional(choice('-', '+')), decimal_digits)
            const exponent_part = seq(choice('e', 'E'), signed_integer)

            const binary_literal = seq(choice('0b', '0B'), /[0-1]+/)

            const octal_literal = seq(choice('0o', '0O'), /[0-7]+/)

            const decimal_integer_literal = seq(
                optional(choice('-', '+')),
                choice(
                    '0',
                    seq(/[1-9]/, optional(decimal_digits))
                )
            )

            const decimal_literal = choice(
                seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
                seq('.', decimal_digits, optional(exponent_part)),
                seq(decimal_integer_literal, optional(exponent_part))
            )

            return token(choice(
                hex_literal,
                decimal_literal,
                binary_literal,
                octal_literal
            ))
        },

        true: $ => "%true",

        false: $ => "%false",

        nan: $ => /%[-+]?nan/,

        inf: $ => /%[-+]?inf/,

        entity: $ => "#",

        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),
    }
});

function semicolonSep(rule) {
    return seq(optional(seq(rule, repeat(seq(";", rule)))), optional(";"))
}


module.exports = grammar({
  name: "surql",

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) => choice($.crud_statement, $.definition_statement),

    crud_statement: ($) => seq(repeat1($._statement_parts), ";"),

    _statement_parts: ($) =>
      choice(
        $.create_part,
        $.update_part,
        $.delete_part,
        $.select_part,
        $.from_part,
        $.where_part,
        $.content_part,
      ),

    _simple_name: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    identifier: ($) => $._simple_name,
    function_name: ($) =>
      seq($._simple_name, repeat(seq("::", $._simple_name))),
    variable: ($) => seq("$", $.identifier),

    string: ($) => /"[^"]*"/,
    integer: ($) => /[0-9]+/,
    float: ($) => /[0-9]+\.[0-9]+/,
    boolean: ($) => choice("true", "false"),

    array: ($) => seq("[", repeat(seq($._value, ",")), optional($._value), "]"),
    object_entry: ($) => seq($.identifier, ":", $._value),
    object: ($) =>
      seq("{", repeat(seq($.object_entry, ",")), optional($.object_entry), "}"),

    varargs: ($) => seq($._value, repeat(seq(",", $._value))),

    function_call: ($) => seq($.function_name, "(", optional($.varargs), ")"),

    _value: ($) =>
      choice(
        $.string,
        $.integer,
        $.float,
        $.boolean,
        $.array,
        $.object,
        $.identifier,
        $.function_call,
        $._operation,
        $.property_access,
        $.variable,
      ),

    _operation: ($) =>
      choice(
        $.addition_operation,
        $.subtraction_operation,
        $.multiplication_operation,
        $.division_operation,
        $.equality_operation,
        $.inequality_operation,
        $.greater_than_operation,
        $.less_than_operation,
        $.greater_than_or_equal_to_operation,
        $.less_than_or_equal_to_operation,
        $.and_operation,
        $.or_operation,
      ),

    property_access: ($) => prec.left(0, seq($._value, ".", $.identifier)),
    division_operation: ($) => prec.left(-1, seq($._value, "/", $._value)),
    multiplication_operation: ($) =>
      prec.left(-1, seq($._value, "*", $._value)),
    addition_operation: ($) => prec.left(-2, seq($._value, "+", $._value)),
    subtraction_operation: ($) => prec.left(-2, seq($._value, "-", $._value)),
    less_than_operation: ($) => prec.left(-3, seq($._value, "<", $._value)),
    less_than_or_equal_to_operation: ($) =>
      prec.left(-3, seq($._value, "<=", $._value)),
    greater_than_operation: ($) => prec.left(-3, seq($._value, ">", $._value)),
    greater_than_or_equal_to_operation: ($) =>
      prec.left(-3, seq($._value, ">=", $._value)),
    inequality_operation: ($) => prec.left(-4, seq($._value, "!=", $._value)),
    equality_operation: ($) => prec.left(-4, seq($._value, "=", $._value)),
    or_operation: ($) => prec.left(-6, seq($._value, $.or_token, $._value)),
    and_operation: ($) => prec.left(-7, seq($._value, $.and_token, $._value)),

    create_token: ($) => "create",
    update_token: ($) => "update",
    delete_token: ($) => "delete",
    select_token: ($) => "select",
    from_token: ($) => "from",
    where_token: ($) => "where",
    content_token: ($) => "content",
    define_token: ($) => "define",
    table_token: ($) => "table",
    field_token: ($) => "field",
    on_token: ($) => "on",
    type_token: ($) => "type",
    function_token: ($) => "function",
    and_token: ($) => "and",
    or_token: ($) => "or",

    delete_part: ($) => seq($.delete_token, optional($.identifier)),
    create_part: ($) => seq($.create_token, optional($.identifier)),
    content_part: ($) => seq($.content_token, optional($._value)),
    select_part: ($) => seq($.select_token, optional($.varargs)),
    from_part: ($) => seq($.from_token, optional($.identifier)),
    where_part: ($) => seq($.where_token, optional($._value)),
    update_part: ($) => seq($.update_token, optional($.identifier)),

    definition_statement: ($) =>
      seq(
        $.define_token,
        choice(repeat($._define_part), $.function_definition_statement),
        ";",
      ),

    _define_part: ($) =>
      choice($.table_part, $.field_part, $.type_part, $.on_part),

    type_name: ($) =>
      choice(
        "string",
        "integer",
        "float",
        "boolean",
        $.array_type,
        $.optional_type,
      ),
    array_type: ($) => seq("array", "<", $.type_name, ">"),
    optional_type: ($) => seq("optional", "<", $.type_name, ">"),

    table_part: ($) => seq($.table_token, optional($.identifier)),
    field_part: ($) => seq($.field_token, optional($.identifier)),
    on_part: ($) => seq($.on_token, optional($.identifier)),
    type_part: ($) => seq($.type_token, optional($.type_name)),

    function_name_part: ($) => seq($.function_token, optional($.function_name)),

    function_param: ($) => seq($.variable, ":", $.type_name),

    function_arguments_part: ($) =>
      seq(
        "(",
        optional(seq($.function_param, repeat(seq(",", $.function_param)))),
        ")",
      ),

    function_return_type_part: ($) => seq(":", $.type_name),

    function_body_part: ($) => seq("{", repeat($._statement), "}"),

    function_definition_statement: ($) =>
      seq(
        $.function_name_part,
        optional($.function_arguments_part),
        optional($.function_return_type_part),
        optional($.function_body_part),
      ),
  },
});

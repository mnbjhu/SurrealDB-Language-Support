module.exports = grammar({
  name: "surql",

  rules: {
    source_file: ($) => repeat($._statement),

    statement: ($) => repeat1($._statement_parts),

    create: ($) => seq("create", optional($.identifier)),
    update: ($) => seq("update", optional($.identifier)),
    delete: ($) => seq("delete", optional($.identifier)),
    select: ($) => seq("select", optional($.varargs)),
    return: ($) => seq("return", optional(choice($._value, $.statement))),

    from: ($) => seq("from", optional($.identifier)),
    content: ($) => seq("content", optional($._value)),

    where: ($) => seq("where", optional($._value)),
    order_by: ($) => seq("order by", optional($.varargs)),
    limit: ($) => seq("limit", optional($._value)),
    skip: ($) => seq("skip", optional($._value)),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: ($) => /"[^"]*"/,
    integer: ($) => /[0-9]+/,
    float: ($) => /[0-9]+\.[0-9]+/,
    boolean: ($) => choice("true", "false"),

    array: ($) => seq("[", repeat(seq($._value, ",")), optional($._value), "]"),
    object_entry: ($) => seq($.identifier, ":", $._value),
    invalid_object_entry: ($) =>
      prec(-1, seq($.identifier, optional(":"), optional($._value))),

    assignment: ($) =>
      choice(
        seq("let", $.variable, "=", choice($._value, $.statement)),
        prec(-1, seq("let", $.variable, "=")),
        prec(-2, seq("let", $.variable)),
        prec(-3, "let"),
      ),

    _object_entry: ($) =>
      choice($.object_entry, prec(-1, $.invalid_object_entry)),

    object: ($) =>
      seq(
        "{",
        repeat(seq($._object_entry, ",")),
        optional($._object_entry),
        "}",
      ),

    varargs: ($) => seq($._value, repeat(seq(",", $._value))),

    function_call: ($) =>
      seq($.function_identifier, "(", optional($.varargs), ")"),

    function_identifier: ($) =>
      seq($.identifier, repeat(seq("::", $.identifier))),

    field_name: ($) => seq($.identifier, repeat(seq(".", $.identifier))),

    _value: ($) =>
      choice(
        $.string,
        $.integer,
        $.float,
        $.boolean,
        $.array,
        $.object,
        $.identifier,
        $.property_access,
        $.array_access,
        $.variable,
        $.bracketed_value,
        $._operation,
        $.function_call,
        $.code_block,
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
      ),

    bracketed_value: ($) => seq("(", $._value, ")"),

    array_access: ($) => prec.left(0, seq($._value, "[", $._value, "]")),
    property_access: ($) => prec.left(0, seq($._value, ".", $.identifier)),
    multiplication_operation: ($) =>
      prec.left(-1, seq($._value, "*", $._value)),
    division_operation: ($) => prec.left(-1, seq($._value, "/", $._value)),
    addition_operation: ($) => prec.left(-2, seq($._value, "+", $._value)),
    subtraction_operation: ($) => prec.left(-2, seq($._value, "-", $._value)),
    equality_operation: ($) => prec.left(-3, seq($._value, "=", $._value)),
    inequality_operation: ($) => prec.left(-3, seq($._value, "!=", $._value)),
    greater_than_operation: ($) => prec.left(-3, seq($._value, ">", $._value)),
    less_than_operation: ($) => prec.left(-3, seq($._value, "<", $._value)),
    greater_than_or_equal_to_operation: ($) =>
      prec.left(-3, seq($._value, ">=", $._value)),
    less_than_or_equal_to_operation: ($) =>
      prec.left(-3, seq($._value, "<=", $._value)),
    and_operation: ($) => prec.left(-4, seq($._value, "and", $._value)),
    or_operation: ($) => prec.left(-5, seq($._value, "or", $._value)),
    not_operation: ($) => prec.left(-6, seq("!", $._value)),

    variable: ($) => seq("$", $.identifier),

    _statement_parts: ($) =>
      prec(
        -1,
        choice(
          $.create,
          $.update,
          $.delete,
          $.select,
          $.from,
          $.content,
          $.where,
          $.order_by,
          $.limit,
          $.skip,
          $.define,
          $.function,
          $.define_table_statement,
          $._define_field_statement,
        ),
      ),

    _statement: ($) => seq(choice($.assignment, $.statement), ";"),

    define: ($) => "define",

    define_table_statement: ($) => seq("table", optional($.identifier)),
    define_field_statement: ($) => seq($.field, $.on, $.type),
    invalid_define_field_statement: ($) =>
      prec(-1, seq($.field, optional($.on), optional($.type))),
    _define_field_statement: ($) =>
      choice($.define_field_statement, $.invalid_define_field_statement),

    field: ($) => seq("field", optional($.field_name)),
    on: ($) => seq("on", optional($.identifier)),
    type: ($) => seq("type", optional($.type_identifier)),

    type_identifier: ($) => choice($.identifier, $.generic_type),

    type_name: ($) => $.identifier,
    generic_type: ($) => seq($.identifier, "<", $.type_identifier, ">"),

    table: ($) => seq("table", $.identifier),

    function: ($) => seq("function", optional($.function_definition)),

    function_definition: ($) =>
      seq(
        $.function_identifier,
        $.function_arguments,
        optional($.function_return_type),
        $.code_block,
      ),

    function_return_type: ($) => seq(":", $.type_identifier),
    code_block: ($) => prec(-1, seq("{", repeat($._statement), "}")),
    function_argument: ($) => seq($.variable, ":", $.type_identifier),
    function_arguments: ($) =>
      seq(
        "(",
        repeat(seq($.function_argument, ",")),
        optional($.function_argument),
        ")",
      ),
  },
});

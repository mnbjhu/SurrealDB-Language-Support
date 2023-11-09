module.exports = grammar({
  name: "surql",

  rules: {
    source_file: ($) => repeat(seq($._statement, ";")),

    _statement: ($) =>
      choice($._crud_statement, $._define_statement, $.invalid_statement),

    _crud_statement: ($) =>
      choice(
        $.create_statement,
        $.update_statement,
        $.delete_statement,
        $.select_statement,
      ),

    create_statement: ($) => seq($.create, $.content, optional($.filter)),
    update_statement: ($) => seq($.update, $.content, optional($.filter)),
    delete_statement: ($) => seq($.delete, optional($.filter)),
    select_statement: ($) => seq($.select, $.from, optional($.filter)),

    create: ($) => seq("create", optional($.identifier)),
    update: ($) => seq("update", optional($.identifier)),
    delete: ($) => seq("delete", optional($.identifier)),
    select: ($) => seq("select", optional($.varargs)),

    from: ($) => seq("from", optional($.identifier)),
    content: ($) => seq("content", optional($._value)),

    where: ($) => seq("where", optional($._value)),
    order_by: ($) => seq("order by", optional($.varargs)),
    limit: ($) => seq("limit", optional($._value)),
    skip: ($) => seq("skip", optional($._value)),

    filter: ($) => repeat1(choice($.where, $.order_by, $.limit, $.skip)),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: ($) => /"[^"]*"/,
    integer: ($) => /[0-9]+/,
    float: ($) => /[0-9]+\.[0-9]+/,
    boolean: ($) => choice("true", "false"),

    array: ($) => seq("[", repeat(seq($._value, ",")), optional($._value), "]"),
    object_entry: ($) => seq($.identifier, ":", $._value),
    invalid_object_entry: ($) =>
      prec(-1, seq($.identifier, optional(":"), optional($._value))),

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

    function_call: ($) => seq($.identifier, "(", optional($.varargs), ")"),

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
        $.function_call,
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
      ),

    addition_operation: ($) => prec.left(1, seq($._value, "+", $._value)),
    subtraction_operation: ($) => prec.left(1, seq($._value, "-", $._value)),
    multiplication_operation: ($) => prec.left(2, seq($._value, "*", $._value)),
    division_operation: ($) => prec.left(2, seq($._value, "/", $._value)),
    equality_operation: ($) => prec.left(3, seq($._value, "=", $._value)),
    inequality_operation: ($) => prec.left(3, seq($._value, "!=", $._value)),
    greater_than_operation: ($) => prec.left(3, seq($._value, ">", $._value)),
    less_than_operation: ($) => prec.left(3, seq($._value, "<", $._value)),
    greater_than_or_equal_to_operation: ($) =>
      prec.left(3, seq($._value, ">=", $._value)),
    less_than_or_equal_to_operation: ($) =>
      prec.left(3, seq($._value, "<=", $._value)),
    and_operation: ($) => prec.left(4, seq($._value, "and", $._value)),
    or_operation: ($) => prec.left(5, seq($._value, "or", $._value)),
    not_operation: ($) => prec.left(6, seq("!", $._value)),
    property_access: ($) => prec.left(7, seq($._value, ".", $.identifier)),

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
        ),
      ),

    invalid_statement: ($) => repeat1($._statement_parts),

    _define_statement: ($) =>
      seq(
        "define",
        choice($.define_table_statement, $._define_field_statement),
      ),

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
  },
});

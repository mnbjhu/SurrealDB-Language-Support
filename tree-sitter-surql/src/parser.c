#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 156
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_create = 1,
  anon_sym_update = 2,
  anon_sym_delete = 3,
  anon_sym_select = 4,
  anon_sym_return = 5,
  anon_sym_from = 6,
  anon_sym_content = 7,
  anon_sym_where = 8,
  anon_sym_orderby = 9,
  anon_sym_limit = 10,
  anon_sym_skip = 11,
  sym_identifier = 12,
  sym_string = 13,
  sym_integer = 14,
  sym_float = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  anon_sym_LBRACK = 18,
  anon_sym_COMMA = 19,
  anon_sym_RBRACK = 20,
  anon_sym_COLON = 21,
  anon_sym_let = 22,
  anon_sym_EQ = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_COLON_COLON = 28,
  anon_sym_DOT = 29,
  anon_sym_STAR = 30,
  anon_sym_SLASH = 31,
  anon_sym_PLUS = 32,
  anon_sym_DASH = 33,
  anon_sym_BANG_EQ = 34,
  anon_sym_GT = 35,
  anon_sym_LT = 36,
  anon_sym_GT_EQ = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_and = 39,
  anon_sym_or = 40,
  anon_sym_BANG = 41,
  anon_sym_DOLLAR = 42,
  anon_sym_SEMI = 43,
  sym_define = 44,
  anon_sym_table = 45,
  anon_sym_field = 46,
  anon_sym_on = 47,
  anon_sym_type = 48,
  anon_sym_function = 49,
  sym_source_file = 50,
  sym_statement = 51,
  sym_create = 52,
  sym_update = 53,
  sym_delete = 54,
  sym_select = 55,
  sym_return = 56,
  sym_from = 57,
  sym_content = 58,
  sym_where = 59,
  sym_order_by = 60,
  sym_limit = 61,
  sym_skip = 62,
  sym_boolean = 63,
  sym_array = 64,
  sym_object_entry = 65,
  sym_invalid_object_entry = 66,
  sym_assignment = 67,
  sym__object_entry = 68,
  sym_object = 69,
  sym_varargs = 70,
  sym_function_call = 71,
  sym_function_identifier = 72,
  sym_field_name = 73,
  sym__value = 74,
  sym__operation = 75,
  sym_bracketed_value = 76,
  sym_array_access = 77,
  sym_property_access = 78,
  sym_multiplication_operation = 79,
  sym_division_operation = 80,
  sym_addition_operation = 81,
  sym_subtraction_operation = 82,
  sym_equality_operation = 83,
  sym_inequality_operation = 84,
  sym_greater_than_operation = 85,
  sym_less_than_operation = 86,
  sym_greater_than_or_equal_to_operation = 87,
  sym_less_than_or_equal_to_operation = 88,
  sym_and_operation = 89,
  sym_variable = 90,
  sym__statement_parts = 91,
  sym__statement = 92,
  sym_table = 93,
  sym_field = 94,
  sym_on = 95,
  sym_type = 96,
  sym_type_identifier = 97,
  sym_generic_type = 98,
  sym_function = 99,
  sym_function_definition = 100,
  sym_function_return_type = 101,
  sym_code_block = 102,
  sym_function_argument = 103,
  sym_function_arguments = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_statement_repeat1 = 106,
  aux_sym_array_repeat1 = 107,
  aux_sym_object_repeat1 = 108,
  aux_sym_varargs_repeat1 = 109,
  aux_sym_function_identifier_repeat1 = 110,
  aux_sym_field_name_repeat1 = 111,
  aux_sym_function_arguments_repeat1 = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_create] = "create",
  [anon_sym_update] = "update",
  [anon_sym_delete] = "delete",
  [anon_sym_select] = "select",
  [anon_sym_return] = "return",
  [anon_sym_from] = "from",
  [anon_sym_content] = "content",
  [anon_sym_where] = "where",
  [anon_sym_orderby] = "order by",
  [anon_sym_limit] = "limit",
  [anon_sym_skip] = "skip",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_BANG] = "!",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SEMI] = ";",
  [sym_define] = "define",
  [anon_sym_table] = "table",
  [anon_sym_field] = "field",
  [anon_sym_on] = "on",
  [anon_sym_type] = "type",
  [anon_sym_function] = "function",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_create] = "create",
  [sym_update] = "update",
  [sym_delete] = "delete",
  [sym_select] = "select",
  [sym_return] = "return",
  [sym_from] = "from",
  [sym_content] = "content",
  [sym_where] = "where",
  [sym_order_by] = "order_by",
  [sym_limit] = "limit",
  [sym_skip] = "skip",
  [sym_boolean] = "boolean",
  [sym_array] = "array",
  [sym_object_entry] = "object_entry",
  [sym_invalid_object_entry] = "invalid_object_entry",
  [sym_assignment] = "assignment",
  [sym__object_entry] = "_object_entry",
  [sym_object] = "object",
  [sym_varargs] = "varargs",
  [sym_function_call] = "function_call",
  [sym_function_identifier] = "function_identifier",
  [sym_field_name] = "field_name",
  [sym__value] = "_value",
  [sym__operation] = "_operation",
  [sym_bracketed_value] = "bracketed_value",
  [sym_array_access] = "array_access",
  [sym_property_access] = "property_access",
  [sym_multiplication_operation] = "multiplication_operation",
  [sym_division_operation] = "division_operation",
  [sym_addition_operation] = "addition_operation",
  [sym_subtraction_operation] = "subtraction_operation",
  [sym_equality_operation] = "equality_operation",
  [sym_inequality_operation] = "inequality_operation",
  [sym_greater_than_operation] = "greater_than_operation",
  [sym_less_than_operation] = "less_than_operation",
  [sym_greater_than_or_equal_to_operation] = "greater_than_or_equal_to_operation",
  [sym_less_than_or_equal_to_operation] = "less_than_or_equal_to_operation",
  [sym_and_operation] = "and_operation",
  [sym_variable] = "variable",
  [sym__statement_parts] = "_statement_parts",
  [sym__statement] = "_statement",
  [sym_table] = "table",
  [sym_field] = "field",
  [sym_on] = "on",
  [sym_type] = "type",
  [sym_type_identifier] = "type_identifier",
  [sym_generic_type] = "generic_type",
  [sym_function] = "function",
  [sym_function_definition] = "function_definition",
  [sym_function_return_type] = "function_return_type",
  [sym_code_block] = "code_block",
  [sym_function_argument] = "function_argument",
  [sym_function_arguments] = "function_arguments",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_varargs_repeat1] = "varargs_repeat1",
  [aux_sym_function_identifier_repeat1] = "function_identifier_repeat1",
  [aux_sym_field_name_repeat1] = "field_name_repeat1",
  [aux_sym_function_arguments_repeat1] = "function_arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_content] = anon_sym_content,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_orderby] = anon_sym_orderby,
  [anon_sym_limit] = anon_sym_limit,
  [anon_sym_skip] = anon_sym_skip,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_define] = sym_define,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_function] = anon_sym_function,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_create] = sym_create,
  [sym_update] = sym_update,
  [sym_delete] = sym_delete,
  [sym_select] = sym_select,
  [sym_return] = sym_return,
  [sym_from] = sym_from,
  [sym_content] = sym_content,
  [sym_where] = sym_where,
  [sym_order_by] = sym_order_by,
  [sym_limit] = sym_limit,
  [sym_skip] = sym_skip,
  [sym_boolean] = sym_boolean,
  [sym_array] = sym_array,
  [sym_object_entry] = sym_object_entry,
  [sym_invalid_object_entry] = sym_invalid_object_entry,
  [sym_assignment] = sym_assignment,
  [sym__object_entry] = sym__object_entry,
  [sym_object] = sym_object,
  [sym_varargs] = sym_varargs,
  [sym_function_call] = sym_function_call,
  [sym_function_identifier] = sym_function_identifier,
  [sym_field_name] = sym_field_name,
  [sym__value] = sym__value,
  [sym__operation] = sym__operation,
  [sym_bracketed_value] = sym_bracketed_value,
  [sym_array_access] = sym_array_access,
  [sym_property_access] = sym_property_access,
  [sym_multiplication_operation] = sym_multiplication_operation,
  [sym_division_operation] = sym_division_operation,
  [sym_addition_operation] = sym_addition_operation,
  [sym_subtraction_operation] = sym_subtraction_operation,
  [sym_equality_operation] = sym_equality_operation,
  [sym_inequality_operation] = sym_inequality_operation,
  [sym_greater_than_operation] = sym_greater_than_operation,
  [sym_less_than_operation] = sym_less_than_operation,
  [sym_greater_than_or_equal_to_operation] = sym_greater_than_or_equal_to_operation,
  [sym_less_than_or_equal_to_operation] = sym_less_than_or_equal_to_operation,
  [sym_and_operation] = sym_and_operation,
  [sym_variable] = sym_variable,
  [sym__statement_parts] = sym__statement_parts,
  [sym__statement] = sym__statement,
  [sym_table] = sym_table,
  [sym_field] = sym_field,
  [sym_on] = sym_on,
  [sym_type] = sym_type,
  [sym_type_identifier] = sym_type_identifier,
  [sym_generic_type] = sym_generic_type,
  [sym_function] = sym_function,
  [sym_function_definition] = sym_function_definition,
  [sym_function_return_type] = sym_function_return_type,
  [sym_code_block] = sym_code_block,
  [sym_function_argument] = sym_function_argument,
  [sym_function_arguments] = sym_function_arguments,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_varargs_repeat1] = aux_sym_varargs_repeat1,
  [aux_sym_function_identifier_repeat1] = aux_sym_function_identifier_repeat1,
  [aux_sym_field_name_repeat1] = aux_sym_field_name_repeat1,
  [aux_sym_function_arguments_repeat1] = aux_sym_function_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_content] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orderby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skip] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_create] = {
    .visible = true,
    .named = true,
  },
  [sym_update] = {
    .visible = true,
    .named = true,
  },
  [sym_delete] = {
    .visible = true,
    .named = true,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by] = {
    .visible = true,
    .named = true,
  },
  [sym_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_skip] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_object_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_object_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__object_entry] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_varargs] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__operation] = {
    .visible = false,
    .named = true,
  },
  [sym_bracketed_value] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access] = {
    .visible = true,
    .named = true,
  },
  [sym_property_access] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplication_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_division_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_addition_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_subtraction_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_inequality_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_than_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_less_than_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_greater_than_or_equal_to_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_less_than_or_equal_to_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_and_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_parts] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_on] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_function_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_varargs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_arguments_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == '!') ADVANCE(221);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead == '+') ADVANCE(212);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == ';') ADVANCE(223);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '[') ADVANCE(196);
      if (lookahead == ']') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead == '[') ADVANCE(196);
      if (lookahead == ']') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ';') ADVANCE(223);
      if (lookahead == '[') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(145);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(189);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(223);
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(214);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(145);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 86:
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == '*') ADVANCE(210);
      if (lookahead == '+') ADVANCE(212);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == ';') ADVANCE(223);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(203);
      if (lookahead == '>') ADVANCE(215);
      if (lookahead == '[') ADVANCE(196);
      if (lookahead == ']') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'w') ADVANCE(42);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_create);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_update);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_content);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_orderby);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_skip);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 'y') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'y') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'k') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(214);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_define);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_define);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_table);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 88},
  [12] = {.lex_state = 88},
  [13] = {.lex_state = 88},
  [14] = {.lex_state = 88},
  [15] = {.lex_state = 88},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 88},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 88},
  [24] = {.lex_state = 88},
  [25] = {.lex_state = 88},
  [26] = {.lex_state = 88},
  [27] = {.lex_state = 88},
  [28] = {.lex_state = 88},
  [29] = {.lex_state = 88},
  [30] = {.lex_state = 88},
  [31] = {.lex_state = 88},
  [32] = {.lex_state = 88},
  [33] = {.lex_state = 88},
  [34] = {.lex_state = 88},
  [35] = {.lex_state = 88},
  [36] = {.lex_state = 88},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 88},
  [41] = {.lex_state = 88},
  [42] = {.lex_state = 88},
  [43] = {.lex_state = 88},
  [44] = {.lex_state = 88},
  [45] = {.lex_state = 88},
  [46] = {.lex_state = 88},
  [47] = {.lex_state = 88},
  [48] = {.lex_state = 88},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 88},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 88},
  [65] = {.lex_state = 88},
  [66] = {.lex_state = 88},
  [67] = {.lex_state = 88},
  [68] = {.lex_state = 88},
  [69] = {.lex_state = 88},
  [70] = {.lex_state = 88},
  [71] = {.lex_state = 88},
  [72] = {.lex_state = 88},
  [73] = {.lex_state = 88},
  [74] = {.lex_state = 88},
  [75] = {.lex_state = 88},
  [76] = {.lex_state = 88},
  [77] = {.lex_state = 88},
  [78] = {.lex_state = 88},
  [79] = {.lex_state = 88},
  [80] = {.lex_state = 88},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 88},
  [84] = {.lex_state = 88},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 88},
  [87] = {.lex_state = 88},
  [88] = {.lex_state = 88},
  [89] = {.lex_state = 88},
  [90] = {.lex_state = 88},
  [91] = {.lex_state = 88},
  [92] = {.lex_state = 88},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 88},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 88},
  [100] = {.lex_state = 88},
  [101] = {.lex_state = 88},
  [102] = {.lex_state = 88},
  [103] = {.lex_state = 88},
  [104] = {.lex_state = 88},
  [105] = {.lex_state = 88},
  [106] = {.lex_state = 88},
  [107] = {.lex_state = 88},
  [108] = {.lex_state = 88},
  [109] = {.lex_state = 88},
  [110] = {.lex_state = 88},
  [111] = {.lex_state = 88},
  [112] = {.lex_state = 88},
  [113] = {.lex_state = 88},
  [114] = {.lex_state = 88},
  [115] = {.lex_state = 88},
  [116] = {.lex_state = 88},
  [117] = {.lex_state = 88},
  [118] = {.lex_state = 88},
  [119] = {.lex_state = 88},
  [120] = {.lex_state = 88},
  [121] = {.lex_state = 88},
  [122] = {.lex_state = 88},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 86},
  [125] = {.lex_state = 86},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 86},
  [130] = {.lex_state = 86},
  [131] = {.lex_state = 86},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 86},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 86},
  [142] = {.lex_state = 86},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 86},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 86},
  [154] = {.lex_state = 86},
  [155] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_content] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_limit] = ACTIONS(1),
    [anon_sym_skip] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_define] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(151),
    [sym_statement] = STATE(149),
    [sym_create] = STATE(42),
    [sym_update] = STATE(42),
    [sym_delete] = STATE(42),
    [sym_select] = STATE(42),
    [sym_return] = STATE(149),
    [sym_from] = STATE(42),
    [sym_content] = STATE(42),
    [sym_where] = STATE(42),
    [sym_order_by] = STATE(42),
    [sym_limit] = STATE(42),
    [sym_skip] = STATE(42),
    [sym_assignment] = STATE(149),
    [sym__statement_parts] = STATE(42),
    [sym__statement] = STATE(12),
    [sym_table] = STATE(42),
    [sym_field] = STATE(42),
    [sym_on] = STATE(42),
    [sym_type] = STATE(42),
    [sym_function] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym_statement_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_create] = ACTIONS(5),
    [anon_sym_update] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(9),
    [anon_sym_select] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_content] = ACTIONS(17),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_orderby] = ACTIONS(21),
    [anon_sym_limit] = ACTIONS(23),
    [anon_sym_skip] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(27),
    [sym_define] = ACTIONS(29),
    [anon_sym_table] = ACTIONS(31),
    [anon_sym_field] = ACTIONS(33),
    [anon_sym_on] = ACTIONS(35),
    [anon_sym_type] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
  },
  [2] = {
    [sym_statement] = STATE(146),
    [sym_create] = STATE(42),
    [sym_update] = STATE(42),
    [sym_delete] = STATE(42),
    [sym_select] = STATE(42),
    [sym_from] = STATE(42),
    [sym_content] = STATE(42),
    [sym_where] = STATE(42),
    [sym_order_by] = STATE(42),
    [sym_limit] = STATE(42),
    [sym_skip] = STATE(42),
    [sym_boolean] = STATE(120),
    [sym_array] = STATE(120),
    [sym_object] = STATE(120),
    [sym_function_call] = STATE(120),
    [sym_function_identifier] = STATE(145),
    [sym__value] = STATE(120),
    [sym__operation] = STATE(120),
    [sym_bracketed_value] = STATE(120),
    [sym_array_access] = STATE(120),
    [sym_property_access] = STATE(120),
    [sym_multiplication_operation] = STATE(120),
    [sym_division_operation] = STATE(120),
    [sym_addition_operation] = STATE(120),
    [sym_subtraction_operation] = STATE(120),
    [sym_equality_operation] = STATE(120),
    [sym_inequality_operation] = STATE(120),
    [sym_greater_than_operation] = STATE(120),
    [sym_less_than_operation] = STATE(120),
    [sym_greater_than_or_equal_to_operation] = STATE(120),
    [sym_less_than_or_equal_to_operation] = STATE(120),
    [sym_and_operation] = STATE(120),
    [sym_variable] = STATE(120),
    [sym__statement_parts] = STATE(42),
    [sym_table] = STATE(42),
    [sym_field] = STATE(42),
    [sym_on] = STATE(42),
    [sym_type] = STATE(42),
    [sym_function] = STATE(42),
    [sym_code_block] = STATE(120),
    [aux_sym_statement_repeat1] = STATE(42),
    [anon_sym_create] = ACTIONS(41),
    [anon_sym_update] = ACTIONS(43),
    [anon_sym_delete] = ACTIONS(45),
    [anon_sym_select] = ACTIONS(47),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_content] = ACTIONS(51),
    [anon_sym_where] = ACTIONS(53),
    [anon_sym_orderby] = ACTIONS(21),
    [anon_sym_limit] = ACTIONS(55),
    [anon_sym_skip] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_string] = ACTIONS(61),
    [sym_integer] = ACTIONS(63),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_define] = ACTIONS(77),
    [anon_sym_table] = ACTIONS(79),
    [anon_sym_field] = ACTIONS(81),
    [anon_sym_on] = ACTIONS(83),
    [anon_sym_type] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
  },
  [3] = {
    [sym_statement] = STATE(147),
    [sym_create] = STATE(42),
    [sym_update] = STATE(42),
    [sym_delete] = STATE(42),
    [sym_select] = STATE(42),
    [sym_from] = STATE(42),
    [sym_content] = STATE(42),
    [sym_where] = STATE(42),
    [sym_order_by] = STATE(42),
    [sym_limit] = STATE(42),
    [sym_skip] = STATE(42),
    [sym_boolean] = STATE(121),
    [sym_array] = STATE(121),
    [sym_object] = STATE(121),
    [sym_function_call] = STATE(121),
    [sym_function_identifier] = STATE(145),
    [sym__value] = STATE(121),
    [sym__operation] = STATE(121),
    [sym_bracketed_value] = STATE(121),
    [sym_array_access] = STATE(121),
    [sym_property_access] = STATE(121),
    [sym_multiplication_operation] = STATE(121),
    [sym_division_operation] = STATE(121),
    [sym_addition_operation] = STATE(121),
    [sym_subtraction_operation] = STATE(121),
    [sym_equality_operation] = STATE(121),
    [sym_inequality_operation] = STATE(121),
    [sym_greater_than_operation] = STATE(121),
    [sym_less_than_operation] = STATE(121),
    [sym_greater_than_or_equal_to_operation] = STATE(121),
    [sym_less_than_or_equal_to_operation] = STATE(121),
    [sym_and_operation] = STATE(121),
    [sym_variable] = STATE(121),
    [sym__statement_parts] = STATE(42),
    [sym_table] = STATE(42),
    [sym_field] = STATE(42),
    [sym_on] = STATE(42),
    [sym_type] = STATE(42),
    [sym_function] = STATE(42),
    [sym_code_block] = STATE(121),
    [aux_sym_statement_repeat1] = STATE(42),
    [anon_sym_create] = ACTIONS(41),
    [anon_sym_update] = ACTIONS(43),
    [anon_sym_delete] = ACTIONS(45),
    [anon_sym_select] = ACTIONS(47),
    [anon_sym_from] = ACTIONS(49),
    [anon_sym_content] = ACTIONS(51),
    [anon_sym_where] = ACTIONS(53),
    [anon_sym_orderby] = ACTIONS(21),
    [anon_sym_limit] = ACTIONS(55),
    [anon_sym_skip] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_string] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(93),
    [sym_define] = ACTIONS(77),
    [anon_sym_table] = ACTIONS(79),
    [anon_sym_field] = ACTIONS(81),
    [anon_sym_on] = ACTIONS(83),
    [anon_sym_type] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(101), 1,
      sym_integer,
    STATE(109), 1,
      sym_varargs,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(97), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(99), 2,
      sym_string,
      sym_float,
    ACTIONS(95), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
    STATE(51), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [78] = 13,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(101), 1,
      sym_integer,
    STATE(100), 1,
      sym_varargs,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 2,
      sym_string,
      sym_float,
    ACTIONS(105), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(103), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
    STATE(51), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [156] = 12,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(111), 2,
      sym_string,
      sym_float,
    ACTIONS(107), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
    STATE(67), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [231] = 12,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(121), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(119), 2,
      sym_string,
      sym_float,
    ACTIONS(115), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
    STATE(66), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [306] = 12,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(127), 2,
      sym_string,
      sym_float,
    ACTIONS(123), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
    STATE(68), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [381] = 12,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(133), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(135), 2,
      sym_string,
      sym_float,
    ACTIONS(131), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
    STATE(65), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [456] = 25,
    ACTIONS(21), 1,
      anon_sym_orderby,
    ACTIONS(41), 1,
      anon_sym_create,
    ACTIONS(43), 1,
      anon_sym_update,
    ACTIONS(45), 1,
      anon_sym_delete,
    ACTIONS(47), 1,
      anon_sym_select,
    ACTIONS(49), 1,
      anon_sym_from,
    ACTIONS(51), 1,
      anon_sym_content,
    ACTIONS(53), 1,
      anon_sym_where,
    ACTIONS(55), 1,
      anon_sym_limit,
    ACTIONS(57), 1,
      anon_sym_skip,
    ACTIONS(77), 1,
      sym_define,
    ACTIONS(79), 1,
      anon_sym_table,
    ACTIONS(81), 1,
      anon_sym_field,
    ACTIONS(83), 1,
      anon_sym_on,
    ACTIONS(85), 1,
      anon_sym_type,
    ACTIONS(87), 1,
      anon_sym_function,
    ACTIONS(139), 1,
      anon_sym_return,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_let,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      aux_sym_object_repeat1,
    STATE(14), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(135), 3,
      sym_object_entry,
      sym_invalid_object_entry,
      sym__object_entry,
    STATE(149), 3,
      sym_statement,
      sym_return,
      sym_assignment,
    STATE(42), 17,
      sym_create,
      sym_update,
      sym_delete,
      sym_select,
      sym_from,
      sym_content,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      sym__statement_parts,
      sym_table,
      sym_field,
      sym_on,
      sym_type,
      sym_function,
      aux_sym_statement_repeat1,
  [553] = 22,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(152), 1,
      anon_sym_update,
    ACTIONS(155), 1,
      anon_sym_delete,
    ACTIONS(158), 1,
      anon_sym_select,
    ACTIONS(161), 1,
      anon_sym_return,
    ACTIONS(164), 1,
      anon_sym_from,
    ACTIONS(167), 1,
      anon_sym_content,
    ACTIONS(170), 1,
      anon_sym_where,
    ACTIONS(173), 1,
      anon_sym_orderby,
    ACTIONS(176), 1,
      anon_sym_limit,
    ACTIONS(179), 1,
      anon_sym_skip,
    ACTIONS(182), 1,
      anon_sym_let,
    ACTIONS(185), 1,
      sym_define,
    ACTIONS(188), 1,
      anon_sym_table,
    ACTIONS(191), 1,
      anon_sym_field,
    ACTIONS(194), 1,
      anon_sym_on,
    ACTIONS(197), 1,
      anon_sym_type,
    ACTIONS(200), 1,
      anon_sym_function,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 3,
      sym_statement,
      sym_return,
      sym_assignment,
    STATE(42), 17,
      sym_create,
      sym_update,
      sym_delete,
      sym_select,
      sym_from,
      sym_content,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      sym__statement_parts,
      sym_table,
      sym_field,
      sym_on,
      sym_type,
      sym_function,
      aux_sym_statement_repeat1,
  [640] = 22,
    ACTIONS(5), 1,
      anon_sym_create,
    ACTIONS(7), 1,
      anon_sym_update,
    ACTIONS(9), 1,
      anon_sym_delete,
    ACTIONS(11), 1,
      anon_sym_select,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_from,
    ACTIONS(17), 1,
      anon_sym_content,
    ACTIONS(19), 1,
      anon_sym_where,
    ACTIONS(21), 1,
      anon_sym_orderby,
    ACTIONS(23), 1,
      anon_sym_limit,
    ACTIONS(25), 1,
      anon_sym_skip,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      sym_define,
    ACTIONS(31), 1,
      anon_sym_table,
    ACTIONS(33), 1,
      anon_sym_field,
    ACTIONS(35), 1,
      anon_sym_on,
    ACTIONS(37), 1,
      anon_sym_type,
    ACTIONS(39), 1,
      anon_sym_function,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 3,
      sym_statement,
      sym_return,
      sym_assignment,
    STATE(42), 17,
      sym_create,
      sym_update,
      sym_delete,
      sym_select,
      sym_from,
      sym_content,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      sym__statement_parts,
      sym_table,
      sym_field,
      sym_on,
      sym_type,
      sym_function,
      aux_sym_statement_repeat1,
  [726] = 22,
    ACTIONS(5), 1,
      anon_sym_create,
    ACTIONS(7), 1,
      anon_sym_update,
    ACTIONS(9), 1,
      anon_sym_delete,
    ACTIONS(11), 1,
      anon_sym_select,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_from,
    ACTIONS(17), 1,
      anon_sym_content,
    ACTIONS(19), 1,
      anon_sym_where,
    ACTIONS(21), 1,
      anon_sym_orderby,
    ACTIONS(23), 1,
      anon_sym_limit,
    ACTIONS(25), 1,
      anon_sym_skip,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      sym_define,
    ACTIONS(31), 1,
      anon_sym_table,
    ACTIONS(33), 1,
      anon_sym_field,
    ACTIONS(35), 1,
      anon_sym_on,
    ACTIONS(37), 1,
      anon_sym_type,
    ACTIONS(39), 1,
      anon_sym_function,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 3,
      sym_statement,
      sym_return,
      sym_assignment,
    STATE(42), 17,
      sym_create,
      sym_update,
      sym_delete,
      sym_select,
      sym_from,
      sym_content,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      sym__statement_parts,
      sym_table,
      sym_field,
      sym_on,
      sym_type,
      sym_function,
      aux_sym_statement_repeat1,
  [812] = 22,
    ACTIONS(5), 1,
      anon_sym_create,
    ACTIONS(7), 1,
      anon_sym_update,
    ACTIONS(9), 1,
      anon_sym_delete,
    ACTIONS(11), 1,
      anon_sym_select,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      anon_sym_from,
    ACTIONS(17), 1,
      anon_sym_content,
    ACTIONS(19), 1,
      anon_sym_where,
    ACTIONS(21), 1,
      anon_sym_orderby,
    ACTIONS(23), 1,
      anon_sym_limit,
    ACTIONS(25), 1,
      anon_sym_skip,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      sym_define,
    ACTIONS(31), 1,
      anon_sym_table,
    ACTIONS(33), 1,
      anon_sym_field,
    ACTIONS(35), 1,
      anon_sym_on,
    ACTIONS(37), 1,
      anon_sym_type,
    ACTIONS(39), 1,
      anon_sym_function,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 3,
      sym_statement,
      sym_return,
      sym_assignment,
    STATE(42), 17,
      sym_create,
      sym_update,
      sym_delete,
      sym_select,
      sym_from,
      sym_content,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      sym__statement_parts,
      sym_table,
      sym_field,
      sym_on,
      sym_type,
      sym_function,
      aux_sym_statement_repeat1,
  [898] = 5,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_COLON_COLON,
    STATE(72), 1,
      aux_sym_function_identifier_repeat1,
    ACTIONS(215), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(209), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [946] = 12,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(219), 1,
      sym_integer,
    ACTIONS(223), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 2,
      sym_string,
      sym_float,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(115), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [1007] = 12,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_integer,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_DOLLAR,
    STATE(17), 1,
      aux_sym_array_repeat1,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(228), 2,
      sym_string,
      sym_float,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(119), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [1067] = 12,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(253), 1,
      sym_integer,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_array_repeat1,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(251), 2,
      sym_string,
      sym_float,
    STATE(117), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [1127] = 12,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(101), 1,
      sym_integer,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_varargs,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 2,
      sym_string,
      sym_float,
    STATE(51), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [1187] = 12,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(261), 1,
      sym_integer,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_array_repeat1,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(259), 2,
      sym_string,
      sym_float,
    STATE(116), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [1247] = 2,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 33,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1287] = 11,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(271), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(269), 2,
      sym_string,
      sym_float,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(114), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [1345] = 2,
    ACTIONS(277), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1384] = 8,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(279), 26,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1435] = 4,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(297), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(295), 30,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1478] = 2,
    ACTIONS(301), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(299), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1517] = 2,
    ACTIONS(305), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1556] = 2,
    ACTIONS(309), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(307), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1595] = 8,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(311), 26,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1646] = 8,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(317), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(315), 26,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1697] = 2,
    ACTIONS(321), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1736] = 8,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(325), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(323), 26,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1787] = 2,
    ACTIONS(329), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1826] = 2,
    ACTIONS(333), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(331), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1865] = 8,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 26,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1916] = 4,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(341), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(339), 30,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1959] = 2,
    ACTIONS(345), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(343), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [1998] = 8,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(349), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(347), 26,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [2049] = 13,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(351), 22,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [2110] = 2,
    ACTIONS(367), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [2149] = 2,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(369), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [2188] = 18,
    ACTIONS(5), 1,
      anon_sym_create,
    ACTIONS(7), 1,
      anon_sym_update,
    ACTIONS(9), 1,
      anon_sym_delete,
    ACTIONS(11), 1,
      anon_sym_select,
    ACTIONS(15), 1,
      anon_sym_from,
    ACTIONS(17), 1,
      anon_sym_content,
    ACTIONS(19), 1,
      anon_sym_where,
    ACTIONS(21), 1,
      anon_sym_orderby,
    ACTIONS(23), 1,
      anon_sym_limit,
    ACTIONS(25), 1,
      anon_sym_skip,
    ACTIONS(31), 1,
      anon_sym_table,
    ACTIONS(33), 1,
      anon_sym_field,
    ACTIONS(35), 1,
      anon_sym_on,
    ACTIONS(37), 1,
      anon_sym_type,
    ACTIONS(39), 1,
      anon_sym_function,
    ACTIONS(373), 1,
      anon_sym_SEMI,
    ACTIONS(375), 1,
      sym_define,
    STATE(47), 17,
      sym_create,
      sym_update,
      sym_delete,
      sym_select,
      sym_from,
      sym_content,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      sym__statement_parts,
      sym_table,
      sym_field,
      sym_on,
      sym_type,
      sym_function,
      aux_sym_statement_repeat1,
  [2259] = 6,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(379), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(377), 28,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [2306] = 2,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(381), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [2345] = 2,
    ACTIONS(387), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [2384] = 2,
    ACTIONS(391), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(389), 32,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [2423] = 18,
    ACTIONS(393), 1,
      anon_sym_create,
    ACTIONS(396), 1,
      anon_sym_update,
    ACTIONS(399), 1,
      anon_sym_delete,
    ACTIONS(402), 1,
      anon_sym_select,
    ACTIONS(405), 1,
      anon_sym_from,
    ACTIONS(408), 1,
      anon_sym_content,
    ACTIONS(411), 1,
      anon_sym_where,
    ACTIONS(414), 1,
      anon_sym_orderby,
    ACTIONS(417), 1,
      anon_sym_limit,
    ACTIONS(420), 1,
      anon_sym_skip,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(425), 1,
      sym_define,
    ACTIONS(428), 1,
      anon_sym_table,
    ACTIONS(431), 1,
      anon_sym_field,
    ACTIONS(434), 1,
      anon_sym_on,
    ACTIONS(437), 1,
      anon_sym_type,
    ACTIONS(440), 1,
      anon_sym_function,
    STATE(47), 17,
      sym_create,
      sym_update,
      sym_delete,
      sym_select,
      sym_from,
      sym_content,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      sym__statement_parts,
      sym_table,
      sym_field,
      sym_on,
      sym_type,
      sym_function,
      aux_sym_statement_repeat1,
  [2494] = 6,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(445), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(443), 28,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_and,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [2541] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(449), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(447), 2,
      sym_string,
      sym_float,
    STATE(35), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [2595] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(453), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(451), 2,
      sym_string,
      sym_float,
    STATE(29), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [2649] = 16,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_and,
    STATE(79), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(455), 18,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [2715] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(463), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(461), 2,
      sym_string,
      sym_float,
    STATE(39), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [2769] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(467), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(465), 2,
      sym_string,
      sym_float,
    STATE(38), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [2823] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(471), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(469), 2,
      sym_string,
      sym_float,
    STATE(24), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [2877] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(475), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(473), 2,
      sym_string,
      sym_float,
    STATE(32), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [2931] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(479), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(477), 2,
      sym_string,
      sym_float,
    STATE(48), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [2985] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(483), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(481), 2,
      sym_string,
      sym_float,
    STATE(43), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [3039] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(487), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(485), 2,
      sym_string,
      sym_float,
    STATE(36), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [3093] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(491), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(489), 2,
      sym_string,
      sym_float,
    STATE(25), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [3147] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(495), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(493), 2,
      sym_string,
      sym_float,
    STATE(122), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [3201] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(499), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(497), 2,
      sym_string,
      sym_float,
    STATE(30), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [3255] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(503), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(501), 2,
      sym_string,
      sym_float,
    STATE(64), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [3309] = 10,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(507), 1,
      sym_integer,
    STATE(145), 1,
      sym_function_identifier,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(505), 2,
      sym_string,
      sym_float,
    STATE(118), 22,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym__operation,
      sym_bracketed_value,
      sym_array_access,
      sym_property_access,
      sym_multiplication_operation,
      sym_division_operation,
      sym_addition_operation,
      sym_subtraction_operation,
      sym_equality_operation,
      sym_inequality_operation,
      sym_greater_than_operation,
      sym_less_than_operation,
      sym_greater_than_or_equal_to_operation,
      sym_less_than_or_equal_to_operation,
      sym_and_operation,
      sym_variable,
      sym_code_block,
  [3363] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(509), 19,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3424] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(511), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3483] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(513), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3542] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(515), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3601] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(517), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3660] = 7,
    ACTIONS(521), 1,
      anon_sym_COLON,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_function_arguments,
    STATE(86), 1,
      sym_function_return_type,
    STATE(112), 1,
      sym_code_block,
    ACTIONS(519), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3698] = 2,
    ACTIONS(529), 1,
      anon_sym_LT,
    ACTIONS(527), 21,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3725] = 4,
    ACTIONS(533), 1,
      anon_sym_COLON,
    ACTIONS(535), 1,
      anon_sym_COLON_COLON,
    STATE(71), 1,
      aux_sym_function_identifier_repeat1,
    ACTIONS(531), 19,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3756] = 4,
    ACTIONS(213), 1,
      anon_sym_COLON_COLON,
    ACTIONS(540), 1,
      anon_sym_COLON,
    STATE(71), 1,
      aux_sym_function_identifier_repeat1,
    ACTIONS(538), 19,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3787] = 4,
    ACTIONS(213), 1,
      anon_sym_COLON_COLON,
    ACTIONS(542), 1,
      anon_sym_COLON,
    STATE(72), 1,
      aux_sym_function_identifier_repeat1,
    ACTIONS(211), 19,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3818] = 2,
    ACTIONS(533), 1,
      anon_sym_COLON,
    ACTIONS(531), 20,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3844] = 1,
    ACTIONS(544), 21,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3868] = 1,
    ACTIONS(527), 21,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3892] = 5,
    ACTIONS(521), 1,
      anon_sym_COLON,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_function_return_type,
    STATE(113), 1,
      sym_code_block,
    ACTIONS(546), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3924] = 3,
    ACTIONS(548), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(509), 18,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3951] = 3,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(551), 18,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [3978] = 1,
    ACTIONS(553), 20,
      ts_builtin_sym_end,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_return,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_let,
      anon_sym_RBRACE,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4001] = 5,
    ACTIONS(559), 1,
      sym_identifier,
    STATE(69), 1,
      sym_function_identifier,
    STATE(104), 1,
      sym_function_definition,
    ACTIONS(557), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(555), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4032] = 5,
    ACTIONS(565), 1,
      sym_identifier,
    STATE(76), 1,
      sym_generic_type,
    STATE(110), 1,
      sym_type_identifier,
    ACTIONS(563), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(561), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4063] = 1,
    ACTIONS(567), 19,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4085] = 3,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_code_block,
    ACTIONS(569), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4111] = 4,
    ACTIONS(575), 1,
      sym_identifier,
    STATE(102), 1,
      sym_field_name,
    ACTIONS(573), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(571), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4139] = 3,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_code_block,
    ACTIONS(546), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4165] = 3,
    ACTIONS(579), 1,
      anon_sym_DOT,
    STATE(91), 1,
      aux_sym_field_name_repeat1,
    ACTIONS(577), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4191] = 1,
    ACTIONS(581), 19,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4213] = 1,
    ACTIONS(583), 19,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4235] = 3,
    ACTIONS(587), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_field_name_repeat1,
    ACTIONS(585), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4261] = 3,
    ACTIONS(579), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_field_name_repeat1,
    ACTIONS(590), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4287] = 1,
    ACTIONS(585), 18,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4308] = 3,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(594), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(592), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4333] = 3,
    ACTIONS(602), 1,
      sym_identifier,
    ACTIONS(600), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(598), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4358] = 1,
    ACTIONS(604), 18,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4379] = 3,
    ACTIONS(610), 1,
      sym_identifier,
    ACTIONS(608), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(606), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4404] = 3,
    ACTIONS(616), 1,
      sym_identifier,
    ACTIONS(614), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(612), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4429] = 3,
    ACTIONS(622), 1,
      sym_identifier,
    ACTIONS(620), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(618), 15,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4454] = 1,
    ACTIONS(624), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4474] = 1,
    ACTIONS(626), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4494] = 1,
    ACTIONS(628), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4514] = 1,
    ACTIONS(630), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4534] = 1,
    ACTIONS(632), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4554] = 1,
    ACTIONS(634), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4574] = 1,
    ACTIONS(636), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4594] = 1,
    ACTIONS(638), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4614] = 1,
    ACTIONS(640), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4634] = 1,
    ACTIONS(642), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4654] = 1,
    ACTIONS(644), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4674] = 1,
    ACTIONS(646), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4694] = 1,
    ACTIONS(648), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4714] = 1,
    ACTIONS(546), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4734] = 1,
    ACTIONS(569), 17,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
      anon_sym_SEMI,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_on,
      anon_sym_type,
      anon_sym_function,
  [4754] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(650), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4798] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4842] = 15,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RBRACK,
  [4888] = 15,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(652), 1,
      anon_sym_COMMA,
  [4934] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(656), 1,
      anon_sym_RBRACK,
  [4977] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(652), 1,
      anon_sym_COMMA,
  [5020] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(658), 1,
      anon_sym_SEMI,
  [5063] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(660), 1,
      anon_sym_SEMI,
  [5106] = 14,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    ACTIONS(289), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      anon_sym_BANG_EQ,
    ACTIONS(357), 1,
      anon_sym_GT,
    ACTIONS(359), 1,
      anon_sym_LT,
    ACTIONS(361), 1,
      anon_sym_GT_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_EQ,
    ACTIONS(459), 1,
      anon_sym_and,
    ACTIONS(662), 1,
      anon_sym_RPAREN,
  [5149] = 2,
    ACTIONS(664), 4,
      sym_identifier,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(240), 7,
      sym_string,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
  [5165] = 4,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym_object_repeat1,
    STATE(143), 3,
      sym_object_entry,
      sym_invalid_object_entry,
      sym__object_entry,
  [5180] = 4,
    ACTIONS(671), 1,
      sym_identifier,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym_object_repeat1,
    STATE(140), 3,
      sym_object_entry,
      sym_invalid_object_entry,
      sym__object_entry,
  [5195] = 5,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_function_arguments_repeat1,
    STATE(138), 1,
      sym_function_argument,
    STATE(150), 1,
      sym_variable,
  [5211] = 5,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(679), 1,
      anon_sym_DOLLAR,
    STATE(127), 1,
      aux_sym_function_arguments_repeat1,
    STATE(150), 1,
      sym_variable,
    STATE(155), 1,
      sym_function_argument,
  [5227] = 5,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_function_arguments_repeat1,
    STATE(136), 1,
      sym_function_argument,
    STATE(150), 1,
      sym_variable,
  [5243] = 3,
    ACTIONS(684), 1,
      sym_identifier,
    STATE(76), 1,
      sym_generic_type,
    STATE(95), 1,
      sym_type_identifier,
  [5253] = 3,
    ACTIONS(684), 1,
      sym_identifier,
    STATE(76), 1,
      sym_generic_type,
    STATE(152), 1,
      sym_type_identifier,
  [5263] = 3,
    ACTIONS(684), 1,
      sym_identifier,
    STATE(76), 1,
      sym_generic_type,
    STATE(134), 1,
      sym_type_identifier,
  [5273] = 3,
    ACTIONS(73), 1,
      anon_sym_DOLLAR,
    ACTIONS(686), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym_variable,
  [5283] = 2,
    ACTIONS(688), 1,
      anon_sym_EQ,
    ACTIONS(690), 1,
      anon_sym_SEMI,
  [5290] = 1,
    ACTIONS(692), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5295] = 2,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 1,
      anon_sym_COMMA,
  [5302] = 2,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [5309] = 1,
    ACTIONS(669), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [5314] = 2,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    ACTIONS(696), 1,
      anon_sym_COMMA,
  [5321] = 1,
    ACTIONS(677), 2,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
  [5326] = 2,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
  [5333] = 1,
    ACTIONS(702), 1,
      sym_identifier,
  [5337] = 1,
    ACTIONS(704), 1,
      sym_identifier,
  [5341] = 1,
    ACTIONS(694), 1,
      anon_sym_COMMA,
  [5345] = 1,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [5349] = 1,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
  [5353] = 1,
    ACTIONS(658), 1,
      anon_sym_SEMI,
  [5357] = 1,
    ACTIONS(660), 1,
      anon_sym_SEMI,
  [5361] = 1,
    ACTIONS(710), 1,
      sym_identifier,
  [5365] = 1,
    ACTIONS(712), 1,
      anon_sym_SEMI,
  [5369] = 1,
    ACTIONS(714), 1,
      anon_sym_COLON,
  [5373] = 1,
    ACTIONS(716), 1,
      ts_builtin_sym_end,
  [5377] = 1,
    ACTIONS(718), 1,
      anon_sym_GT,
  [5381] = 1,
    ACTIONS(720), 1,
      sym_identifier,
  [5385] = 1,
    ACTIONS(722), 1,
      sym_identifier,
  [5389] = 1,
    ACTIONS(696), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 231,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 381,
  [SMALL_STATE(10)] = 456,
  [SMALL_STATE(11)] = 553,
  [SMALL_STATE(12)] = 640,
  [SMALL_STATE(13)] = 726,
  [SMALL_STATE(14)] = 812,
  [SMALL_STATE(15)] = 898,
  [SMALL_STATE(16)] = 946,
  [SMALL_STATE(17)] = 1007,
  [SMALL_STATE(18)] = 1067,
  [SMALL_STATE(19)] = 1127,
  [SMALL_STATE(20)] = 1187,
  [SMALL_STATE(21)] = 1247,
  [SMALL_STATE(22)] = 1287,
  [SMALL_STATE(23)] = 1345,
  [SMALL_STATE(24)] = 1384,
  [SMALL_STATE(25)] = 1435,
  [SMALL_STATE(26)] = 1478,
  [SMALL_STATE(27)] = 1517,
  [SMALL_STATE(28)] = 1556,
  [SMALL_STATE(29)] = 1595,
  [SMALL_STATE(30)] = 1646,
  [SMALL_STATE(31)] = 1697,
  [SMALL_STATE(32)] = 1736,
  [SMALL_STATE(33)] = 1787,
  [SMALL_STATE(34)] = 1826,
  [SMALL_STATE(35)] = 1865,
  [SMALL_STATE(36)] = 1916,
  [SMALL_STATE(37)] = 1959,
  [SMALL_STATE(38)] = 1998,
  [SMALL_STATE(39)] = 2049,
  [SMALL_STATE(40)] = 2110,
  [SMALL_STATE(41)] = 2149,
  [SMALL_STATE(42)] = 2188,
  [SMALL_STATE(43)] = 2259,
  [SMALL_STATE(44)] = 2306,
  [SMALL_STATE(45)] = 2345,
  [SMALL_STATE(46)] = 2384,
  [SMALL_STATE(47)] = 2423,
  [SMALL_STATE(48)] = 2494,
  [SMALL_STATE(49)] = 2541,
  [SMALL_STATE(50)] = 2595,
  [SMALL_STATE(51)] = 2649,
  [SMALL_STATE(52)] = 2715,
  [SMALL_STATE(53)] = 2769,
  [SMALL_STATE(54)] = 2823,
  [SMALL_STATE(55)] = 2877,
  [SMALL_STATE(56)] = 2931,
  [SMALL_STATE(57)] = 2985,
  [SMALL_STATE(58)] = 3039,
  [SMALL_STATE(59)] = 3093,
  [SMALL_STATE(60)] = 3147,
  [SMALL_STATE(61)] = 3201,
  [SMALL_STATE(62)] = 3255,
  [SMALL_STATE(63)] = 3309,
  [SMALL_STATE(64)] = 3363,
  [SMALL_STATE(65)] = 3424,
  [SMALL_STATE(66)] = 3483,
  [SMALL_STATE(67)] = 3542,
  [SMALL_STATE(68)] = 3601,
  [SMALL_STATE(69)] = 3660,
  [SMALL_STATE(70)] = 3698,
  [SMALL_STATE(71)] = 3725,
  [SMALL_STATE(72)] = 3756,
  [SMALL_STATE(73)] = 3787,
  [SMALL_STATE(74)] = 3818,
  [SMALL_STATE(75)] = 3844,
  [SMALL_STATE(76)] = 3868,
  [SMALL_STATE(77)] = 3892,
  [SMALL_STATE(78)] = 3924,
  [SMALL_STATE(79)] = 3951,
  [SMALL_STATE(80)] = 3978,
  [SMALL_STATE(81)] = 4001,
  [SMALL_STATE(82)] = 4032,
  [SMALL_STATE(83)] = 4063,
  [SMALL_STATE(84)] = 4085,
  [SMALL_STATE(85)] = 4111,
  [SMALL_STATE(86)] = 4139,
  [SMALL_STATE(87)] = 4165,
  [SMALL_STATE(88)] = 4191,
  [SMALL_STATE(89)] = 4213,
  [SMALL_STATE(90)] = 4235,
  [SMALL_STATE(91)] = 4261,
  [SMALL_STATE(92)] = 4287,
  [SMALL_STATE(93)] = 4308,
  [SMALL_STATE(94)] = 4333,
  [SMALL_STATE(95)] = 4358,
  [SMALL_STATE(96)] = 4379,
  [SMALL_STATE(97)] = 4404,
  [SMALL_STATE(98)] = 4429,
  [SMALL_STATE(99)] = 4454,
  [SMALL_STATE(100)] = 4474,
  [SMALL_STATE(101)] = 4494,
  [SMALL_STATE(102)] = 4514,
  [SMALL_STATE(103)] = 4534,
  [SMALL_STATE(104)] = 4554,
  [SMALL_STATE(105)] = 4574,
  [SMALL_STATE(106)] = 4594,
  [SMALL_STATE(107)] = 4614,
  [SMALL_STATE(108)] = 4634,
  [SMALL_STATE(109)] = 4654,
  [SMALL_STATE(110)] = 4674,
  [SMALL_STATE(111)] = 4694,
  [SMALL_STATE(112)] = 4714,
  [SMALL_STATE(113)] = 4734,
  [SMALL_STATE(114)] = 4754,
  [SMALL_STATE(115)] = 4798,
  [SMALL_STATE(116)] = 4842,
  [SMALL_STATE(117)] = 4888,
  [SMALL_STATE(118)] = 4934,
  [SMALL_STATE(119)] = 4977,
  [SMALL_STATE(120)] = 5020,
  [SMALL_STATE(121)] = 5063,
  [SMALL_STATE(122)] = 5106,
  [SMALL_STATE(123)] = 5149,
  [SMALL_STATE(124)] = 5165,
  [SMALL_STATE(125)] = 5180,
  [SMALL_STATE(126)] = 5195,
  [SMALL_STATE(127)] = 5211,
  [SMALL_STATE(128)] = 5227,
  [SMALL_STATE(129)] = 5243,
  [SMALL_STATE(130)] = 5253,
  [SMALL_STATE(131)] = 5263,
  [SMALL_STATE(132)] = 5273,
  [SMALL_STATE(133)] = 5283,
  [SMALL_STATE(134)] = 5290,
  [SMALL_STATE(135)] = 5295,
  [SMALL_STATE(136)] = 5302,
  [SMALL_STATE(137)] = 5309,
  [SMALL_STATE(138)] = 5314,
  [SMALL_STATE(139)] = 5321,
  [SMALL_STATE(140)] = 5326,
  [SMALL_STATE(141)] = 5333,
  [SMALL_STATE(142)] = 5337,
  [SMALL_STATE(143)] = 5341,
  [SMALL_STATE(144)] = 5345,
  [SMALL_STATE(145)] = 5349,
  [SMALL_STATE(146)] = 5353,
  [SMALL_STATE(147)] = 5357,
  [SMALL_STATE(148)] = 5361,
  [SMALL_STATE(149)] = 5365,
  [SMALL_STATE(150)] = 5369,
  [SMALL_STATE(151)] = 5373,
  [SMALL_STATE(152)] = 5377,
  [SMALL_STATE(153)] = 5381,
  [SMALL_STATE(154)] = 5385,
  [SMALL_STATE(155)] = 5389,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skip, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skip, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_object_entry, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(119),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(119),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(28),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(18),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(10),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(60),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(148),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_object_entry, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_value, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_value, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than_or_equal_to_operation, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than_or_equal_to_operation, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplication_operation, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplication_operation, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_access, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_access, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_than_operation, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_than_operation, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_operation, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_operation, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than_operation, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than_operation, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_operation, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inequality_operation, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division_operation, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division_operation, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_than_or_equal_to_operation, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_than_or_equal_to_operation, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_operation, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition_operation, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition_operation, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(96),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(98),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(93),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(4),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(97),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(6),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(7),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(5),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(8),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(9),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(47),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(154),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(85),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(94),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(82),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(81),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction_operation, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction_operation, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varargs, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_varargs_repeat1, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skip, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_identifier_repeat1, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_identifier_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_identifier_repeat1, 2), SHIFT_REPEAT(153),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_identifier, 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_identifier, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 4),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_varargs_repeat1, 2), SHIFT_REPEAT(62),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varargs, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_name_repeat1, 2),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_name_repeat1, 2), SHIFT_REPEAT(142),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 1),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 1),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_entry, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(16),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(148),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_argument, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [716] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_surql(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

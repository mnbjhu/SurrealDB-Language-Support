#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 155
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 115
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
  sym_from = 56,
  sym_content = 57,
  sym_where = 58,
  sym_order_by = 59,
  sym_limit = 60,
  sym_skip = 61,
  sym_boolean = 62,
  sym_array = 63,
  sym_object_entry = 64,
  sym_invalid_object_entry = 65,
  sym_assignment = 66,
  sym__object_entry = 67,
  sym_object = 68,
  sym_varargs = 69,
  sym_function_call = 70,
  sym_function_identifier = 71,
  sym_field_name = 72,
  sym__value = 73,
  sym__operation = 74,
  sym_bracketed_value = 75,
  sym_array_access = 76,
  sym_property_access = 77,
  sym_multiplication_operation = 78,
  sym_division_operation = 79,
  sym_addition_operation = 80,
  sym_subtraction_operation = 81,
  sym_equality_operation = 82,
  sym_inequality_operation = 83,
  sym_greater_than_operation = 84,
  sym_less_than_operation = 85,
  sym_greater_than_or_equal_to_operation = 86,
  sym_less_than_or_equal_to_operation = 87,
  sym_and_operation = 88,
  sym_variable = 89,
  sym__statement_parts = 90,
  sym__statement = 91,
  sym_define_table_statement = 92,
  sym_define_field_statement = 93,
  sym_invalid_define_field_statement = 94,
  sym__define_field_statement = 95,
  sym_field = 96,
  sym_on = 97,
  sym_type = 98,
  sym_type_identifier = 99,
  sym_generic_type = 100,
  sym_function = 101,
  sym_function_definition = 102,
  sym_function_return_type = 103,
  sym_code_block = 104,
  sym_function_argument = 105,
  sym_function_arguments = 106,
  aux_sym_source_file_repeat1 = 107,
  aux_sym_statement_repeat1 = 108,
  aux_sym_array_repeat1 = 109,
  aux_sym_object_repeat1 = 110,
  aux_sym_varargs_repeat1 = 111,
  aux_sym_function_identifier_repeat1 = 112,
  aux_sym_field_name_repeat1 = 113,
  aux_sym_function_arguments_repeat1 = 114,
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
  [sym_define_table_statement] = "define_table_statement",
  [sym_define_field_statement] = "define_field_statement",
  [sym_invalid_define_field_statement] = "invalid_define_field_statement",
  [sym__define_field_statement] = "_define_field_statement",
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
  [sym_define_table_statement] = sym_define_table_statement,
  [sym_define_field_statement] = sym_define_field_statement,
  [sym_invalid_define_field_statement] = sym_invalid_define_field_statement,
  [sym__define_field_statement] = sym__define_field_statement,
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
  [sym_define_table_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_define_field_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_define_field_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__define_field_statement] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(96);
      if (lookahead == '!') ADVANCE(224);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(211);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(217);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 92:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(210);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '+') ADVANCE(215);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(95)
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_create);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_update);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_content);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_orderby);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_skip);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'y') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'k') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(211);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(217);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_define);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_define);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_table);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 95},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 95},
  [11] = {.lex_state = 95},
  [12] = {.lex_state = 95},
  [13] = {.lex_state = 95},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 95},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 95},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 95},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 95},
  [39] = {.lex_state = 95},
  [40] = {.lex_state = 95},
  [41] = {.lex_state = 95},
  [42] = {.lex_state = 95},
  [43] = {.lex_state = 95},
  [44] = {.lex_state = 95},
  [45] = {.lex_state = 95},
  [46] = {.lex_state = 95},
  [47] = {.lex_state = 95},
  [48] = {.lex_state = 95},
  [49] = {.lex_state = 95},
  [50] = {.lex_state = 95},
  [51] = {.lex_state = 95},
  [52] = {.lex_state = 95},
  [53] = {.lex_state = 95},
  [54] = {.lex_state = 95},
  [55] = {.lex_state = 95},
  [56] = {.lex_state = 95},
  [57] = {.lex_state = 95},
  [58] = {.lex_state = 95},
  [59] = {.lex_state = 95},
  [60] = {.lex_state = 95},
  [61] = {.lex_state = 95},
  [62] = {.lex_state = 95},
  [63] = {.lex_state = 95},
  [64] = {.lex_state = 95},
  [65] = {.lex_state = 95},
  [66] = {.lex_state = 95},
  [67] = {.lex_state = 95},
  [68] = {.lex_state = 95},
  [69] = {.lex_state = 95},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 95},
  [72] = {.lex_state = 95},
  [73] = {.lex_state = 95},
  [74] = {.lex_state = 95},
  [75] = {.lex_state = 95},
  [76] = {.lex_state = 95},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 95},
  [80] = {.lex_state = 95},
  [81] = {.lex_state = 95},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 95},
  [84] = {.lex_state = 95},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 95},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 95},
  [92] = {.lex_state = 95},
  [93] = {.lex_state = 95},
  [94] = {.lex_state = 95},
  [95] = {.lex_state = 95},
  [96] = {.lex_state = 95},
  [97] = {.lex_state = 95},
  [98] = {.lex_state = 95},
  [99] = {.lex_state = 95},
  [100] = {.lex_state = 95},
  [101] = {.lex_state = 95},
  [102] = {.lex_state = 95},
  [103] = {.lex_state = 95},
  [104] = {.lex_state = 95},
  [105] = {.lex_state = 95},
  [106] = {.lex_state = 95},
  [107] = {.lex_state = 95},
  [108] = {.lex_state = 95},
  [109] = {.lex_state = 95},
  [110] = {.lex_state = 95},
  [111] = {.lex_state = 95},
  [112] = {.lex_state = 95},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 93},
  [115] = {.lex_state = 93},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 95},
  [121] = {.lex_state = 93},
  [122] = {.lex_state = 95},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 93},
  [125] = {.lex_state = 93},
  [126] = {.lex_state = 95},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 95},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 93},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 93},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 93},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 93},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 93},
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
    [sym_source_file] = STATE(146),
    [sym_statement] = STATE(149),
    [sym_create] = STATE(32),
    [sym_update] = STATE(32),
    [sym_delete] = STATE(32),
    [sym_select] = STATE(32),
    [sym_from] = STATE(32),
    [sym_content] = STATE(32),
    [sym_where] = STATE(32),
    [sym_order_by] = STATE(32),
    [sym_limit] = STATE(32),
    [sym_skip] = STATE(32),
    [sym_assignment] = STATE(149),
    [sym__statement_parts] = STATE(32),
    [sym__statement] = STATE(11),
    [sym_define_table_statement] = STATE(32),
    [sym_define_field_statement] = STATE(32),
    [sym_invalid_define_field_statement] = STATE(32),
    [sym__define_field_statement] = STATE(32),
    [sym_field] = STATE(75),
    [sym_function] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym_statement_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_create] = ACTIONS(5),
    [anon_sym_update] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(9),
    [anon_sym_select] = ACTIONS(11),
    [anon_sym_from] = ACTIONS(13),
    [anon_sym_content] = ACTIONS(15),
    [anon_sym_where] = ACTIONS(17),
    [anon_sym_orderby] = ACTIONS(19),
    [anon_sym_limit] = ACTIONS(21),
    [anon_sym_skip] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(25),
    [sym_define] = ACTIONS(27),
    [anon_sym_table] = ACTIONS(29),
    [anon_sym_field] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
  },
  [2] = {
    [sym_statement] = STATE(143),
    [sym_create] = STATE(32),
    [sym_update] = STATE(32),
    [sym_delete] = STATE(32),
    [sym_select] = STATE(32),
    [sym_from] = STATE(32),
    [sym_content] = STATE(32),
    [sym_where] = STATE(32),
    [sym_order_by] = STATE(32),
    [sym_limit] = STATE(32),
    [sym_skip] = STATE(32),
    [sym_boolean] = STATE(112),
    [sym_array] = STATE(112),
    [sym_object] = STATE(112),
    [sym_function_call] = STATE(112),
    [sym_function_identifier] = STATE(148),
    [sym__value] = STATE(112),
    [sym__operation] = STATE(112),
    [sym_bracketed_value] = STATE(112),
    [sym_array_access] = STATE(112),
    [sym_property_access] = STATE(112),
    [sym_multiplication_operation] = STATE(112),
    [sym_division_operation] = STATE(112),
    [sym_addition_operation] = STATE(112),
    [sym_subtraction_operation] = STATE(112),
    [sym_equality_operation] = STATE(112),
    [sym_inequality_operation] = STATE(112),
    [sym_greater_than_operation] = STATE(112),
    [sym_less_than_operation] = STATE(112),
    [sym_greater_than_or_equal_to_operation] = STATE(112),
    [sym_less_than_or_equal_to_operation] = STATE(112),
    [sym_and_operation] = STATE(112),
    [sym_variable] = STATE(112),
    [sym__statement_parts] = STATE(32),
    [sym_define_table_statement] = STATE(32),
    [sym_define_field_statement] = STATE(32),
    [sym_invalid_define_field_statement] = STATE(32),
    [sym__define_field_statement] = STATE(32),
    [sym_field] = STATE(75),
    [sym_function] = STATE(32),
    [sym_code_block] = STATE(112),
    [aux_sym_statement_repeat1] = STATE(32),
    [anon_sym_create] = ACTIONS(35),
    [anon_sym_update] = ACTIONS(37),
    [anon_sym_delete] = ACTIONS(39),
    [anon_sym_select] = ACTIONS(41),
    [anon_sym_from] = ACTIONS(43),
    [anon_sym_content] = ACTIONS(45),
    [anon_sym_where] = ACTIONS(47),
    [anon_sym_orderby] = ACTIONS(19),
    [anon_sym_limit] = ACTIONS(49),
    [anon_sym_skip] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
    [sym_string] = ACTIONS(55),
    [sym_integer] = ACTIONS(57),
    [sym_float] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(69),
    [sym_define] = ACTIONS(71),
    [anon_sym_table] = ACTIONS(73),
    [anon_sym_field] = ACTIONS(75),
    [anon_sym_function] = ACTIONS(77),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(85), 1,
      sym_integer,
    STATE(93), 1,
      sym_varargs,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(83), 2,
      sym_string,
      sym_float,
    ACTIONS(79), 13,
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
      anon_sym_function,
    STATE(62), 22,
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
  [76] = 13,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(85), 1,
      sym_integer,
    STATE(95), 1,
      sym_varargs,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 2,
      sym_string,
      sym_float,
    ACTIONS(89), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(87), 13,
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
      anon_sym_function,
    STATE(62), 22,
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
  [152] = 12,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(97), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(95), 2,
      sym_string,
      sym_float,
    ACTIONS(91), 13,
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
      anon_sym_function,
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
  [225] = 12,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(105), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(103), 2,
      sym_string,
      sym_float,
    ACTIONS(99), 13,
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
  [298] = 12,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(111), 2,
      sym_string,
      sym_float,
    ACTIONS(107), 13,
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
  [371] = 12,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(121), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(119), 2,
      sym_string,
      sym_float,
    ACTIONS(115), 13,
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
  [444] = 23,
    ACTIONS(19), 1,
      anon_sym_orderby,
    ACTIONS(35), 1,
      anon_sym_create,
    ACTIONS(37), 1,
      anon_sym_update,
    ACTIONS(39), 1,
      anon_sym_delete,
    ACTIONS(41), 1,
      anon_sym_select,
    ACTIONS(43), 1,
      anon_sym_from,
    ACTIONS(45), 1,
      anon_sym_content,
    ACTIONS(47), 1,
      anon_sym_where,
    ACTIONS(49), 1,
      anon_sym_limit,
    ACTIONS(51), 1,
      anon_sym_skip,
    ACTIONS(71), 1,
      sym_define,
    ACTIONS(73), 1,
      anon_sym_table,
    ACTIONS(75), 1,
      anon_sym_field,
    ACTIONS(77), 1,
      anon_sym_function,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_let,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_field,
    STATE(115), 1,
      aux_sym_object_repeat1,
    STATE(12), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 2,
      sym_statement,
      sym_assignment,
    STATE(127), 3,
      sym_object_entry,
      sym_invalid_object_entry,
      sym__object_entry,
    STATE(32), 17,
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
      sym_define_table_statement,
      sym_define_field_statement,
      sym_invalid_define_field_statement,
      sym__define_field_statement,
      sym_function,
      aux_sym_statement_repeat1,
  [534] = 20,
    ACTIONS(131), 1,
      anon_sym_create,
    ACTIONS(134), 1,
      anon_sym_update,
    ACTIONS(137), 1,
      anon_sym_delete,
    ACTIONS(140), 1,
      anon_sym_select,
    ACTIONS(143), 1,
      anon_sym_from,
    ACTIONS(146), 1,
      anon_sym_content,
    ACTIONS(149), 1,
      anon_sym_where,
    ACTIONS(152), 1,
      anon_sym_orderby,
    ACTIONS(155), 1,
      anon_sym_limit,
    ACTIONS(158), 1,
      anon_sym_skip,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(164), 1,
      sym_define,
    ACTIONS(167), 1,
      anon_sym_table,
    ACTIONS(170), 1,
      anon_sym_field,
    ACTIONS(173), 1,
      anon_sym_function,
    STATE(75), 1,
      sym_field,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 2,
      sym_statement,
      sym_assignment,
    STATE(32), 17,
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
      sym_define_table_statement,
      sym_define_field_statement,
      sym_invalid_define_field_statement,
      sym__define_field_statement,
      sym_function,
      aux_sym_statement_repeat1,
  [614] = 20,
    ACTIONS(5), 1,
      anon_sym_create,
    ACTIONS(7), 1,
      anon_sym_update,
    ACTIONS(9), 1,
      anon_sym_delete,
    ACTIONS(11), 1,
      anon_sym_select,
    ACTIONS(13), 1,
      anon_sym_from,
    ACTIONS(15), 1,
      anon_sym_content,
    ACTIONS(17), 1,
      anon_sym_where,
    ACTIONS(19), 1,
      anon_sym_orderby,
    ACTIONS(21), 1,
      anon_sym_limit,
    ACTIONS(23), 1,
      anon_sym_skip,
    ACTIONS(25), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      sym_define,
    ACTIONS(29), 1,
      anon_sym_table,
    ACTIONS(31), 1,
      anon_sym_field,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_field,
    STATE(10), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 2,
      sym_statement,
      sym_assignment,
    STATE(32), 17,
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
      sym_define_table_statement,
      sym_define_field_statement,
      sym_invalid_define_field_statement,
      sym__define_field_statement,
      sym_function,
      aux_sym_statement_repeat1,
  [693] = 20,
    ACTIONS(5), 1,
      anon_sym_create,
    ACTIONS(7), 1,
      anon_sym_update,
    ACTIONS(9), 1,
      anon_sym_delete,
    ACTIONS(11), 1,
      anon_sym_select,
    ACTIONS(13), 1,
      anon_sym_from,
    ACTIONS(15), 1,
      anon_sym_content,
    ACTIONS(17), 1,
      anon_sym_where,
    ACTIONS(19), 1,
      anon_sym_orderby,
    ACTIONS(21), 1,
      anon_sym_limit,
    ACTIONS(23), 1,
      anon_sym_skip,
    ACTIONS(25), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      sym_define,
    ACTIONS(29), 1,
      anon_sym_table,
    ACTIONS(31), 1,
      anon_sym_field,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_field,
    STATE(10), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 2,
      sym_statement,
      sym_assignment,
    STATE(32), 17,
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
      sym_define_table_statement,
      sym_define_field_statement,
      sym_invalid_define_field_statement,
      sym__define_field_statement,
      sym_function,
      aux_sym_statement_repeat1,
  [772] = 20,
    ACTIONS(5), 1,
      anon_sym_create,
    ACTIONS(7), 1,
      anon_sym_update,
    ACTIONS(9), 1,
      anon_sym_delete,
    ACTIONS(11), 1,
      anon_sym_select,
    ACTIONS(13), 1,
      anon_sym_from,
    ACTIONS(15), 1,
      anon_sym_content,
    ACTIONS(17), 1,
      anon_sym_where,
    ACTIONS(19), 1,
      anon_sym_orderby,
    ACTIONS(21), 1,
      anon_sym_limit,
    ACTIONS(23), 1,
      anon_sym_skip,
    ACTIONS(25), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      sym_define,
    ACTIONS(29), 1,
      anon_sym_table,
    ACTIONS(31), 1,
      anon_sym_field,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_field,
    STATE(12), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(149), 2,
      sym_statement,
      sym_assignment,
    STATE(32), 17,
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
      sym_define_table_statement,
      sym_define_field_statement,
      sym_invalid_define_field_statement,
      sym__define_field_statement,
      sym_function,
      aux_sym_statement_repeat1,
  [851] = 12,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(184), 1,
      sym_integer,
    ACTIONS(188), 1,
      anon_sym_COLON,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(182), 2,
      sym_string,
      sym_float,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(91), 22,
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
  [912] = 5,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_COLON_COLON,
    STATE(120), 1,
      aux_sym_function_identifier_repeat1,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(190), 30,
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
      anon_sym_function,
  [958] = 12,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(204), 1,
      sym_integer,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_DOLLAR,
    STATE(16), 1,
      aux_sym_array_repeat1,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(201), 2,
      sym_string,
      sym_float,
    ACTIONS(207), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(110), 22,
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
  [1018] = 11,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(226), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(224), 2,
      sym_string,
      sym_float,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(102), 22,
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
  [1076] = 12,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(232), 1,
      sym_integer,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      aux_sym_array_repeat1,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(230), 2,
      sym_string,
      sym_float,
    STATE(96), 22,
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
  [1136] = 12,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(85), 1,
      sym_integer,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_varargs,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 2,
      sym_string,
      sym_float,
    STATE(62), 22,
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
  [1196] = 12,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(240), 1,
      sym_integer,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_array_repeat1,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(238), 2,
      sym_string,
      sym_float,
    STATE(104), 22,
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
  [1256] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(246), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(244), 2,
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
  [1310] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(250), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(248), 2,
      sym_string,
      sym_float,
    STATE(46), 22,
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
  [1364] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(254), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(252), 2,
      sym_string,
      sym_float,
    STATE(40), 22,
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
  [1418] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(258), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(256), 2,
      sym_string,
      sym_float,
    STATE(59), 22,
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
  [1472] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(262), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(260), 2,
      sym_string,
      sym_float,
    STATE(58), 22,
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
  [1526] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(266), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(264), 2,
      sym_string,
      sym_float,
    STATE(45), 22,
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
  [1580] = 2,
    ACTIONS(270), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(268), 31,
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
      anon_sym_function,
  [1618] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(274), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(272), 2,
      sym_string,
      sym_float,
    STATE(111), 22,
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
  [1672] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(276), 2,
      sym_string,
      sym_float,
    STATE(56), 22,
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
  [1726] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(282), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(280), 2,
      sym_string,
      sym_float,
    STATE(63), 22,
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
  [1780] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(286), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(284), 2,
      sym_string,
      sym_float,
    STATE(55), 22,
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
  [1834] = 17,
    ACTIONS(5), 1,
      anon_sym_create,
    ACTIONS(7), 1,
      anon_sym_update,
    ACTIONS(9), 1,
      anon_sym_delete,
    ACTIONS(11), 1,
      anon_sym_select,
    ACTIONS(13), 1,
      anon_sym_from,
    ACTIONS(15), 1,
      anon_sym_content,
    ACTIONS(17), 1,
      anon_sym_where,
    ACTIONS(19), 1,
      anon_sym_orderby,
    ACTIONS(21), 1,
      anon_sym_limit,
    ACTIONS(23), 1,
      anon_sym_skip,
    ACTIONS(29), 1,
      anon_sym_table,
    ACTIONS(31), 1,
      anon_sym_field,
    ACTIONS(33), 1,
      anon_sym_function,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      sym_define,
    STATE(75), 1,
      sym_field,
    STATE(36), 17,
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
      sym_define_table_statement,
      sym_define_field_statement,
      sym_invalid_define_field_statement,
      sym__define_field_statement,
      sym_function,
      aux_sym_statement_repeat1,
  [1902] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(294), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(292), 2,
      sym_string,
      sym_float,
    STATE(42), 22,
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
  [1956] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(298), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(296), 2,
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
  [2010] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(302), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(300), 2,
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
  [2064] = 17,
    ACTIONS(304), 1,
      anon_sym_create,
    ACTIONS(307), 1,
      anon_sym_update,
    ACTIONS(310), 1,
      anon_sym_delete,
    ACTIONS(313), 1,
      anon_sym_select,
    ACTIONS(316), 1,
      anon_sym_from,
    ACTIONS(319), 1,
      anon_sym_content,
    ACTIONS(322), 1,
      anon_sym_where,
    ACTIONS(325), 1,
      anon_sym_orderby,
    ACTIONS(328), 1,
      anon_sym_limit,
    ACTIONS(331), 1,
      anon_sym_skip,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    ACTIONS(336), 1,
      sym_define,
    ACTIONS(339), 1,
      anon_sym_table,
    ACTIONS(342), 1,
      anon_sym_field,
    ACTIONS(345), 1,
      anon_sym_function,
    STATE(75), 1,
      sym_field,
    STATE(36), 17,
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
      sym_define_table_statement,
      sym_define_field_statement,
      sym_invalid_define_field_statement,
      sym__define_field_statement,
      sym_function,
      aux_sym_statement_repeat1,
  [2132] = 10,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(350), 1,
      sym_integer,
    STATE(148), 1,
      sym_function_identifier,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(348), 2,
      sym_string,
      sym_float,
    STATE(109), 22,
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
  [2186] = 6,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(362), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 26,
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
      anon_sym_function,
  [2231] = 13,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(364), 20,
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
      anon_sym_function,
  [2290] = 6,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 26,
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
      anon_sym_function,
  [2335] = 2,
    ACTIONS(388), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(386), 30,
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
      anon_sym_function,
  [2372] = 8,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(392), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 24,
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
      anon_sym_function,
  [2421] = 8,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 24,
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
      anon_sym_function,
  [2470] = 2,
    ACTIONS(400), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 30,
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
      anon_sym_function,
  [2507] = 8,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 24,
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
      anon_sym_function,
  [2556] = 8,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 24,
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
      anon_sym_function,
  [2605] = 2,
    ACTIONS(412), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 30,
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
      anon_sym_function,
  [2642] = 2,
    ACTIONS(416), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(414), 30,
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
      anon_sym_function,
  [2679] = 2,
    ACTIONS(420), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(418), 30,
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
      anon_sym_function,
  [2716] = 2,
    ACTIONS(424), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(422), 30,
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
      anon_sym_function,
  [2753] = 2,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 30,
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
      anon_sym_function,
  [2790] = 2,
    ACTIONS(432), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 30,
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
      anon_sym_function,
  [2827] = 2,
    ACTIONS(436), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 30,
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
      anon_sym_function,
  [2864] = 2,
    ACTIONS(440), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 30,
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
      anon_sym_function,
  [2901] = 8,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(444), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 24,
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
      anon_sym_function,
  [2950] = 8,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 24,
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
      anon_sym_function,
  [2999] = 2,
    ACTIONS(452), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 30,
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
      anon_sym_function,
  [3036] = 4,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(456), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 28,
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
      anon_sym_function,
  [3077] = 4,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(460), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 28,
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
      anon_sym_function,
  [3118] = 2,
    ACTIONS(464), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 30,
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
      anon_sym_function,
  [3155] = 2,
    ACTIONS(468), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(466), 30,
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
      anon_sym_function,
  [3192] = 16,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_and,
    STATE(76), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(470), 16,
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
      anon_sym_function,
  [3256] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(476), 17,
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
      anon_sym_function,
  [3315] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(478), 15,
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
      anon_sym_function,
  [3372] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(480), 15,
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
      anon_sym_function,
  [3429] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(482), 15,
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
      anon_sym_function,
  [3486] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(484), 15,
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
      anon_sym_function,
  [3543] = 2,
    ACTIONS(488), 1,
      anon_sym_LT,
    ACTIONS(486), 19,
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
      anon_sym_function,
  [3568] = 3,
    ACTIONS(492), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_field_name_repeat1,
    ACTIONS(490), 17,
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
  [3594] = 4,
    ACTIONS(499), 1,
      sym_identifier,
    STATE(84), 1,
      sym_field_name,
    ACTIONS(497), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(495), 15,
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
  [3622] = 3,
    ACTIONS(503), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_field_name_repeat1,
    ACTIONS(501), 17,
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
  [3648] = 1,
    ACTIONS(505), 19,
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
      anon_sym_function,
  [3670] = 1,
    ACTIONS(486), 19,
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
      anon_sym_function,
  [3692] = 3,
    ACTIONS(503), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_field_name_repeat1,
    ACTIONS(507), 17,
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
  [3718] = 5,
    ACTIONS(511), 1,
      anon_sym_on,
    ACTIONS(513), 1,
      anon_sym_type,
    STATE(81), 1,
      sym_on,
    STATE(103), 1,
      sym_type,
    ACTIONS(509), 15,
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
      anon_sym_function,
  [3748] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(515), 16,
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
      anon_sym_function,
  [3773] = 5,
    ACTIONS(521), 1,
      sym_identifier,
    STATE(73), 1,
      sym_generic_type,
    STATE(101), 1,
      sym_type_identifier,
    ACTIONS(519), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(517), 13,
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
      anon_sym_function,
  [3802] = 5,
    ACTIONS(527), 1,
      sym_identifier,
    STATE(107), 1,
      sym_function_definition,
    STATE(136), 1,
      sym_function_identifier,
    ACTIONS(525), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(523), 13,
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
      anon_sym_function,
  [3831] = 1,
    ACTIONS(490), 18,
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
  [3852] = 3,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(476), 16,
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
      anon_sym_function,
  [3877] = 3,
    ACTIONS(513), 1,
      anon_sym_type,
    STATE(98), 1,
      sym_type,
    ACTIONS(532), 15,
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
      anon_sym_function,
  [3901] = 3,
    ACTIONS(538), 1,
      sym_identifier,
    ACTIONS(536), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(534), 14,
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
      anon_sym_type,
      anon_sym_function,
  [3925] = 1,
    ACTIONS(540), 17,
      ts_builtin_sym_end,
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
      anon_sym_let,
      anon_sym_RBRACE,
      sym_define,
      anon_sym_table,
      anon_sym_field,
      anon_sym_function,
  [3945] = 1,
    ACTIONS(542), 17,
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
  [3965] = 3,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(546), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(544), 13,
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
      anon_sym_function,
  [3988] = 3,
    ACTIONS(554), 1,
      sym_identifier,
    ACTIONS(552), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(550), 13,
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
      anon_sym_function,
  [4011] = 3,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(558), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(556), 13,
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
      anon_sym_function,
  [4034] = 3,
    ACTIONS(566), 1,
      sym_identifier,
    ACTIONS(564), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(562), 13,
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
      anon_sym_function,
  [4057] = 1,
    ACTIONS(568), 16,
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
      anon_sym_type,
      anon_sym_function,
  [4076] = 3,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(572), 2,
      anon_sym_orderby,
      anon_sym_SEMI,
    ACTIONS(570), 13,
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
      anon_sym_function,
  [4099] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4143] = 1,
    ACTIONS(576), 15,
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
      anon_sym_function,
  [4161] = 1,
    ACTIONS(578), 15,
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
      anon_sym_function,
  [4179] = 1,
    ACTIONS(580), 15,
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
      anon_sym_function,
  [4197] = 1,
    ACTIONS(582), 15,
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
      anon_sym_function,
  [4215] = 15,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
  [4261] = 1,
    ACTIONS(588), 15,
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
      anon_sym_function,
  [4279] = 1,
    ACTIONS(590), 15,
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
      anon_sym_function,
  [4297] = 1,
    ACTIONS(592), 15,
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
      anon_sym_function,
  [4315] = 1,
    ACTIONS(594), 15,
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
      anon_sym_function,
  [4333] = 1,
    ACTIONS(596), 15,
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
      anon_sym_function,
  [4351] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(598), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4395] = 1,
    ACTIONS(532), 15,
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
      anon_sym_function,
  [4413] = 15,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(584), 1,
      anon_sym_COMMA,
  [4459] = 1,
    ACTIONS(600), 15,
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
      anon_sym_function,
  [4477] = 1,
    ACTIONS(602), 15,
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
      anon_sym_function,
  [4495] = 1,
    ACTIONS(604), 15,
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
      anon_sym_function,
  [4513] = 1,
    ACTIONS(606), 15,
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
      anon_sym_function,
  [4531] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
  [4574] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(584), 1,
      anon_sym_COMMA,
  [4617] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
  [4660] = 14,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      anon_sym_SLASH,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_PLUS,
    ACTIONS(370), 1,
      anon_sym_DASH,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_GT,
    ACTIONS(376), 1,
      anon_sym_LT,
    ACTIONS(378), 1,
      anon_sym_GT_EQ,
    ACTIONS(380), 1,
      anon_sym_LT_EQ,
    ACTIONS(474), 1,
      anon_sym_and,
    ACTIONS(612), 1,
      anon_sym_SEMI,
  [4703] = 2,
    ACTIONS(614), 4,
      sym_identifier,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(213), 7,
      sym_string,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
  [4719] = 4,
    ACTIONS(616), 1,
      sym_identifier,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      aux_sym_object_repeat1,
    STATE(142), 3,
      sym_object_entry,
      sym_invalid_object_entry,
      sym__object_entry,
  [4734] = 4,
    ACTIONS(621), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      aux_sym_object_repeat1,
    STATE(139), 3,
      sym_object_entry,
      sym_invalid_object_entry,
      sym__object_entry,
  [4749] = 5,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_function_arguments_repeat1,
    STATE(135), 1,
      sym_function_argument,
    STATE(152), 1,
      sym_variable,
  [4765] = 5,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_function_arguments_repeat1,
    STATE(132), 1,
      sym_function_argument,
    STATE(152), 1,
      sym_variable,
  [4781] = 5,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    ACTIONS(631), 1,
      anon_sym_DOLLAR,
    STATE(118), 1,
      aux_sym_function_arguments_repeat1,
    STATE(152), 1,
      sym_variable,
    STATE(153), 1,
      sym_function_argument,
  [4797] = 4,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_code_block,
    STATE(134), 1,
      sym_function_return_type,
  [4810] = 3,
    ACTIONS(194), 1,
      anon_sym_COLON_COLON,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      aux_sym_function_identifier_repeat1,
  [4820] = 3,
    ACTIONS(640), 1,
      sym_identifier,
    STATE(73), 1,
      sym_generic_type,
    STATE(131), 1,
      sym_type_identifier,
  [4830] = 3,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(644), 1,
      anon_sym_COLON_COLON,
    STATE(122), 1,
      aux_sym_function_identifier_repeat1,
  [4840] = 3,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(647), 1,
      anon_sym_SEMI,
    STATE(140), 1,
      sym_variable,
  [4850] = 3,
    ACTIONS(640), 1,
      sym_identifier,
    STATE(73), 1,
      sym_generic_type,
    STATE(147), 1,
      sym_type_identifier,
  [4860] = 3,
    ACTIONS(640), 1,
      sym_identifier,
    STATE(73), 1,
      sym_generic_type,
    STATE(150), 1,
      sym_type_identifier,
  [4870] = 3,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_COLON_COLON,
    STATE(120), 1,
      aux_sym_function_identifier_repeat1,
  [4880] = 2,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    ACTIONS(649), 1,
      anon_sym_COMMA,
  [4887] = 1,
    ACTIONS(651), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [4892] = 1,
    ACTIONS(642), 2,
      anon_sym_LPAREN,
      anon_sym_COLON_COLON,
  [4897] = 1,
    ACTIONS(653), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [4902] = 1,
    ACTIONS(655), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4907] = 2,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    ACTIONS(657), 1,
      anon_sym_COMMA,
  [4914] = 1,
    ACTIONS(619), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [4919] = 2,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_code_block,
  [4926] = 2,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [4933] = 2,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_function_arguments,
  [4940] = 1,
    ACTIONS(663), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [4945] = 1,
    ACTIONS(629), 2,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
  [4950] = 2,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
  [4957] = 2,
    ACTIONS(667), 1,
      anon_sym_EQ,
    ACTIONS(669), 1,
      anon_sym_SEMI,
  [4964] = 1,
    ACTIONS(671), 1,
      sym_identifier,
  [4968] = 1,
    ACTIONS(649), 1,
      anon_sym_COMMA,
  [4972] = 1,
    ACTIONS(612), 1,
      anon_sym_SEMI,
  [4976] = 1,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
  [4980] = 1,
    ACTIONS(675), 1,
      sym_identifier,
  [4984] = 1,
    ACTIONS(677), 1,
      ts_builtin_sym_end,
  [4988] = 1,
    ACTIONS(679), 1,
      anon_sym_LBRACE,
  [4992] = 1,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
  [4996] = 1,
    ACTIONS(683), 1,
      anon_sym_SEMI,
  [5000] = 1,
    ACTIONS(685), 1,
      anon_sym_GT,
  [5004] = 1,
    ACTIONS(687), 1,
      sym_identifier,
  [5008] = 1,
    ACTIONS(689), 1,
      anon_sym_COLON,
  [5012] = 1,
    ACTIONS(657), 1,
      anon_sym_COMMA,
  [5016] = 1,
    ACTIONS(691), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 152,
  [SMALL_STATE(6)] = 225,
  [SMALL_STATE(7)] = 298,
  [SMALL_STATE(8)] = 371,
  [SMALL_STATE(9)] = 444,
  [SMALL_STATE(10)] = 534,
  [SMALL_STATE(11)] = 614,
  [SMALL_STATE(12)] = 693,
  [SMALL_STATE(13)] = 772,
  [SMALL_STATE(14)] = 851,
  [SMALL_STATE(15)] = 912,
  [SMALL_STATE(16)] = 958,
  [SMALL_STATE(17)] = 1018,
  [SMALL_STATE(18)] = 1076,
  [SMALL_STATE(19)] = 1136,
  [SMALL_STATE(20)] = 1196,
  [SMALL_STATE(21)] = 1256,
  [SMALL_STATE(22)] = 1310,
  [SMALL_STATE(23)] = 1364,
  [SMALL_STATE(24)] = 1418,
  [SMALL_STATE(25)] = 1472,
  [SMALL_STATE(26)] = 1526,
  [SMALL_STATE(27)] = 1580,
  [SMALL_STATE(28)] = 1618,
  [SMALL_STATE(29)] = 1672,
  [SMALL_STATE(30)] = 1726,
  [SMALL_STATE(31)] = 1780,
  [SMALL_STATE(32)] = 1834,
  [SMALL_STATE(33)] = 1902,
  [SMALL_STATE(34)] = 1956,
  [SMALL_STATE(35)] = 2010,
  [SMALL_STATE(36)] = 2064,
  [SMALL_STATE(37)] = 2132,
  [SMALL_STATE(38)] = 2186,
  [SMALL_STATE(39)] = 2231,
  [SMALL_STATE(40)] = 2290,
  [SMALL_STATE(41)] = 2335,
  [SMALL_STATE(42)] = 2372,
  [SMALL_STATE(43)] = 2421,
  [SMALL_STATE(44)] = 2470,
  [SMALL_STATE(45)] = 2507,
  [SMALL_STATE(46)] = 2556,
  [SMALL_STATE(47)] = 2605,
  [SMALL_STATE(48)] = 2642,
  [SMALL_STATE(49)] = 2679,
  [SMALL_STATE(50)] = 2716,
  [SMALL_STATE(51)] = 2753,
  [SMALL_STATE(52)] = 2790,
  [SMALL_STATE(53)] = 2827,
  [SMALL_STATE(54)] = 2864,
  [SMALL_STATE(55)] = 2901,
  [SMALL_STATE(56)] = 2950,
  [SMALL_STATE(57)] = 2999,
  [SMALL_STATE(58)] = 3036,
  [SMALL_STATE(59)] = 3077,
  [SMALL_STATE(60)] = 3118,
  [SMALL_STATE(61)] = 3155,
  [SMALL_STATE(62)] = 3192,
  [SMALL_STATE(63)] = 3256,
  [SMALL_STATE(64)] = 3315,
  [SMALL_STATE(65)] = 3372,
  [SMALL_STATE(66)] = 3429,
  [SMALL_STATE(67)] = 3486,
  [SMALL_STATE(68)] = 3543,
  [SMALL_STATE(69)] = 3568,
  [SMALL_STATE(70)] = 3594,
  [SMALL_STATE(71)] = 3622,
  [SMALL_STATE(72)] = 3648,
  [SMALL_STATE(73)] = 3670,
  [SMALL_STATE(74)] = 3692,
  [SMALL_STATE(75)] = 3718,
  [SMALL_STATE(76)] = 3748,
  [SMALL_STATE(77)] = 3773,
  [SMALL_STATE(78)] = 3802,
  [SMALL_STATE(79)] = 3831,
  [SMALL_STATE(80)] = 3852,
  [SMALL_STATE(81)] = 3877,
  [SMALL_STATE(82)] = 3901,
  [SMALL_STATE(83)] = 3925,
  [SMALL_STATE(84)] = 3945,
  [SMALL_STATE(85)] = 3965,
  [SMALL_STATE(86)] = 3988,
  [SMALL_STATE(87)] = 4011,
  [SMALL_STATE(88)] = 4034,
  [SMALL_STATE(89)] = 4057,
  [SMALL_STATE(90)] = 4076,
  [SMALL_STATE(91)] = 4099,
  [SMALL_STATE(92)] = 4143,
  [SMALL_STATE(93)] = 4161,
  [SMALL_STATE(94)] = 4179,
  [SMALL_STATE(95)] = 4197,
  [SMALL_STATE(96)] = 4215,
  [SMALL_STATE(97)] = 4261,
  [SMALL_STATE(98)] = 4279,
  [SMALL_STATE(99)] = 4297,
  [SMALL_STATE(100)] = 4315,
  [SMALL_STATE(101)] = 4333,
  [SMALL_STATE(102)] = 4351,
  [SMALL_STATE(103)] = 4395,
  [SMALL_STATE(104)] = 4413,
  [SMALL_STATE(105)] = 4459,
  [SMALL_STATE(106)] = 4477,
  [SMALL_STATE(107)] = 4495,
  [SMALL_STATE(108)] = 4513,
  [SMALL_STATE(109)] = 4531,
  [SMALL_STATE(110)] = 4574,
  [SMALL_STATE(111)] = 4617,
  [SMALL_STATE(112)] = 4660,
  [SMALL_STATE(113)] = 4703,
  [SMALL_STATE(114)] = 4719,
  [SMALL_STATE(115)] = 4734,
  [SMALL_STATE(116)] = 4749,
  [SMALL_STATE(117)] = 4765,
  [SMALL_STATE(118)] = 4781,
  [SMALL_STATE(119)] = 4797,
  [SMALL_STATE(120)] = 4810,
  [SMALL_STATE(121)] = 4820,
  [SMALL_STATE(122)] = 4830,
  [SMALL_STATE(123)] = 4840,
  [SMALL_STATE(124)] = 4850,
  [SMALL_STATE(125)] = 4860,
  [SMALL_STATE(126)] = 4870,
  [SMALL_STATE(127)] = 4880,
  [SMALL_STATE(128)] = 4887,
  [SMALL_STATE(129)] = 4892,
  [SMALL_STATE(130)] = 4897,
  [SMALL_STATE(131)] = 4902,
  [SMALL_STATE(132)] = 4907,
  [SMALL_STATE(133)] = 4914,
  [SMALL_STATE(134)] = 4919,
  [SMALL_STATE(135)] = 4926,
  [SMALL_STATE(136)] = 4933,
  [SMALL_STATE(137)] = 4940,
  [SMALL_STATE(138)] = 4945,
  [SMALL_STATE(139)] = 4950,
  [SMALL_STATE(140)] = 4957,
  [SMALL_STATE(141)] = 4964,
  [SMALL_STATE(142)] = 4968,
  [SMALL_STATE(143)] = 4972,
  [SMALL_STATE(144)] = 4976,
  [SMALL_STATE(145)] = 4980,
  [SMALL_STATE(146)] = 4984,
  [SMALL_STATE(147)] = 4988,
  [SMALL_STATE(148)] = 4992,
  [SMALL_STATE(149)] = 4996,
  [SMALL_STATE(150)] = 5000,
  [SMALL_STATE(151)] = 5004,
  [SMALL_STATE(152)] = 5008,
  [SMALL_STATE(153)] = 5012,
  [SMALL_STATE(154)] = 5016,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skip, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skip, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_object_entry, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(110),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(110),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(60),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(20),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(28),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(141),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_object_entry, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(85),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(90),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(87),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(4),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(88),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(7),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(8),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(3),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(6),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(5),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(36),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(86),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(70),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(78),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction_operation, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction_operation, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_operation, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition_operation, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition_operation, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inequality_operation, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inequality_operation, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than_operation, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than_operation, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_than_operation, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_than_operation, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_greater_than_or_equal_to_operation, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_greater_than_or_equal_to_operation, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketed_value, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketed_value, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_less_than_or_equal_to_operation, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_less_than_or_equal_to_operation, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equality_operation, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equality_operation, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_access, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_access, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplication_operation, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplication_operation, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_division_operation, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_division_operation, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varargs, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_varargs_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skip, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_name_repeat1, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_name_repeat1, 2), SHIFT_REPEAT(145),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_define_field_statement, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varargs, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_varargs_repeat1, 2), SHIFT_REPEAT(30),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_define_field_statement, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_table_statement, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_table_statement, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_field_statement, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_table_statement, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_entry, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(14),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(141),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_identifier, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_identifier_repeat1, 2),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_identifier_repeat1, 2), SHIFT_REPEAT(154),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_argument, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [677] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
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

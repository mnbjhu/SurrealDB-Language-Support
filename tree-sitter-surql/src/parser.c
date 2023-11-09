#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_create = 2,
  anon_sym_update = 3,
  anon_sym_delete = 4,
  anon_sym_select = 5,
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
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_DOT = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR = 29,
  anon_sym_SLASH = 30,
  anon_sym_EQ = 31,
  anon_sym_BANG_EQ = 32,
  anon_sym_GT = 33,
  anon_sym_LT = 34,
  anon_sym_GT_EQ = 35,
  anon_sym_LT_EQ = 36,
  anon_sym_and = 37,
  anon_sym_or = 38,
  anon_sym_BANG = 39,
  anon_sym_DOLLAR = 40,
  anon_sym_define = 41,
  anon_sym_table = 42,
  anon_sym_field = 43,
  anon_sym_on = 44,
  anon_sym_type = 45,
  sym_source_file = 46,
  sym__statement = 47,
  sym__crud_statement = 48,
  sym_create_statement = 49,
  sym_update_statement = 50,
  sym_delete_statement = 51,
  sym_select_statement = 52,
  sym_create = 53,
  sym_update = 54,
  sym_delete = 55,
  sym_select = 56,
  sym_from = 57,
  sym_content = 58,
  sym_where = 59,
  sym_order_by = 60,
  sym_limit = 61,
  sym_skip = 62,
  sym_filter = 63,
  sym_boolean = 64,
  sym_array = 65,
  sym_object_entry = 66,
  sym_invalid_object_entry = 67,
  sym__object_entry = 68,
  sym_object = 69,
  sym_varargs = 70,
  sym_function_call = 71,
  sym_field_name = 72,
  sym__value = 73,
  sym_property_access = 74,
  sym_variable = 75,
  sym__statement_parts = 76,
  sym_invalid_statement = 77,
  sym__define_statement = 78,
  sym_define_table_statement = 79,
  sym_define_field_statement = 80,
  sym_invalid_define_field_statement = 81,
  sym__define_field_statement = 82,
  sym_field = 83,
  sym_on = 84,
  sym_type = 85,
  sym_type_identifier = 86,
  sym_generic_type = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym_filter_repeat1 = 89,
  aux_sym_array_repeat1 = 90,
  aux_sym_object_repeat1 = 91,
  aux_sym_varargs_repeat1 = 92,
  aux_sym_field_name_repeat1 = 93,
  aux_sym_invalid_statement_repeat1 = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_create] = "create",
  [anon_sym_update] = "update",
  [anon_sym_delete] = "delete",
  [anon_sym_select] = "select",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_BANG] = "!",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_define] = "define",
  [anon_sym_table] = "table",
  [anon_sym_field] = "field",
  [anon_sym_on] = "on",
  [anon_sym_type] = "type",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__crud_statement] = "_crud_statement",
  [sym_create_statement] = "create_statement",
  [sym_update_statement] = "update_statement",
  [sym_delete_statement] = "delete_statement",
  [sym_select_statement] = "select_statement",
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
  [sym_filter] = "filter",
  [sym_boolean] = "boolean",
  [sym_array] = "array",
  [sym_object_entry] = "object_entry",
  [sym_invalid_object_entry] = "invalid_object_entry",
  [sym__object_entry] = "_object_entry",
  [sym_object] = "object",
  [sym_varargs] = "varargs",
  [sym_function_call] = "function_call",
  [sym_field_name] = "field_name",
  [sym__value] = "_value",
  [sym_property_access] = "property_access",
  [sym_variable] = "variable",
  [sym__statement_parts] = "_statement_parts",
  [sym_invalid_statement] = "invalid_statement",
  [sym__define_statement] = "_define_statement",
  [sym_define_table_statement] = "define_table_statement",
  [sym_define_field_statement] = "define_field_statement",
  [sym_invalid_define_field_statement] = "invalid_define_field_statement",
  [sym__define_field_statement] = "_define_field_statement",
  [sym_field] = "field",
  [sym_on] = "on",
  [sym_type] = "type",
  [sym_type_identifier] = "type_identifier",
  [sym_generic_type] = "generic_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_filter_repeat1] = "filter_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_varargs_repeat1] = "varargs_repeat1",
  [aux_sym_field_name_repeat1] = "field_name_repeat1",
  [aux_sym_invalid_statement_repeat1] = "invalid_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_select] = anon_sym_select,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_type] = anon_sym_type,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__crud_statement] = sym__crud_statement,
  [sym_create_statement] = sym_create_statement,
  [sym_update_statement] = sym_update_statement,
  [sym_delete_statement] = sym_delete_statement,
  [sym_select_statement] = sym_select_statement,
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
  [sym_filter] = sym_filter,
  [sym_boolean] = sym_boolean,
  [sym_array] = sym_array,
  [sym_object_entry] = sym_object_entry,
  [sym_invalid_object_entry] = sym_invalid_object_entry,
  [sym__object_entry] = sym__object_entry,
  [sym_object] = sym_object,
  [sym_varargs] = sym_varargs,
  [sym_function_call] = sym_function_call,
  [sym_field_name] = sym_field_name,
  [sym__value] = sym__value,
  [sym_property_access] = sym_property_access,
  [sym_variable] = sym_variable,
  [sym__statement_parts] = sym__statement_parts,
  [sym_invalid_statement] = sym_invalid_statement,
  [sym__define_statement] = sym__define_statement,
  [sym_define_table_statement] = sym_define_table_statement,
  [sym_define_field_statement] = sym_define_field_statement,
  [sym_invalid_define_field_statement] = sym_invalid_define_field_statement,
  [sym__define_field_statement] = sym__define_field_statement,
  [sym_field] = sym_field,
  [sym_on] = sym_on,
  [sym_type] = sym_type,
  [sym_type_identifier] = sym_type_identifier,
  [sym_generic_type] = sym_generic_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_filter_repeat1] = aux_sym_filter_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_varargs_repeat1] = aux_sym_varargs_repeat1,
  [aux_sym_field_name_repeat1] = aux_sym_field_name_repeat1,
  [aux_sym_invalid_statement_repeat1] = aux_sym_invalid_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DOT] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_define] = {
    .visible = true,
    .named = false,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__crud_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_create_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_update_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_delete_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement] = {
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
  [sym_filter] = {
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
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_property_access] = {
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
  [sym_invalid_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__define_statement] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filter_repeat1] = {
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
  [aux_sym_field_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_invalid_statement_repeat1] = {
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
  [12] = 5,
  [13] = 8,
  [14] = 7,
  [15] = 6,
  [16] = 9,
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
  [67] = 46,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(78);
      if (lookahead == '!') ADVANCE(186);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(174);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '<') ADVANCE(181);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '[') ADVANCE(163);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '(') ADVANCE(169);
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '<') ADVANCE(180);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == ']') ADVANCE(165);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_create);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_update);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_content);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_orderby);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_skip);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_skip);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'k') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_on);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 77},
  [3] = {.lex_state = 77},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 77},
  [11] = {.lex_state = 77},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 77},
  [24] = {.lex_state = 77},
  [25] = {.lex_state = 77},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 77},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 77},
  [30] = {.lex_state = 77},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 77},
  [33] = {.lex_state = 77},
  [34] = {.lex_state = 77},
  [35] = {.lex_state = 77},
  [36] = {.lex_state = 77},
  [37] = {.lex_state = 77},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 77},
  [41] = {.lex_state = 77},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 77},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 77},
  [48] = {.lex_state = 77},
  [49] = {.lex_state = 77},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 77},
  [52] = {.lex_state = 77},
  [53] = {.lex_state = 77},
  [54] = {.lex_state = 77},
  [55] = {.lex_state = 77},
  [56] = {.lex_state = 77},
  [57] = {.lex_state = 77},
  [58] = {.lex_state = 77},
  [59] = {.lex_state = 77},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 77},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 77},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 77},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(101),
    [sym__statement] = STATE(110),
    [sym__crud_statement] = STATE(110),
    [sym_create_statement] = STATE(110),
    [sym_update_statement] = STATE(110),
    [sym_delete_statement] = STATE(110),
    [sym_select_statement] = STATE(110),
    [sym_create] = STATE(41),
    [sym_update] = STATE(48),
    [sym_delete] = STATE(23),
    [sym_select] = STATE(42),
    [sym_from] = STATE(10),
    [sym_content] = STATE(10),
    [sym_where] = STATE(10),
    [sym_order_by] = STATE(10),
    [sym_limit] = STATE(10),
    [sym_skip] = STATE(10),
    [sym__statement_parts] = STATE(10),
    [sym_invalid_statement] = STATE(110),
    [sym__define_statement] = STATE(110),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_invalid_statement_repeat1] = STATE(10),
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
    [anon_sym_define] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_create,
    ACTIONS(32), 1,
      anon_sym_update,
    ACTIONS(35), 1,
      anon_sym_delete,
    ACTIONS(38), 1,
      anon_sym_select,
    ACTIONS(41), 1,
      anon_sym_from,
    ACTIONS(44), 1,
      anon_sym_content,
    ACTIONS(47), 1,
      anon_sym_where,
    ACTIONS(50), 1,
      anon_sym_orderby,
    ACTIONS(53), 1,
      anon_sym_limit,
    ACTIONS(56), 1,
      anon_sym_skip,
    ACTIONS(59), 1,
      anon_sym_define,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(23), 1,
      sym_delete,
    STATE(41), 1,
      sym_create,
    STATE(42), 1,
      sym_select,
    STATE(48), 1,
      sym_update,
    STATE(10), 8,
      sym_from,
      sym_content,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      sym__statement_parts,
      aux_sym_invalid_statement_repeat1,
    STATE(110), 8,
      sym__statement,
      sym__crud_statement,
      sym_create_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_select_statement,
      sym_invalid_statement,
      sym__define_statement,
  [72] = 19,
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
      anon_sym_define,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(23), 1,
      sym_delete,
    STATE(41), 1,
      sym_create,
    STATE(42), 1,
      sym_select,
    STATE(48), 1,
      sym_update,
    STATE(10), 8,
      sym_from,
      sym_content,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      sym__statement_parts,
      aux_sym_invalid_statement_repeat1,
    STATE(110), 8,
      sym__statement,
      sym__crud_statement,
      sym_create_statement,
      sym_update_statement,
      sym_delete_statement,
      sym_select_statement,
      sym_invalid_statement,
      sym__define_statement,
  [144] = 11,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    STATE(53), 1,
      sym_varargs,
    ACTIONS(64), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(70), 2,
      sym_string,
      sym_float,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
    ACTIONS(66), 9,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [195] = 11,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_varargs,
    ACTIONS(70), 2,
      sym_string,
      sym_float,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    STATE(37), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
    ACTIONS(84), 9,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [246] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      sym_integer,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(86), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(90), 2,
      sym_string,
      sym_float,
    STATE(44), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
    ACTIONS(88), 9,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [294] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      sym_integer,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(94), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(98), 2,
      sym_string,
      sym_float,
    STATE(47), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
    ACTIONS(96), 9,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [342] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(106), 2,
      sym_string,
      sym_float,
    STATE(52), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
    ACTIONS(104), 9,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [390] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      sym_integer,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(114), 2,
      sym_string,
      sym_float,
    STATE(51), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
    ACTIONS(112), 9,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [438] = 12,
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
    ACTIONS(118), 1,
      anon_sym_SEMI,
    STATE(11), 12,
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
      aux_sym_invalid_statement_repeat1,
  [486] = 12,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_create,
    ACTIONS(125), 1,
      anon_sym_update,
    ACTIONS(128), 1,
      anon_sym_delete,
    ACTIONS(131), 1,
      anon_sym_select,
    ACTIONS(134), 1,
      anon_sym_from,
    ACTIONS(137), 1,
      anon_sym_content,
    ACTIONS(140), 1,
      anon_sym_where,
    ACTIONS(143), 1,
      anon_sym_orderby,
    ACTIONS(146), 1,
      anon_sym_limit,
    ACTIONS(149), 1,
      anon_sym_skip,
    STATE(11), 12,
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
      aux_sym_invalid_statement_repeat1,
  [534] = 11,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      sym_varargs,
    ACTIONS(70), 2,
      sym_string,
      sym_float,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(84), 3,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
    STATE(37), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [579] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(106), 2,
      sym_string,
      sym_float,
    ACTIONS(104), 3,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
    STATE(52), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [621] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 1,
      sym_integer,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(94), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(98), 2,
      sym_string,
      sym_float,
    ACTIONS(96), 3,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
    STATE(47), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [663] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(92), 1,
      sym_integer,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(86), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(90), 2,
      sym_string,
      sym_float,
    ACTIONS(88), 3,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
    STATE(44), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [705] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 1,
      sym_integer,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(114), 2,
      sym_string,
      sym_float,
    ACTIONS(112), 3,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
    STATE(51), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [747] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(154), 1,
      sym_integer,
    ACTIONS(158), 1,
      anon_sym_COLON,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(152), 2,
      sym_string,
      sym_float,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(82), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [787] = 9,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(162), 1,
      sym_integer,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(160), 2,
      sym_string,
      sym_float,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(83), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [824] = 10,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(172), 1,
      sym_integer,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(186), 1,
      anon_sym_DOLLAR,
    STATE(19), 1,
      aux_sym_array_repeat1,
    ACTIONS(169), 2,
      sym_string,
      sym_float,
    ACTIONS(175), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [863] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_array_repeat1,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(189), 2,
      sym_string,
      sym_float,
    STATE(80), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [902] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_varargs,
    ACTIONS(70), 2,
      sym_string,
      sym_float,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [941] = 10,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      sym_integer,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_array_repeat1,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(197), 2,
      sym_string,
      sym_float,
    STATE(84), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [980] = 8,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      anon_sym_where,
    ACTIONS(209), 1,
      anon_sym_orderby,
    ACTIONS(211), 1,
      anon_sym_limit,
    ACTIONS(213), 1,
      anon_sym_skip,
    STATE(97), 1,
      sym_filter,
    STATE(64), 5,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      aux_sym_filter_repeat1,
    ACTIONS(205), 6,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
  [1014] = 2,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1036] = 1,
    ACTIONS(219), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1055] = 1,
    ACTIONS(221), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1074] = 1,
    ACTIONS(223), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1093] = 1,
    ACTIONS(225), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1112] = 1,
    ACTIONS(227), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1131] = 1,
    ACTIONS(229), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1150] = 8,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(80), 1,
      anon_sym_DOLLAR,
    ACTIONS(233), 1,
      sym_integer,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(231), 2,
      sym_string,
      sym_float,
    STATE(39), 7,
      sym_boolean,
      sym_array,
      sym_object,
      sym_function_call,
      sym__value,
      sym_property_access,
      sym_variable,
  [1183] = 1,
    ACTIONS(235), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1202] = 1,
    ACTIONS(237), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1221] = 1,
    ACTIONS(239), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1240] = 1,
    ACTIONS(241), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1259] = 1,
    ACTIONS(243), 16,
      anon_sym_SEMI,
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
      anon_sym_DOT,
  [1278] = 4,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(245), 12,
      anon_sym_SEMI,
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
  [1302] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(251), 12,
      anon_sym_SEMI,
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
  [1323] = 2,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(253), 13,
      anon_sym_SEMI,
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
  [1342] = 3,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_varargs_repeat1,
    ACTIONS(253), 12,
      anon_sym_SEMI,
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
  [1363] = 3,
    ACTIONS(258), 1,
      anon_sym_content,
    STATE(54), 1,
      sym_content,
    ACTIONS(205), 10,
      anon_sym_SEMI,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
  [1382] = 3,
    ACTIONS(260), 1,
      anon_sym_from,
    STATE(61), 1,
      sym_from,
    ACTIONS(205), 10,
      anon_sym_SEMI,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_content,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
  [1401] = 3,
    ACTIONS(266), 1,
      sym_identifier,
    ACTIONS(262), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(264), 9,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [1420] = 2,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(268), 11,
      anon_sym_SEMI,
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
  [1437] = 3,
    ACTIONS(274), 1,
      sym_identifier,
    ACTIONS(270), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(272), 9,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [1456] = 3,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(276), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(278), 9,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [1475] = 2,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(282), 11,
      anon_sym_SEMI,
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
  [1492] = 3,
    ACTIONS(258), 1,
      anon_sym_content,
    STATE(58), 1,
      sym_content,
    ACTIONS(205), 10,
      anon_sym_SEMI,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_where,
      anon_sym_orderby,
      anon_sym_limit,
      anon_sym_skip,
  [1511] = 1,
    ACTIONS(27), 12,
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
      anon_sym_define,
  [1526] = 3,
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(284), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(286), 9,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_select,
      anon_sym_from,
      anon_sym_content,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [1545] = 2,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(290), 11,
      anon_sym_SEMI,
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
  [1562] = 2,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(292), 11,
      anon_sym_SEMI,
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
  [1579] = 1,
    ACTIONS(294), 11,
      anon_sym_SEMI,
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
  [1593] = 7,
    ACTIONS(207), 1,
      anon_sym_where,
    ACTIONS(209), 1,
      anon_sym_orderby,
    ACTIONS(211), 1,
      anon_sym_limit,
    ACTIONS(213), 1,
      anon_sym_skip,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_filter,
    STATE(64), 5,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      aux_sym_filter_repeat1,
  [1619] = 1,
    ACTIONS(298), 11,
      anon_sym_SEMI,
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
  [1633] = 1,
    ACTIONS(300), 11,
      anon_sym_SEMI,
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
  [1647] = 1,
    ACTIONS(302), 11,
      anon_sym_SEMI,
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
  [1661] = 7,
    ACTIONS(207), 1,
      anon_sym_where,
    ACTIONS(209), 1,
      anon_sym_orderby,
    ACTIONS(211), 1,
      anon_sym_limit,
    ACTIONS(213), 1,
      anon_sym_skip,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      sym_filter,
    STATE(64), 5,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      aux_sym_filter_repeat1,
  [1687] = 1,
    ACTIONS(306), 11,
      anon_sym_SEMI,
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
  [1701] = 1,
    ACTIONS(308), 11,
      anon_sym_SEMI,
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
  [1715] = 7,
    ACTIONS(207), 1,
      anon_sym_where,
    ACTIONS(209), 1,
      anon_sym_orderby,
    ACTIONS(211), 1,
      anon_sym_limit,
    ACTIONS(213), 1,
      anon_sym_skip,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_filter,
    STATE(64), 5,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      aux_sym_filter_repeat1,
  [1741] = 6,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    ACTIONS(314), 1,
      anon_sym_where,
    ACTIONS(317), 1,
      anon_sym_orderby,
    ACTIONS(320), 1,
      anon_sym_limit,
    ACTIONS(323), 1,
      anon_sym_skip,
    STATE(62), 5,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      aux_sym_filter_repeat1,
  [1764] = 2,
    ACTIONS(326), 4,
      sym_identifier,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(181), 6,
      sym_string,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
  [1779] = 6,
    ACTIONS(207), 1,
      anon_sym_where,
    ACTIONS(209), 1,
      anon_sym_orderby,
    ACTIONS(211), 1,
      anon_sym_limit,
    ACTIONS(213), 1,
      anon_sym_skip,
    ACTIONS(328), 1,
      anon_sym_SEMI,
    STATE(62), 5,
      sym_where,
      sym_order_by,
      sym_limit,
      sym_skip,
      aux_sym_filter_repeat1,
  [1802] = 4,
    ACTIONS(330), 1,
      anon_sym_table,
    ACTIONS(332), 1,
      anon_sym_field,
    STATE(74), 1,
      sym_field,
    STATE(106), 4,
      sym_define_table_statement,
      sym_define_field_statement,
      sym_invalid_define_field_statement,
      sym__define_field_statement,
  [1818] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_object_repeat1,
    STATE(90), 3,
      sym_object_entry,
      sym_invalid_object_entry,
      sym__object_entry,
  [1833] = 3,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(276), 2,
      anon_sym_SEMI,
      anon_sym_orderby,
    ACTIONS(278), 3,
      anon_sym_where,
      anon_sym_limit,
      anon_sym_skip,
  [1846] = 4,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_object_repeat1,
    STATE(94), 3,
      sym_object_entry,
      sym_invalid_object_entry,
      sym__object_entry,
  [1861] = 4,
    ACTIONS(334), 1,
      sym_identifier,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_object_repeat1,
    STATE(93), 3,
      sym_object_entry,
      sym_invalid_object_entry,
      sym__object_entry,
  [1876] = 3,
    ACTIONS(347), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_field_name_repeat1,
    ACTIONS(345), 3,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_type,
  [1888] = 4,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(78), 1,
      sym_field_name,
    ACTIONS(353), 2,
      anon_sym_on,
      anon_sym_type,
  [1902] = 3,
    ACTIONS(347), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym_field_name_repeat1,
    ACTIONS(355), 3,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_type,
  [1914] = 3,
    ACTIONS(359), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_field_name_repeat1,
    ACTIONS(357), 3,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_type,
  [1926] = 5,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    ACTIONS(364), 1,
      anon_sym_on,
    ACTIONS(366), 1,
      anon_sym_type,
    STATE(81), 1,
      sym_on,
    STATE(108), 1,
      sym_type,
  [1942] = 4,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(92), 1,
      sym_generic_type,
    STATE(104), 1,
      sym_type_identifier,
  [1955] = 1,
    ACTIONS(357), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_on,
      anon_sym_type,
  [1962] = 3,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(92), 1,
      sym_generic_type,
    STATE(103), 1,
      sym_type_identifier,
  [1972] = 1,
    ACTIONS(372), 3,
      anon_sym_SEMI,
      anon_sym_on,
      anon_sym_type,
  [1978] = 3,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    ACTIONS(376), 1,
      sym_identifier,
    ACTIONS(378), 1,
      anon_sym_type,
  [1988] = 3,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
  [1998] = 3,
    ACTIONS(366), 1,
      anon_sym_type,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    STATE(95), 1,
      sym_type,
  [2008] = 2,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2016] = 2,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2024] = 3,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_COMMA,
  [2034] = 2,
    ACTIONS(390), 1,
      anon_sym_LT,
    ACTIONS(388), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [2042] = 1,
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_type,
  [2047] = 2,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_COMMA,
  [2054] = 2,
    ACTIONS(394), 1,
      anon_sym_SEMI,
    ACTIONS(396), 1,
      sym_identifier,
  [2061] = 1,
    ACTIONS(398), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [2066] = 2,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(400), 1,
      anon_sym_COMMA,
  [2073] = 1,
    ACTIONS(341), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [2078] = 1,
    ACTIONS(388), 2,
      anon_sym_SEMI,
      anon_sym_GT,
  [2083] = 2,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
  [2090] = 1,
    ACTIONS(400), 1,
      anon_sym_COMMA,
  [2094] = 1,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [2098] = 1,
    ACTIONS(406), 1,
      sym_identifier,
  [2102] = 1,
    ACTIONS(408), 1,
      anon_sym_SEMI,
  [2106] = 1,
    ACTIONS(410), 1,
      anon_sym_SEMI,
  [2110] = 1,
    ACTIONS(412), 1,
      sym_identifier,
  [2114] = 1,
    ACTIONS(414), 1,
      anon_sym_SEMI,
  [2118] = 1,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
  [2122] = 1,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
  [2126] = 1,
    ACTIONS(420), 1,
      anon_sym_GT,
  [2130] = 1,
    ACTIONS(422), 1,
      anon_sym_SEMI,
  [2134] = 1,
    ACTIONS(424), 1,
      anon_sym_SEMI,
  [2138] = 1,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [2142] = 1,
    ACTIONS(428), 1,
      anon_sym_SEMI,
  [2146] = 1,
    ACTIONS(384), 1,
      anon_sym_SEMI,
  [2150] = 1,
    ACTIONS(430), 1,
      sym_identifier,
  [2154] = 1,
    ACTIONS(432), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 294,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 390,
  [SMALL_STATE(10)] = 438,
  [SMALL_STATE(11)] = 486,
  [SMALL_STATE(12)] = 534,
  [SMALL_STATE(13)] = 579,
  [SMALL_STATE(14)] = 621,
  [SMALL_STATE(15)] = 663,
  [SMALL_STATE(16)] = 705,
  [SMALL_STATE(17)] = 747,
  [SMALL_STATE(18)] = 787,
  [SMALL_STATE(19)] = 824,
  [SMALL_STATE(20)] = 863,
  [SMALL_STATE(21)] = 902,
  [SMALL_STATE(22)] = 941,
  [SMALL_STATE(23)] = 980,
  [SMALL_STATE(24)] = 1014,
  [SMALL_STATE(25)] = 1036,
  [SMALL_STATE(26)] = 1055,
  [SMALL_STATE(27)] = 1074,
  [SMALL_STATE(28)] = 1093,
  [SMALL_STATE(29)] = 1112,
  [SMALL_STATE(30)] = 1131,
  [SMALL_STATE(31)] = 1150,
  [SMALL_STATE(32)] = 1183,
  [SMALL_STATE(33)] = 1202,
  [SMALL_STATE(34)] = 1221,
  [SMALL_STATE(35)] = 1240,
  [SMALL_STATE(36)] = 1259,
  [SMALL_STATE(37)] = 1278,
  [SMALL_STATE(38)] = 1302,
  [SMALL_STATE(39)] = 1323,
  [SMALL_STATE(40)] = 1342,
  [SMALL_STATE(41)] = 1363,
  [SMALL_STATE(42)] = 1382,
  [SMALL_STATE(43)] = 1401,
  [SMALL_STATE(44)] = 1420,
  [SMALL_STATE(45)] = 1437,
  [SMALL_STATE(46)] = 1456,
  [SMALL_STATE(47)] = 1475,
  [SMALL_STATE(48)] = 1492,
  [SMALL_STATE(49)] = 1511,
  [SMALL_STATE(50)] = 1526,
  [SMALL_STATE(51)] = 1545,
  [SMALL_STATE(52)] = 1562,
  [SMALL_STATE(53)] = 1579,
  [SMALL_STATE(54)] = 1593,
  [SMALL_STATE(55)] = 1619,
  [SMALL_STATE(56)] = 1633,
  [SMALL_STATE(57)] = 1647,
  [SMALL_STATE(58)] = 1661,
  [SMALL_STATE(59)] = 1687,
  [SMALL_STATE(60)] = 1701,
  [SMALL_STATE(61)] = 1715,
  [SMALL_STATE(62)] = 1741,
  [SMALL_STATE(63)] = 1764,
  [SMALL_STATE(64)] = 1779,
  [SMALL_STATE(65)] = 1802,
  [SMALL_STATE(66)] = 1818,
  [SMALL_STATE(67)] = 1833,
  [SMALL_STATE(68)] = 1846,
  [SMALL_STATE(69)] = 1861,
  [SMALL_STATE(70)] = 1876,
  [SMALL_STATE(71)] = 1888,
  [SMALL_STATE(72)] = 1902,
  [SMALL_STATE(73)] = 1914,
  [SMALL_STATE(74)] = 1926,
  [SMALL_STATE(75)] = 1942,
  [SMALL_STATE(76)] = 1955,
  [SMALL_STATE(77)] = 1962,
  [SMALL_STATE(78)] = 1972,
  [SMALL_STATE(79)] = 1978,
  [SMALL_STATE(80)] = 1988,
  [SMALL_STATE(81)] = 1998,
  [SMALL_STATE(82)] = 2008,
  [SMALL_STATE(83)] = 2016,
  [SMALL_STATE(84)] = 2024,
  [SMALL_STATE(85)] = 2034,
  [SMALL_STATE(86)] = 2042,
  [SMALL_STATE(87)] = 2047,
  [SMALL_STATE(88)] = 2054,
  [SMALL_STATE(89)] = 2061,
  [SMALL_STATE(90)] = 2066,
  [SMALL_STATE(91)] = 2073,
  [SMALL_STATE(92)] = 2078,
  [SMALL_STATE(93)] = 2083,
  [SMALL_STATE(94)] = 2090,
  [SMALL_STATE(95)] = 2094,
  [SMALL_STATE(96)] = 2098,
  [SMALL_STATE(97)] = 2102,
  [SMALL_STATE(98)] = 2106,
  [SMALL_STATE(99)] = 2110,
  [SMALL_STATE(100)] = 2114,
  [SMALL_STATE(101)] = 2118,
  [SMALL_STATE(102)] = 2122,
  [SMALL_STATE(103)] = 2126,
  [SMALL_STATE(104)] = 2130,
  [SMALL_STATE(105)] = 2134,
  [SMALL_STATE(106)] = 2138,
  [SMALL_STATE(107)] = 2142,
  [SMALL_STATE(108)] = 2146,
  [SMALL_STATE(109)] = 2150,
  [SMALL_STATE(110)] = 2154,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_order_by, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_limit, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skip, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_skip, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_where, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_statement, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2), SHIFT_REPEAT(50),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2), SHIFT_REPEAT(43),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2), SHIFT_REPEAT(45),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2), SHIFT_REPEAT(4),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2), SHIFT_REPEAT(46),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2), SHIFT_REPEAT(8),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2), SHIFT_REPEAT(9),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2), SHIFT_REPEAT(5),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2), SHIFT_REPEAT(6),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_invalid_statement_repeat1, 2), SHIFT_REPEAT(7),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_object_entry, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_object_entry, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(24),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(87),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(87),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(25),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(22),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(66),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(109),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_parts, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_access, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varargs, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varargs, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_varargs_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_varargs_repeat1, 2), SHIFT_REPEAT(31),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delete, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skip, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_create, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2), SHIFT_REPEAT(16),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2), SHIFT_REPEAT(12),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2), SHIFT_REPEAT(15),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_repeat1, 2), SHIFT_REPEAT(14),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(17),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_name_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_name_repeat1, 2), SHIFT_REPEAT(99),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_define_field_statement, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_define_field_statement, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_entry, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_table_statement, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_field_statement, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_table_statement, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 3),
  [416] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__define_statement, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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

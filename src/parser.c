#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 219
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_syntax = 1,
  anon_sym_EQ = 2,
  anon_sym_import = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_info = 6,
  anon_sym_type = 7,
  anon_sym_bool = 8,
  anon_sym_uint8 = 9,
  anon_sym_uint16 = 10,
  anon_sym_uint32 = 11,
  anon_sym_uint64 = 12,
  anon_sym_int8 = 13,
  anon_sym_int16 = 14,
  anon_sym_int32 = 15,
  anon_sym_int64 = 16,
  anon_sym_float32 = 17,
  anon_sym_float64 = 18,
  anon_sym_complex64 = 19,
  anon_sym_complex128 = 20,
  anon_sym_string = 21,
  anon_sym_int = 22,
  anon_sym_uint = 23,
  anon_sym_uintptr = 24,
  anon_sym_byte = 25,
  anon_sym_rune = 26,
  anon_sym_time_DOTTime = 27,
  anon_sym_STAR = 28,
  anon_sym_interface = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_map = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_struct = 35,
  anon_sym_DOT = 36,
  anon_sym_ATserver = 37,
  anon_sym_service = 38,
  anon_sym_ATdoc = 39,
  anon_sym_AThandler = 40,
  anon_sym_returns = 41,
  anon_sym_SEMI = 42,
  anon_sym_COLON = 43,
  anon_sym_COMMA = 44,
  anon_sym_as = 45,
  sym_VALUE = 46,
  sym_RAW_STRING = 47,
  sym_comment = 48,
  sym_IDENT = 49,
  sym_NUMBER = 50,
  anon_sym_ns = 51,
  anon_sym_us = 52,
  anon_sym_u00b5s = 53,
  anon_sym_ms = 54,
  anon_sym_s = 55,
  anon_sym_m = 56,
  anon_sym_h = 57,
  sym_HTTPMETHOD = 58,
  anon_sym_SLASH = 59,
  anon_sym_SLASH_COLON = 60,
  sym_api = 61,
  sym_syntaxLit = 62,
  sym_apiBody = 63,
  sym_importStatement = 64,
  sym_importSpec = 65,
  sym_importLit = 66,
  sym_importGroup = 67,
  sym_infoStatement = 68,
  sym_typeStatement = 69,
  sym_typeGroupSpec = 70,
  sym_typeGroupAlias = 71,
  sym_typeSingleSpec = 72,
  sym_typeAlias = 73,
  sym_typeStruct = 74,
  sym_typeFiled = 75,
  sym_normalField = 76,
  sym_fieldType = 77,
  sym_GOTYPE = 78,
  sym_anonymousField = 79,
  sym_normalFieldType = 80,
  sym_starFieldType = 81,
  sym_mapFieldType = 82,
  sym_arrayOrSliceType = 83,
  sym_structType = 84,
  sym_structNameId = 85,
  sym_fieldName = 86,
  sym_referenceId = 87,
  sym_tag = 88,
  sym_body = 89,
  sym_serviceStatement = 90,
  sym_serviceServerSpec = 91,
  sym_serviceSpec = 92,
  sym_serviceName = 93,
  sym_serviceBody = 94,
  sym_serviceDoc = 95,
  sym_serviceDocNew = 96,
  sym_serviceHandler = 97,
  sym_serviceHandlerNew = 98,
  sym_serviceRoute = 99,
  sym_httpRoute = 100,
  sym_identPair = 101,
  sym_handlerPair = 102,
  sym_identValue = 103,
  sym_handlerValue = 104,
  sym_importValue = 105,
  sym_docValue = 106,
  sym_pair = 107,
  sym_key = 108,
  sym_DURATION = 109,
  sym_PATH = 110,
  aux_sym_api_repeat1 = 111,
  aux_sym_importStatement_repeat1 = 112,
  aux_sym_importGroup_repeat1 = 113,
  aux_sym_typeGroupSpec_repeat1 = 114,
  aux_sym_arrayOrSliceType_repeat1 = 115,
  aux_sym_structType_repeat1 = 116,
  aux_sym_serviceSpec_repeat1 = 117,
  aux_sym_identPair_repeat1 = 118,
  aux_sym_handlerPair_repeat1 = 119,
  aux_sym_identValue_repeat1 = 120,
  aux_sym_pair_repeat1 = 121,
  aux_sym_PATH_repeat1 = 122,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_import] = "import",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_info] = "info",
  [anon_sym_type] = "type",
  [anon_sym_bool] = "bool",
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_complex64] = "complex64",
  [anon_sym_complex128] = "complex128",
  [anon_sym_string] = "string",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_uintptr] = "uintptr",
  [anon_sym_byte] = "byte",
  [anon_sym_rune] = "rune",
  [anon_sym_time_DOTTime] = "time.Time",
  [anon_sym_STAR] = "*",
  [anon_sym_interface] = "interface",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_map] = "map",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_struct] = "struct",
  [anon_sym_DOT] = ".",
  [anon_sym_ATserver] = "@server",
  [anon_sym_service] = "service",
  [anon_sym_ATdoc] = "@doc",
  [anon_sym_AThandler] = "@handler",
  [anon_sym_returns] = "returns",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_as] = "as",
  [sym_VALUE] = "VALUE",
  [sym_RAW_STRING] = "RAW_STRING",
  [sym_comment] = "comment",
  [sym_IDENT] = "IDENT",
  [sym_NUMBER] = "NUMBER",
  [anon_sym_ns] = "ns",
  [anon_sym_us] = "us",
  [anon_sym_u00b5s] = "\u00b5s",
  [anon_sym_ms] = "ms",
  [anon_sym_s] = "s",
  [anon_sym_m] = "m",
  [anon_sym_h] = "h",
  [sym_HTTPMETHOD] = "HTTPMETHOD",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_COLON] = "/:",
  [sym_api] = "api",
  [sym_syntaxLit] = "syntaxLit",
  [sym_apiBody] = "apiBody",
  [sym_importStatement] = "importStatement",
  [sym_importSpec] = "importSpec",
  [sym_importLit] = "importLit",
  [sym_importGroup] = "importGroup",
  [sym_infoStatement] = "infoStatement",
  [sym_typeStatement] = "typeStatement",
  [sym_typeGroupSpec] = "typeGroupSpec",
  [sym_typeGroupAlias] = "typeGroupAlias",
  [sym_typeSingleSpec] = "typeSingleSpec",
  [sym_typeAlias] = "typeAlias",
  [sym_typeStruct] = "typeStruct",
  [sym_typeFiled] = "typeFiled",
  [sym_normalField] = "normalField",
  [sym_fieldType] = "fieldType",
  [sym_GOTYPE] = "GOTYPE",
  [sym_anonymousField] = "anonymousField",
  [sym_normalFieldType] = "normalFieldType",
  [sym_starFieldType] = "starFieldType",
  [sym_mapFieldType] = "mapFieldType",
  [sym_arrayOrSliceType] = "arrayOrSliceType",
  [sym_structType] = "structType",
  [sym_structNameId] = "structNameId",
  [sym_fieldName] = "fieldName",
  [sym_referenceId] = "referenceId",
  [sym_tag] = "tag",
  [sym_body] = "body",
  [sym_serviceStatement] = "serviceStatement",
  [sym_serviceServerSpec] = "serviceServerSpec",
  [sym_serviceSpec] = "serviceSpec",
  [sym_serviceName] = "serviceName",
  [sym_serviceBody] = "serviceBody",
  [sym_serviceDoc] = "serviceDoc",
  [sym_serviceDocNew] = "serviceDocNew",
  [sym_serviceHandler] = "serviceHandler",
  [sym_serviceHandlerNew] = "serviceHandlerNew",
  [sym_serviceRoute] = "serviceRoute",
  [sym_httpRoute] = "httpRoute",
  [sym_identPair] = "identPair",
  [sym_handlerPair] = "handlerPair",
  [sym_identValue] = "identValue",
  [sym_handlerValue] = "handlerValue",
  [sym_importValue] = "importValue",
  [sym_docValue] = "docValue",
  [sym_pair] = "pair",
  [sym_key] = "key",
  [sym_DURATION] = "DURATION",
  [sym_PATH] = "PATH",
  [aux_sym_api_repeat1] = "api_repeat1",
  [aux_sym_importStatement_repeat1] = "importStatement_repeat1",
  [aux_sym_importGroup_repeat1] = "importGroup_repeat1",
  [aux_sym_typeGroupSpec_repeat1] = "typeGroupSpec_repeat1",
  [aux_sym_arrayOrSliceType_repeat1] = "arrayOrSliceType_repeat1",
  [aux_sym_structType_repeat1] = "structType_repeat1",
  [aux_sym_serviceSpec_repeat1] = "serviceSpec_repeat1",
  [aux_sym_identPair_repeat1] = "identPair_repeat1",
  [aux_sym_handlerPair_repeat1] = "handlerPair_repeat1",
  [aux_sym_identValue_repeat1] = "identValue_repeat1",
  [aux_sym_pair_repeat1] = "pair_repeat1",
  [aux_sym_PATH_repeat1] = "PATH_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_complex64] = anon_sym_complex64,
  [anon_sym_complex128] = anon_sym_complex128,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_uintptr] = anon_sym_uintptr,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_rune] = anon_sym_rune,
  [anon_sym_time_DOTTime] = anon_sym_time_DOTTime,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_ATserver] = anon_sym_ATserver,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_ATdoc] = anon_sym_ATdoc,
  [anon_sym_AThandler] = anon_sym_AThandler,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_as] = anon_sym_as,
  [sym_VALUE] = sym_VALUE,
  [sym_RAW_STRING] = sym_RAW_STRING,
  [sym_comment] = sym_comment,
  [sym_IDENT] = sym_IDENT,
  [sym_NUMBER] = sym_NUMBER,
  [anon_sym_ns] = anon_sym_ns,
  [anon_sym_us] = anon_sym_us,
  [anon_sym_u00b5s] = anon_sym_u00b5s,
  [anon_sym_ms] = anon_sym_ms,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_m] = anon_sym_m,
  [anon_sym_h] = anon_sym_h,
  [sym_HTTPMETHOD] = sym_HTTPMETHOD,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_COLON] = anon_sym_SLASH_COLON,
  [sym_api] = sym_api,
  [sym_syntaxLit] = sym_syntaxLit,
  [sym_apiBody] = sym_apiBody,
  [sym_importStatement] = sym_importStatement,
  [sym_importSpec] = sym_importSpec,
  [sym_importLit] = sym_importLit,
  [sym_importGroup] = sym_importGroup,
  [sym_infoStatement] = sym_infoStatement,
  [sym_typeStatement] = sym_typeStatement,
  [sym_typeGroupSpec] = sym_typeGroupSpec,
  [sym_typeGroupAlias] = sym_typeGroupAlias,
  [sym_typeSingleSpec] = sym_typeSingleSpec,
  [sym_typeAlias] = sym_typeAlias,
  [sym_typeStruct] = sym_typeStruct,
  [sym_typeFiled] = sym_typeFiled,
  [sym_normalField] = sym_normalField,
  [sym_fieldType] = sym_fieldType,
  [sym_GOTYPE] = sym_GOTYPE,
  [sym_anonymousField] = sym_anonymousField,
  [sym_normalFieldType] = sym_normalFieldType,
  [sym_starFieldType] = sym_starFieldType,
  [sym_mapFieldType] = sym_mapFieldType,
  [sym_arrayOrSliceType] = sym_arrayOrSliceType,
  [sym_structType] = sym_structType,
  [sym_structNameId] = sym_structNameId,
  [sym_fieldName] = sym_fieldName,
  [sym_referenceId] = sym_referenceId,
  [sym_tag] = sym_tag,
  [sym_body] = sym_body,
  [sym_serviceStatement] = sym_serviceStatement,
  [sym_serviceServerSpec] = sym_serviceServerSpec,
  [sym_serviceSpec] = sym_serviceSpec,
  [sym_serviceName] = sym_serviceName,
  [sym_serviceBody] = sym_serviceBody,
  [sym_serviceDoc] = sym_serviceDoc,
  [sym_serviceDocNew] = sym_serviceDocNew,
  [sym_serviceHandler] = sym_serviceHandler,
  [sym_serviceHandlerNew] = sym_serviceHandlerNew,
  [sym_serviceRoute] = sym_serviceRoute,
  [sym_httpRoute] = sym_httpRoute,
  [sym_identPair] = sym_identPair,
  [sym_handlerPair] = sym_handlerPair,
  [sym_identValue] = sym_identValue,
  [sym_handlerValue] = sym_handlerValue,
  [sym_importValue] = sym_importValue,
  [sym_docValue] = sym_docValue,
  [sym_pair] = sym_pair,
  [sym_key] = sym_key,
  [sym_DURATION] = sym_DURATION,
  [sym_PATH] = sym_PATH,
  [aux_sym_api_repeat1] = aux_sym_api_repeat1,
  [aux_sym_importStatement_repeat1] = aux_sym_importStatement_repeat1,
  [aux_sym_importGroup_repeat1] = aux_sym_importGroup_repeat1,
  [aux_sym_typeGroupSpec_repeat1] = aux_sym_typeGroupSpec_repeat1,
  [aux_sym_arrayOrSliceType_repeat1] = aux_sym_arrayOrSliceType_repeat1,
  [aux_sym_structType_repeat1] = aux_sym_structType_repeat1,
  [aux_sym_serviceSpec_repeat1] = aux_sym_serviceSpec_repeat1,
  [aux_sym_identPair_repeat1] = aux_sym_identPair_repeat1,
  [aux_sym_handlerPair_repeat1] = aux_sym_handlerPair_repeat1,
  [aux_sym_identValue_repeat1] = aux_sym_identValue_repeat1,
  [aux_sym_pair_repeat1] = aux_sym_pair_repeat1,
  [aux_sym_PATH_repeat1] = aux_sym_PATH_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
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
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uintptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rune] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time_DOTTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
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
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATserver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdoc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AThandler] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_VALUE] = {
    .visible = true,
    .named = true,
  },
  [sym_RAW_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_IDENT] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMBER] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_us] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u00b5s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [sym_HTTPMETHOD] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_api] = {
    .visible = true,
    .named = true,
  },
  [sym_syntaxLit] = {
    .visible = true,
    .named = true,
  },
  [sym_apiBody] = {
    .visible = true,
    .named = true,
  },
  [sym_importStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_importSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_importLit] = {
    .visible = true,
    .named = true,
  },
  [sym_importGroup] = {
    .visible = true,
    .named = true,
  },
  [sym_infoStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_typeStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_typeGroupSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_typeGroupAlias] = {
    .visible = true,
    .named = true,
  },
  [sym_typeSingleSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_typeAlias] = {
    .visible = true,
    .named = true,
  },
  [sym_typeStruct] = {
    .visible = true,
    .named = true,
  },
  [sym_typeFiled] = {
    .visible = true,
    .named = true,
  },
  [sym_normalField] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldType] = {
    .visible = true,
    .named = true,
  },
  [sym_GOTYPE] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymousField] = {
    .visible = true,
    .named = true,
  },
  [sym_normalFieldType] = {
    .visible = true,
    .named = true,
  },
  [sym_starFieldType] = {
    .visible = true,
    .named = true,
  },
  [sym_mapFieldType] = {
    .visible = true,
    .named = true,
  },
  [sym_arrayOrSliceType] = {
    .visible = true,
    .named = true,
  },
  [sym_structType] = {
    .visible = true,
    .named = true,
  },
  [sym_structNameId] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldName] = {
    .visible = true,
    .named = true,
  },
  [sym_referenceId] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceServerSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceSpec] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceName] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceBody] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceDoc] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceDocNew] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceHandler] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceHandlerNew] = {
    .visible = true,
    .named = true,
  },
  [sym_serviceRoute] = {
    .visible = true,
    .named = true,
  },
  [sym_httpRoute] = {
    .visible = true,
    .named = true,
  },
  [sym_identPair] = {
    .visible = true,
    .named = true,
  },
  [sym_handlerPair] = {
    .visible = true,
    .named = true,
  },
  [sym_identValue] = {
    .visible = true,
    .named = true,
  },
  [sym_handlerValue] = {
    .visible = true,
    .named = true,
  },
  [sym_importValue] = {
    .visible = true,
    .named = true,
  },
  [sym_docValue] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_DURATION] = {
    .visible = true,
    .named = true,
  },
  [sym_PATH] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_api_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_importStatement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_importGroup_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typeGroupSpec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arrayOrSliceType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_structType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_serviceSpec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identPair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_handlerPair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identValue_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_PATH_repeat1] = {
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
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
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
  [35] = 33,
  [36] = 36,
  [37] = 32,
  [38] = 34,
  [39] = 36,
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
  [78] = 53,
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
  [91] = 40,
  [92] = 92,
  [93] = 47,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 41,
  [98] = 98,
  [99] = 44,
  [100] = 100,
  [101] = 54,
  [102] = 57,
  [103] = 59,
  [104] = 104,
  [105] = 61,
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
  [116] = 87,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 76,
  [121] = 121,
  [122] = 122,
  [123] = 62,
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
  [134] = 50,
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
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 158,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 192,
  [208] = 208,
  [209] = 209,
  [210] = 189,
  [211] = 211,
  [212] = 181,
  [213] = 173,
  [214] = 193,
  [215] = 198,
  [216] = 196,
  [217] = 217,
  [218] = 168,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(140);
      ADVANCE_MAP(
        '"', 2,
        '(', 144,
        ')', 145,
        '*', 187,
        ',', 205,
        '.', 197,
        '/', 290,
        ':', 204,
        ';', 203,
        '=', 142,
        '@', 43,
        '[', 193,
        ']', 194,
        '`', 27,
        'a', 115,
        'b', 97,
        'c', 91,
        'f', 74,
        'h', 287,
        'i', 78,
        'm', 285,
        'n', 116,
        'r', 55,
        's', 283,
        't', 68,
        'u', 69,
        '{', 190,
        '}', 191,
        0xb5, 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '(', 144,
        ')', 145,
        '*', 187,
        ',', 205,
        '.', 197,
        '/', 290,
        ']', 194,
        '`', 27,
        '}', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        ')', 145,
        '*', 187,
        '/', 7,
        '[', 193,
        'b', 252,
        'c', 251,
        'f', 242,
        'i', 250,
        'r', 272,
        's', 263,
        't', 237,
        'u', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ')', 145,
        '/', 7,
        'h', 288,
        'm', 286,
        'n', 261,
        's', 284,
        'u', 262,
        0xb5, 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '*', 187,
        '.', 197,
        '/', 7,
        '[', 193,
        'b', 252,
        'c', 251,
        'f', 242,
        'i', 248,
        'm', 225,
        'r', 272,
        's', 271,
        't', 237,
        'u', 240,
        '{', 190,
        '}', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '*', 187,
        '/', 7,
        '[', 193,
        'b', 252,
        'c', 251,
        'f', 242,
        'i', 248,
        'm', 225,
        'r', 272,
        's', 263,
        't', 237,
        'u', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(210);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '/', 7,
        '=', 142,
        'b', 252,
        'c', 251,
        'f', 242,
        'i', 248,
        'r', 272,
        's', 271,
        't', 237,
        'u', 240,
        '{', 190,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '/', 7,
        'b', 252,
        'c', 251,
        'f', 242,
        'i', 248,
        'r', 272,
        's', 263,
        't', 237,
        'u', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(17);
      if (lookahead == '6') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(162);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(154);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(166);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(164);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(168);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(160);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(152);
      END_STATE();
    case 25:
      if (lookahead == '8') ADVANCE(172);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == '`') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(289);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 's') ADVANCE(278);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 136:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 137:
      if (lookahead == 'x') ADVANCE(13);
      END_STATE();
    case 138:
      if (lookahead == 'x') ADVANCE(141);
      END_STATE();
    case 139:
      if (eof) ADVANCE(140);
      ADVANCE_MAP(
        '"', 2,
        ')', 145,
        '.', 197,
        '/', 7,
        '@', 114,
        ']', 194,
        'a', 115,
        'c', 98,
        'd', 62,
        'g', 58,
        'h', 56,
        'i', 79,
        'o', 103,
        'p', 33,
        's', 61,
        't', 113,
        '{', 190,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_complex64);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_complex64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_complex128);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_complex128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == '8') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(222);
      if (lookahead == '3') ADVANCE(213);
      if (lookahead == '6') ADVANCE(218);
      if (lookahead == '8') ADVANCE(159);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(222);
      if (lookahead == '3') ADVANCE(213);
      if (lookahead == '6') ADVANCE(218);
      if (lookahead == '8') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(150);
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(223);
      if (lookahead == '3') ADVANCE(214);
      if (lookahead == '6') ADVANCE(219);
      if (lookahead == '8') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_uintptr);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_uintptr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_rune);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_rune);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_time_DOTTime);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_map);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATserver);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATdoc);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_AThandler);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_VALUE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == '6') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '3') ADVANCE(215);
      if (lookahead == '6') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '6') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '6') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '8') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'm') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'm') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == 'y') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'p') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'x') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_ns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_us);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_u00b5s);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_HTTPMETHOD);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ':') ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_SLASH_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 139},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 139},
  [27] = {.lex_state = 139},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 139},
  [30] = {.lex_state = 139},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 139},
  [43] = {.lex_state = 139},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 139},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 139},
  [54] = {.lex_state = 139},
  [55] = {.lex_state = 139},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 139},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 139},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 139},
  [62] = {.lex_state = 139},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 139},
  [65] = {.lex_state = 139},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 139},
  [68] = {.lex_state = 139},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 139},
  [71] = {.lex_state = 139},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 139},
  [74] = {.lex_state = 139},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 139},
  [77] = {.lex_state = 139},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 139},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 139},
  [82] = {.lex_state = 139},
  [83] = {.lex_state = 139},
  [84] = {.lex_state = 139},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 139},
  [87] = {.lex_state = 139},
  [88] = {.lex_state = 139},
  [89] = {.lex_state = 139},
  [90] = {.lex_state = 139},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 139},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 139},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 139},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 139},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 139},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 139},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 139},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 139},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_complex64] = ACTIONS(1),
    [anon_sym_complex128] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_uintptr] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_rune] = ACTIONS(1),
    [anon_sym_time_DOTTime] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_ATserver] = ACTIONS(1),
    [anon_sym_ATdoc] = ACTIONS(1),
    [anon_sym_AThandler] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_VALUE] = ACTIONS(1),
    [sym_RAW_STRING] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_NUMBER] = ACTIONS(1),
    [anon_sym_ns] = ACTIONS(1),
    [anon_sym_us] = ACTIONS(1),
    [anon_sym_u00b5s] = ACTIONS(1),
    [anon_sym_ms] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_m] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_api] = STATE(208),
    [sym_syntaxLit] = STATE(30),
    [sym_apiBody] = STATE(26),
    [sym_importStatement] = STATE(26),
    [sym_importSpec] = STATE(42),
    [sym_importLit] = STATE(64),
    [sym_importGroup] = STATE(64),
    [sym_infoStatement] = STATE(26),
    [sym_typeStatement] = STATE(74),
    [sym_typeGroupSpec] = STATE(77),
    [sym_typeSingleSpec] = STATE(77),
    [sym_typeAlias] = STATE(79),
    [sym_typeStruct] = STATE(79),
    [sym_serviceStatement] = STATE(74),
    [sym_serviceServerSpec] = STATE(157),
    [sym_serviceSpec] = STATE(81),
    [aux_sym_api_repeat1] = STATE(26),
    [aux_sym_importStatement_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_syntax] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_info] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(13),
    [anon_sym_ATserver] = ACTIONS(15),
    [anon_sym_service] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(6), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(92), 1,
      sym_fieldType,
    STATE(103), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [59] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(37), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(41), 1,
      anon_sym_map,
    ACTIONS(43), 1,
      sym_IDENT,
    STATE(5), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(214), 1,
      sym_fieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [118] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(37), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(41), 1,
      anon_sym_map,
    ACTIONS(43), 1,
      sym_IDENT,
    STATE(5), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(193), 1,
      sym_fieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [177] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(37), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(41), 1,
      anon_sym_map,
    ACTIONS(43), 1,
      sym_IDENT,
    STATE(8), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(92), 1,
      sym_fieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [236] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_time_DOTTime,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(54), 1,
      anon_sym_interface,
    ACTIONS(57), 1,
      anon_sym_map,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      sym_IDENT,
    STATE(6), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(92), 1,
      sym_fieldType,
    STATE(103), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(45), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [295] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(2), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(94), 1,
      sym_fieldType,
    STATE(103), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [354] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      anon_sym_time_DOTTime,
    ACTIONS(72), 1,
      anon_sym_STAR,
    ACTIONS(75), 1,
      anon_sym_interface,
    ACTIONS(78), 1,
      anon_sym_map,
    ACTIONS(81), 1,
      sym_IDENT,
    STATE(8), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(92), 1,
      sym_fieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(66), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [413] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(27), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(2), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(107), 1,
      sym_fieldType,
    STATE(103), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [472] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(37), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(41), 1,
      anon_sym_map,
    ACTIONS(43), 1,
      sym_IDENT,
    STATE(5), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(107), 1,
      sym_fieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(95), 4,
      sym_normalFieldType,
      sym_starFieldType,
      sym_mapFieldType,
      sym_arrayOrSliceType,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [531] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      anon_sym_struct,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      sym_IDENT,
    ACTIONS(86), 2,
      anon_sym_time_DOTTime,
      anon_sym_LBRACK,
    ACTIONS(84), 21,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
      anon_sym_interface,
      anon_sym_map,
  [580] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(43), 1,
      sym_IDENT,
    ACTIONS(102), 1,
      anon_sym_EQ,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_struct,
    STATE(68), 1,
      sym_normalFieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [630] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(31), 1,
      sym_IDENT,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_struct,
    STATE(159), 1,
      sym_normalFieldType,
    STATE(103), 2,
      sym_GOTYPE,
      sym_referenceId,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [677] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    STATE(197), 1,
      sym_body,
    STATE(206), 1,
      sym_GOTYPE,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [723] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      sym_body,
    STATE(206), 1,
      sym_GOTYPE,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [769] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym_body,
    STATE(206), 1,
      sym_GOTYPE,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [815] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      sym_body,
    STATE(206), 1,
      sym_GOTYPE,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [861] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(98), 1,
      sym_normalFieldType,
    STATE(103), 2,
      sym_GOTYPE,
      sym_referenceId,
    ACTIONS(19), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      anon_sym_time_DOTTime,
      anon_sym_STAR,
      anon_sym_LBRACK,
    ACTIONS(126), 22,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
      anon_sym_interface,
      anon_sym_map,
      sym_IDENT,
  [935] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(43), 1,
      sym_IDENT,
    STATE(98), 1,
      sym_normalFieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [976] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(43), 1,
      sym_IDENT,
    STATE(73), 1,
      sym_normalFieldType,
    STATE(59), 2,
      sym_GOTYPE,
      sym_referenceId,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [1017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      anon_sym_time_DOTTime,
      anon_sym_STAR,
      anon_sym_LBRACK,
    ACTIONS(130), 22,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
      anon_sym_interface,
      anon_sym_map,
      sym_IDENT,
  [1050] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_EQ,
      anon_sym_time_DOTTime,
      anon_sym_LBRACE,
    ACTIONS(95), 22,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
      anon_sym_interface,
      anon_sym_struct,
      sym_IDENT,
  [1083] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(134), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      sym_IDENT,
    STATE(176), 1,
      sym_GOTYPE,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [1120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(138), 1,
      sym_IDENT,
    STATE(180), 1,
      sym_GOTYPE,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [1154] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_info,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_ATserver,
    ACTIONS(17), 1,
      anon_sym_service,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_serviceSpec,
    STATE(157), 1,
      sym_serviceServerSpec,
    STATE(42), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(64), 2,
      sym_importLit,
      sym_importGroup,
    STATE(74), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(77), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(79), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(29), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1208] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_info,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_ATserver,
    ACTIONS(17), 1,
      anon_sym_service,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_serviceSpec,
    STATE(157), 1,
      sym_serviceServerSpec,
    STATE(42), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(64), 2,
      sym_importLit,
      sym_importGroup,
    STATE(74), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(77), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(79), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(29), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(144), 1,
      sym_IDENT,
    STATE(185), 1,
      sym_GOTYPE,
    ACTIONS(33), 19,
      anon_sym_bool,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_complex64,
      anon_sym_complex128,
      anon_sym_string,
      anon_sym_int,
      anon_sym_uint,
      anon_sym_uintptr,
      anon_sym_byte,
      anon_sym_rune,
  [1296] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      anon_sym_import,
    ACTIONS(151), 1,
      anon_sym_info,
    ACTIONS(154), 1,
      anon_sym_type,
    ACTIONS(157), 1,
      anon_sym_ATserver,
    ACTIONS(160), 1,
      anon_sym_service,
    STATE(81), 1,
      sym_serviceSpec,
    STATE(157), 1,
      sym_serviceServerSpec,
    STATE(42), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(64), 2,
      sym_importLit,
      sym_importGroup,
    STATE(74), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(77), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(79), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(29), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1350] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_info,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(15), 1,
      anon_sym_ATserver,
    ACTIONS(17), 1,
      anon_sym_service,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_serviceSpec,
    STATE(157), 1,
      sym_serviceServerSpec,
    STATE(42), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(64), 2,
      sym_importLit,
      sym_importGroup,
    STATE(74), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(77), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(79), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(27), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1404] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      sym_IDENT,
    STATE(7), 1,
      sym_fieldName,
    STATE(143), 1,
      sym_referenceId,
    STATE(161), 1,
      sym_structNameId,
    STATE(31), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(145), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1435] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      sym_IDENT,
    STATE(7), 1,
      sym_fieldName,
    STATE(143), 1,
      sym_referenceId,
    STATE(161), 1,
      sym_structNameId,
    STATE(31), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(145), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1466] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      sym_IDENT,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_fieldName,
    STATE(143), 1,
      sym_referenceId,
    STATE(161), 1,
      sym_structNameId,
    STATE(31), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(145), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1497] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      sym_IDENT,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_fieldName,
    STATE(143), 1,
      sym_referenceId,
    STATE(161), 1,
      sym_structNameId,
    STATE(35), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(145), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1528] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      sym_IDENT,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_fieldName,
    STATE(143), 1,
      sym_referenceId,
    STATE(161), 1,
      sym_structNameId,
    STATE(31), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(145), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1559] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      sym_IDENT,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_fieldName,
    STATE(143), 1,
      sym_referenceId,
    STATE(161), 1,
      sym_structNameId,
    STATE(37), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(145), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1590] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      sym_IDENT,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_fieldName,
    STATE(143), 1,
      sym_referenceId,
    STATE(161), 1,
      sym_structNameId,
    STATE(31), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(145), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1621] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      sym_IDENT,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_fieldName,
    STATE(143), 1,
      sym_referenceId,
    STATE(161), 1,
      sym_structNameId,
    STATE(33), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(145), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1652] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      sym_IDENT,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_fieldName,
    STATE(143), 1,
      sym_referenceId,
    STATE(161), 1,
      sym_structNameId,
    STATE(32), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(145), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_SLASH_COLON,
    STATE(41), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(187), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
  [1705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SLASH,
    ACTIONS(198), 1,
      anon_sym_SLASH_COLON,
    STATE(41), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(193), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
  [1727] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_import,
    STATE(43), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(64), 2,
      sym_importLit,
      sym_importGroup,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [1749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_import,
    STATE(43), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(64), 2,
      sym_importLit,
      sym_importGroup,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [1771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_SLASH_COLON,
    STATE(41), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(211), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
  [1793] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      anon_sym_ATserver,
    ACTIONS(217), 1,
      anon_sym_ATdoc,
    ACTIONS(219), 1,
      anon_sym_AThandler,
    STATE(49), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(135), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(138), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_SLASH_COLON,
    STATE(40), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(221), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
  [1843] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(191), 1,
      anon_sym_SLASH_COLON,
    STATE(44), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(187), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
  [1865] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_ATserver,
    ACTIONS(228), 1,
      anon_sym_ATdoc,
    ACTIONS(231), 1,
      anon_sym_AThandler,
    STATE(48), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(135), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(138), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1893] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_ATserver,
    ACTIONS(217), 1,
      anon_sym_ATdoc,
    ACTIONS(219), 1,
      anon_sym_AThandler,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(48), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(135), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(138), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(193), 8,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
      anon_sym_SLASH_COLON,
  [1938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_as,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_VALUE,
  [1955] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(244), 1,
      sym_IDENT,
    ACTIONS(248), 1,
      anon_sym_u00b5s,
    ACTIONS(246), 6,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
      anon_sym_h,
  [1976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [1992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_VALUE,
  [2020] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_IDENT,
    ACTIONS(258), 1,
      sym_NUMBER,
    ACTIONS(260), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_SLASH_COLON,
    STATE(150), 1,
      aux_sym_identValue_repeat1,
    STATE(167), 3,
      sym_identValue,
      sym_DURATION,
      sym_PATH,
  [2044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
  [2070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2083] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_returns,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(272), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_returns,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(282), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2167] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_VALUE,
    ACTIONS(294), 1,
      sym_IDENT,
    STATE(110), 1,
      aux_sym_pair_repeat1,
    STATE(174), 1,
      sym_docValue,
    STATE(183), 1,
      sym_pair,
    STATE(199), 1,
      sym_key,
  [2189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_returns,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(300), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    ACTIONS(312), 1,
      sym_IDENT,
    STATE(13), 1,
      sym_structNameId,
    STATE(72), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      sym_IDENT,
    STATE(13), 1,
      sym_structNameId,
    STATE(85), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(93), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2363] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(336), 1,
      anon_sym_SLASH_COLON,
    STATE(91), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(329), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2431] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_IDENT,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_structNameId,
    STATE(72), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(336), 1,
      anon_sym_SLASH_COLON,
    STATE(97), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2537] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(336), 1,
      anon_sym_SLASH_COLON,
    STATE(99), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_RAW_STRING,
    STATE(137), 1,
      sym_tag,
    ACTIONS(360), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(366), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2593] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SLASH,
    ACTIONS(373), 1,
      anon_sym_SLASH_COLON,
    STATE(97), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(193), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2621] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_SLASH,
    ACTIONS(336), 1,
      anon_sym_SLASH_COLON,
    STATE(97), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(211), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    ACTIONS(378), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(382), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(300), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_SEMI,
    ACTIONS(388), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2745] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_IDENT,
    STATE(128), 1,
      aux_sym_handlerPair_repeat1,
    STATE(170), 1,
      sym_handlerPair,
    STATE(171), 1,
      sym_key,
  [2761] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_IDENT,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_pair_repeat1,
    STATE(199), 1,
      sym_key,
  [2777] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_IDENT,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(398), 1,
      anon_sym_SLASH_COLON,
    STATE(58), 1,
      sym_PATH,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_IDENT,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_structNameId,
    STATE(86), 1,
      sym_structType,
  [2819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_IDENT,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_identPair_repeat1,
    STATE(194), 1,
      sym_key,
  [2835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(408), 1,
      sym_VALUE,
    STATE(115), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_IDENT,
    STATE(110), 1,
      aux_sym_pair_repeat1,
    STATE(199), 1,
      sym_key,
    STATE(200), 1,
      sym_pair,
  [2875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_IDENT,
    STATE(114), 1,
      aux_sym_identPair_repeat1,
    STATE(194), 1,
      sym_key,
    STATE(195), 1,
      sym_identPair,
  [2891] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      sym_IDENT,
    STATE(119), 1,
      aux_sym_pair_repeat1,
    STATE(199), 1,
      sym_key,
  [2907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2977] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    ACTIONS(420), 1,
      sym_IDENT,
    STATE(127), 1,
      aux_sym_identPair_repeat1,
    STATE(194), 1,
      sym_key,
  [2993] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_IDENT,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_handlerPair_repeat1,
    STATE(171), 1,
      sym_key,
  [3009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [3019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [3029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      sym_VALUE,
    STATE(115), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [3043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_VALUE,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(131), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [3057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [3067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    ACTIONS(193), 3,
      anon_sym_RPAREN,
      sym_IDENT,
      anon_sym_SLASH_COLON,
  [3079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_ATserver,
    ACTIONS(219), 1,
      anon_sym_AThandler,
    STATE(147), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [3093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      sym_IDENT,
    STATE(136), 1,
      aux_sym_handlerPair_repeat1,
    STATE(171), 1,
      sym_key,
  [3109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_HTTPMETHOD,
    STATE(60), 1,
      sym_httpRoute,
    STATE(112), 1,
      sym_serviceRoute,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_VALUE,
    ACTIONS(446), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_docValue,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 3,
      anon_sym_RPAREN,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    ACTIONS(452), 1,
      sym_IDENT,
    STATE(142), 1,
      aux_sym_identValue_repeat1,
  [3175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(457), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_VALUE,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_importValue,
  [3217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_HTTPMETHOD,
    STATE(60), 1,
      sym_httpRoute,
    STATE(129), 1,
      sym_serviceRoute,
  [3230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_VALUE,
    ACTIONS(411), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    ACTIONS(469), 1,
      sym_IDENT,
    STATE(142), 1,
      aux_sym_identValue_repeat1,
  [3263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_IDENT,
    STATE(203), 1,
      sym_serviceName,
  [3305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_service,
    STATE(89), 1,
      sym_serviceSpec,
  [3323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_IDENT,
    STATE(139), 1,
      sym_referenceId,
  [3349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(490), 1,
      anon_sym_struct,
  [3359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_IDENT,
    STATE(169), 1,
      sym_handlerValue,
  [3369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    ACTIONS(498), 1,
      sym_NUMBER,
  [3395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_IDENT,
    STATE(151), 1,
      sym_handlerValue,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
  [3420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_HTTPMETHOD,
  [3427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
  [3434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_COLON,
  [3441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
  [3448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_IDENT,
  [3455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
  [3462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_HTTPMETHOD,
  [3469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [3476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
  [3483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_EQ,
  [3490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
  [3497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
  [3504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_IDENT,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
  [3518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [3525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
  [3532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
  [3539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
  [3546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_service,
  [3560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_IDENT,
  [3567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
  [3574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_HTTPMETHOD,
  [3581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
  [3588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_RBRACK,
  [3595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COLON,
  [3602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [3609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
  [3616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
  [3623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
  [3630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COLON,
  [3637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [3644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COLON,
  [3651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym_IDENT,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
  [3665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
  [3672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym_VALUE,
  [3679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [3686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [3693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
  [3707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_IDENT,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LPAREN,
  [3721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_IDENT,
  [3728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_IDENT,
  [3735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
  [3742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
  [3749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 236,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 354,
  [SMALL_STATE(9)] = 413,
  [SMALL_STATE(10)] = 472,
  [SMALL_STATE(11)] = 531,
  [SMALL_STATE(12)] = 580,
  [SMALL_STATE(13)] = 630,
  [SMALL_STATE(14)] = 677,
  [SMALL_STATE(15)] = 723,
  [SMALL_STATE(16)] = 769,
  [SMALL_STATE(17)] = 815,
  [SMALL_STATE(18)] = 861,
  [SMALL_STATE(19)] = 902,
  [SMALL_STATE(20)] = 935,
  [SMALL_STATE(21)] = 976,
  [SMALL_STATE(22)] = 1017,
  [SMALL_STATE(23)] = 1050,
  [SMALL_STATE(24)] = 1083,
  [SMALL_STATE(25)] = 1120,
  [SMALL_STATE(26)] = 1154,
  [SMALL_STATE(27)] = 1208,
  [SMALL_STATE(28)] = 1262,
  [SMALL_STATE(29)] = 1296,
  [SMALL_STATE(30)] = 1350,
  [SMALL_STATE(31)] = 1404,
  [SMALL_STATE(32)] = 1435,
  [SMALL_STATE(33)] = 1466,
  [SMALL_STATE(34)] = 1497,
  [SMALL_STATE(35)] = 1528,
  [SMALL_STATE(36)] = 1559,
  [SMALL_STATE(37)] = 1590,
  [SMALL_STATE(38)] = 1621,
  [SMALL_STATE(39)] = 1652,
  [SMALL_STATE(40)] = 1683,
  [SMALL_STATE(41)] = 1705,
  [SMALL_STATE(42)] = 1727,
  [SMALL_STATE(43)] = 1749,
  [SMALL_STATE(44)] = 1771,
  [SMALL_STATE(45)] = 1793,
  [SMALL_STATE(46)] = 1821,
  [SMALL_STATE(47)] = 1843,
  [SMALL_STATE(48)] = 1865,
  [SMALL_STATE(49)] = 1893,
  [SMALL_STATE(50)] = 1921,
  [SMALL_STATE(51)] = 1938,
  [SMALL_STATE(52)] = 1955,
  [SMALL_STATE(53)] = 1976,
  [SMALL_STATE(54)] = 1992,
  [SMALL_STATE(55)] = 2006,
  [SMALL_STATE(56)] = 2020,
  [SMALL_STATE(57)] = 2044,
  [SMALL_STATE(58)] = 2057,
  [SMALL_STATE(59)] = 2070,
  [SMALL_STATE(60)] = 2083,
  [SMALL_STATE(61)] = 2102,
  [SMALL_STATE(62)] = 2115,
  [SMALL_STATE(63)] = 2127,
  [SMALL_STATE(64)] = 2143,
  [SMALL_STATE(65)] = 2155,
  [SMALL_STATE(66)] = 2167,
  [SMALL_STATE(67)] = 2189,
  [SMALL_STATE(68)] = 2201,
  [SMALL_STATE(69)] = 2213,
  [SMALL_STATE(70)] = 2229,
  [SMALL_STATE(71)] = 2241,
  [SMALL_STATE(72)] = 2253,
  [SMALL_STATE(73)] = 2271,
  [SMALL_STATE(74)] = 2283,
  [SMALL_STATE(75)] = 2295,
  [SMALL_STATE(76)] = 2313,
  [SMALL_STATE(77)] = 2325,
  [SMALL_STATE(78)] = 2337,
  [SMALL_STATE(79)] = 2351,
  [SMALL_STATE(80)] = 2363,
  [SMALL_STATE(81)] = 2383,
  [SMALL_STATE(82)] = 2395,
  [SMALL_STATE(83)] = 2407,
  [SMALL_STATE(84)] = 2419,
  [SMALL_STATE(85)] = 2431,
  [SMALL_STATE(86)] = 2449,
  [SMALL_STATE(87)] = 2461,
  [SMALL_STATE(88)] = 2473,
  [SMALL_STATE(89)] = 2485,
  [SMALL_STATE(90)] = 2497,
  [SMALL_STATE(91)] = 2509,
  [SMALL_STATE(92)] = 2526,
  [SMALL_STATE(93)] = 2537,
  [SMALL_STATE(94)] = 2554,
  [SMALL_STATE(95)] = 2569,
  [SMALL_STATE(96)] = 2580,
  [SMALL_STATE(97)] = 2593,
  [SMALL_STATE(98)] = 2610,
  [SMALL_STATE(99)] = 2621,
  [SMALL_STATE(100)] = 2638,
  [SMALL_STATE(101)] = 2651,
  [SMALL_STATE(102)] = 2662,
  [SMALL_STATE(103)] = 2673,
  [SMALL_STATE(104)] = 2684,
  [SMALL_STATE(105)] = 2697,
  [SMALL_STATE(106)] = 2708,
  [SMALL_STATE(107)] = 2721,
  [SMALL_STATE(108)] = 2732,
  [SMALL_STATE(109)] = 2745,
  [SMALL_STATE(110)] = 2761,
  [SMALL_STATE(111)] = 2777,
  [SMALL_STATE(112)] = 2793,
  [SMALL_STATE(113)] = 2803,
  [SMALL_STATE(114)] = 2819,
  [SMALL_STATE(115)] = 2835,
  [SMALL_STATE(116)] = 2849,
  [SMALL_STATE(117)] = 2859,
  [SMALL_STATE(118)] = 2875,
  [SMALL_STATE(119)] = 2891,
  [SMALL_STATE(120)] = 2907,
  [SMALL_STATE(121)] = 2917,
  [SMALL_STATE(122)] = 2927,
  [SMALL_STATE(123)] = 2937,
  [SMALL_STATE(124)] = 2947,
  [SMALL_STATE(125)] = 2957,
  [SMALL_STATE(126)] = 2967,
  [SMALL_STATE(127)] = 2977,
  [SMALL_STATE(128)] = 2993,
  [SMALL_STATE(129)] = 3009,
  [SMALL_STATE(130)] = 3019,
  [SMALL_STATE(131)] = 3029,
  [SMALL_STATE(132)] = 3043,
  [SMALL_STATE(133)] = 3057,
  [SMALL_STATE(134)] = 3067,
  [SMALL_STATE(135)] = 3079,
  [SMALL_STATE(136)] = 3093,
  [SMALL_STATE(137)] = 3109,
  [SMALL_STATE(138)] = 3118,
  [SMALL_STATE(139)] = 3131,
  [SMALL_STATE(140)] = 3140,
  [SMALL_STATE(141)] = 3153,
  [SMALL_STATE(142)] = 3162,
  [SMALL_STATE(143)] = 3175,
  [SMALL_STATE(144)] = 3184,
  [SMALL_STATE(145)] = 3195,
  [SMALL_STATE(146)] = 3204,
  [SMALL_STATE(147)] = 3217,
  [SMALL_STATE(148)] = 3230,
  [SMALL_STATE(149)] = 3241,
  [SMALL_STATE(150)] = 3250,
  [SMALL_STATE(151)] = 3263,
  [SMALL_STATE(152)] = 3271,
  [SMALL_STATE(153)] = 3279,
  [SMALL_STATE(154)] = 3287,
  [SMALL_STATE(155)] = 3295,
  [SMALL_STATE(156)] = 3305,
  [SMALL_STATE(157)] = 3313,
  [SMALL_STATE(158)] = 3323,
  [SMALL_STATE(159)] = 3331,
  [SMALL_STATE(160)] = 3339,
  [SMALL_STATE(161)] = 3349,
  [SMALL_STATE(162)] = 3359,
  [SMALL_STATE(163)] = 3369,
  [SMALL_STATE(164)] = 3377,
  [SMALL_STATE(165)] = 3385,
  [SMALL_STATE(166)] = 3395,
  [SMALL_STATE(167)] = 3405,
  [SMALL_STATE(168)] = 3413,
  [SMALL_STATE(169)] = 3420,
  [SMALL_STATE(170)] = 3427,
  [SMALL_STATE(171)] = 3434,
  [SMALL_STATE(172)] = 3441,
  [SMALL_STATE(173)] = 3448,
  [SMALL_STATE(174)] = 3455,
  [SMALL_STATE(175)] = 3462,
  [SMALL_STATE(176)] = 3469,
  [SMALL_STATE(177)] = 3476,
  [SMALL_STATE(178)] = 3483,
  [SMALL_STATE(179)] = 3490,
  [SMALL_STATE(180)] = 3497,
  [SMALL_STATE(181)] = 3504,
  [SMALL_STATE(182)] = 3511,
  [SMALL_STATE(183)] = 3518,
  [SMALL_STATE(184)] = 3525,
  [SMALL_STATE(185)] = 3532,
  [SMALL_STATE(186)] = 3539,
  [SMALL_STATE(187)] = 3546,
  [SMALL_STATE(188)] = 3553,
  [SMALL_STATE(189)] = 3560,
  [SMALL_STATE(190)] = 3567,
  [SMALL_STATE(191)] = 3574,
  [SMALL_STATE(192)] = 3581,
  [SMALL_STATE(193)] = 3588,
  [SMALL_STATE(194)] = 3595,
  [SMALL_STATE(195)] = 3602,
  [SMALL_STATE(196)] = 3609,
  [SMALL_STATE(197)] = 3616,
  [SMALL_STATE(198)] = 3623,
  [SMALL_STATE(199)] = 3630,
  [SMALL_STATE(200)] = 3637,
  [SMALL_STATE(201)] = 3644,
  [SMALL_STATE(202)] = 3651,
  [SMALL_STATE(203)] = 3658,
  [SMALL_STATE(204)] = 3665,
  [SMALL_STATE(205)] = 3672,
  [SMALL_STATE(206)] = 3679,
  [SMALL_STATE(207)] = 3686,
  [SMALL_STATE(208)] = 3693,
  [SMALL_STATE(209)] = 3700,
  [SMALL_STATE(210)] = 3707,
  [SMALL_STATE(211)] = 3714,
  [SMALL_STATE(212)] = 3721,
  [SMALL_STATE(213)] = 3728,
  [SMALL_STATE(214)] = 3735,
  [SMALL_STATE(215)] = 3742,
  [SMALL_STATE(216)] = 3749,
  [SMALL_STATE(217)] = 3756,
  [SMALL_STATE(218)] = 3763,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(101),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(101),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(18),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(215),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(168),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(165),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(78),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(54),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(54),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(20),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(198),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(218),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(53),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldName, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fieldName, 1, 0, 0), REDUCE(sym_referenceId, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structNameId, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referenceId, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structNameId, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_fieldName, 1, 0, 0), REDUCE(sym_referenceId, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PATH, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importStatement, 1, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_importStatement, 1, 0, 0), SHIFT(146),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importStatement_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importStatement_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PATH, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PATH, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importValue, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identPair_repeat1, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GOTYPE, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importValue, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referenceId, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_httpRoute, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalFieldType, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalFieldType, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 5, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importSpec, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importGroup, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infoStatement, 4, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAlias, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 4, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceSpec, 5, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupSpec, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeGroupSpec_repeat1, 2, 0, 0),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeGroupSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAlias, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apiBody, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeStatement, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeSingleSpec, 1, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_PATH, 1, 0, 0), REDUCE(aux_sym_identValue_repeat1, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceStatement, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxLit, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceSpec, 4, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupSpec, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeStruct, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 4, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importGroup, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceStatement, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importLit, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayOrSliceType, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalField, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldType, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 7, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_starFieldType, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 8, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 6, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapFieldType, 5, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 5, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceBody, 2, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identPair, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importGroup_repeat1, 2, 0, 0),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importGroup_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2, 0, 0),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 9, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handlerPair, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceBody, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 2, 0, 0),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalField, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymousField, 2, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docValue, 1, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 2, 0, 0),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymousField, 1, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 1, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFiled, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identValue, 1, 0, 0),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identValue, 1, 0, 0), SHIFT(144),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 3, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDocNew, 2, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDocNew, 4, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDoc, 4, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DURATION, 2, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handlerValue, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupAlias, 2, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 3, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceHandlerNew, 2, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceHandler, 4, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceServerSpec, 4, 0, 0),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceName, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [578] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_goctl(void) {
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

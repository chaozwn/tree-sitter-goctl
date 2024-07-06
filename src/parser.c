#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 211
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
  [4] = 4,
  [5] = 5,
  [6] = 2,
  [7] = 7,
  [8] = 7,
  [9] = 3,
  [10] = 4,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
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
  [35] = 34,
  [36] = 32,
  [37] = 33,
  [38] = 38,
  [39] = 31,
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
  [80] = 52,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 55,
  [88] = 88,
  [89] = 89,
  [90] = 57,
  [91] = 91,
  [92] = 56,
  [93] = 45,
  [94] = 94,
  [95] = 51,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 40,
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
  [116] = 83,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 82,
  [127] = 127,
  [128] = 128,
  [129] = 60,
  [130] = 48,
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
  [177] = 151,
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
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 192,
  [201] = 201,
  [202] = 202,
  [203] = 188,
  [204] = 204,
  [205] = 181,
  [206] = 185,
  [207] = 202,
  [208] = 197,
  [209] = 209,
  [210] = 183,
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
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 139},
  [26] = {.lex_state = 139},
  [27] = {.lex_state = 139},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
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
  [41] = {.lex_state = 139},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 139},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 139},
  [51] = {.lex_state = 139},
  [52] = {.lex_state = 139},
  [53] = {.lex_state = 139},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 139},
  [56] = {.lex_state = 139},
  [57] = {.lex_state = 139},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 139},
  [60] = {.lex_state = 139},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 139},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 139},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 139},
  [67] = {.lex_state = 139},
  [68] = {.lex_state = 139},
  [69] = {.lex_state = 139},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 139},
  [72] = {.lex_state = 139},
  [73] = {.lex_state = 139},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 139},
  [76] = {.lex_state = 139},
  [77] = {.lex_state = 139},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 139},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 139},
  [82] = {.lex_state = 139},
  [83] = {.lex_state = 139},
  [84] = {.lex_state = 139},
  [85] = {.lex_state = 139},
  [86] = {.lex_state = 139},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 139},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 139},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 139},
  [154] = {.lex_state = 139},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 139},
  [164] = {.lex_state = 139},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 139},
  [177] = {.lex_state = 139},
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
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
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
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
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
    [sym_api] = STATE(198),
    [sym_syntaxLit] = STATE(27),
    [sym_apiBody] = STATE(26),
    [sym_importStatement] = STATE(26),
    [sym_importSpec] = STATE(41),
    [sym_importLit] = STATE(66),
    [sym_importGroup] = STATE(66),
    [sym_infoStatement] = STATE(26),
    [sym_typeStatement] = STATE(67),
    [sym_typeGroupSpec] = STATE(69),
    [sym_typeSingleSpec] = STATE(69),
    [sym_typeAlias] = STATE(76),
    [sym_typeStruct] = STATE(76),
    [sym_serviceStatement] = STATE(67),
    [sym_serviceServerSpec] = STATE(154),
    [sym_serviceSpec] = STATE(84),
    [aux_sym_api_repeat1] = STATE(26),
    [aux_sym_importStatement_repeat1] = STATE(41),
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
    STATE(9), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(206), 1,
      sym_fieldType,
    STATE(57), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(100), 4,
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
    STATE(7), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(88), 1,
      sym_fieldType,
    STATE(90), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(100), 4,
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
    STATE(9), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(97), 1,
      sym_fieldType,
    STATE(57), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(100), 4,
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
    STATE(3), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(99), 1,
      sym_fieldType,
    STATE(90), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(100), 4,
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
    STATE(9), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(185), 1,
      sym_fieldType,
    STATE(57), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(100), 4,
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
  [295] = 12,
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
    STATE(7), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(88), 1,
      sym_fieldType,
    STATE(90), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(100), 4,
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
    STATE(88), 1,
      sym_fieldType,
    STATE(57), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(100), 4,
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
    STATE(8), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(88), 1,
      sym_fieldType,
    STATE(57), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(100), 4,
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
    STATE(3), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(97), 1,
      sym_fieldType,
    STATE(90), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(100), 4,
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
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(31), 1,
      sym_IDENT,
    ACTIONS(102), 1,
      anon_sym_EQ,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_struct,
    STATE(59), 1,
      sym_normalFieldType,
    STATE(57), 2,
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
  [630] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(43), 1,
      sym_IDENT,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      anon_sym_struct,
    STATE(150), 1,
      sym_normalFieldType,
    STATE(90), 2,
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
  [677] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    STATE(166), 1,
      sym_body,
    STATE(191), 1,
      sym_GOTYPE,
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
  [723] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      sym_body,
    STATE(191), 1,
      sym_GOTYPE,
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
  [769] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
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
    STATE(191), 1,
      sym_GOTYPE,
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
  [815] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(114), 1,
      anon_sym_STAR,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      sym_IDENT,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym_body,
    STATE(191), 1,
      sym_GOTYPE,
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
  [861] = 3,
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
  [894] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(91), 1,
      sym_normalFieldType,
    STATE(57), 2,
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
  [935] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(43), 1,
      sym_IDENT,
    STATE(91), 1,
      sym_normalFieldType,
    STATE(90), 2,
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
  [976] = 3,
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
  [1009] = 3,
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
  [1042] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(79), 1,
      sym_normalFieldType,
    STATE(57), 2,
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
  [1083] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(134), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      sym_IDENT,
    STATE(168), 1,
      sym_GOTYPE,
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
  [1120] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(143), 1,
      anon_sym_info,
    ACTIONS(146), 1,
      anon_sym_type,
    ACTIONS(149), 1,
      anon_sym_ATserver,
    ACTIONS(152), 1,
      anon_sym_service,
    STATE(84), 1,
      sym_serviceSpec,
    STATE(154), 1,
      sym_serviceServerSpec,
    STATE(41), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(66), 2,
      sym_importLit,
      sym_importGroup,
    STATE(67), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(69), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(76), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(25), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1174] = 15,
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
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_serviceSpec,
    STATE(154), 1,
      sym_serviceServerSpec,
    STATE(41), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(66), 2,
      sym_importLit,
      sym_importGroup,
    STATE(67), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(69), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(76), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(25), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1228] = 15,
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
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_serviceSpec,
    STATE(154), 1,
      sym_serviceServerSpec,
    STATE(41), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(66), 2,
      sym_importLit,
      sym_importGroup,
    STATE(67), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(69), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(76), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(30), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1282] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(157), 1,
      sym_IDENT,
    STATE(174), 1,
      sym_GOTYPE,
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
  [1316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(159), 1,
      sym_IDENT,
    STATE(187), 1,
      sym_GOTYPE,
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
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_serviceSpec,
    STATE(154), 1,
      sym_serviceServerSpec,
    STATE(41), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(66), 2,
      sym_importLit,
      sym_importGroup,
    STATE(67), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(69), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(76), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(25), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1404] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      sym_IDENT,
    STATE(5), 1,
      sym_fieldName,
    STATE(135), 1,
      sym_referenceId,
    STATE(153), 1,
      sym_structNameId,
    STATE(38), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(132), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1435] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_IDENT,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_fieldName,
    STATE(135), 1,
      sym_referenceId,
    STATE(153), 1,
      sym_structNameId,
    STATE(38), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(132), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1466] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      sym_IDENT,
    STATE(5), 1,
      sym_fieldName,
    STATE(135), 1,
      sym_referenceId,
    STATE(153), 1,
      sym_structNameId,
    STATE(32), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(132), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1497] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_IDENT,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_fieldName,
    STATE(135), 1,
      sym_referenceId,
    STATE(153), 1,
      sym_structNameId,
    STATE(39), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(132), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1528] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_IDENT,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_fieldName,
    STATE(135), 1,
      sym_referenceId,
    STATE(153), 1,
      sym_structNameId,
    STATE(31), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(132), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1559] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_IDENT,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_fieldName,
    STATE(135), 1,
      sym_referenceId,
    STATE(153), 1,
      sym_structNameId,
    STATE(38), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(132), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1590] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_IDENT,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_fieldName,
    STATE(135), 1,
      sym_referenceId,
    STATE(153), 1,
      sym_structNameId,
    STATE(36), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(132), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1621] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      sym_IDENT,
    STATE(5), 1,
      sym_fieldName,
    STATE(135), 1,
      sym_referenceId,
    STATE(153), 1,
      sym_structNameId,
    STATE(38), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(132), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1652] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_IDENT,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_fieldName,
    STATE(135), 1,
      sym_referenceId,
    STATE(153), 1,
      sym_structNameId,
    STATE(38), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(132), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    ACTIONS(192), 1,
      anon_sym_SLASH_COLON,
    STATE(40), 1,
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
    ACTIONS(197), 1,
      anon_sym_import,
    STATE(44), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(66), 2,
      sym_importLit,
      sym_importGroup,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [1727] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_ATserver,
    ACTIONS(205), 1,
      anon_sym_ATdoc,
    ACTIONS(208), 1,
      anon_sym_AThandler,
    STATE(42), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(119), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(139), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1755] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      anon_sym_ATserver,
    ACTIONS(215), 1,
      anon_sym_ATdoc,
    ACTIONS(217), 1,
      anon_sym_AThandler,
    STATE(42), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(119), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(139), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1783] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_import,
    STATE(44), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(66), 2,
      sym_importLit,
      sym_importGroup,
    ACTIONS(219), 5,
      ts_builtin_sym_end,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [1805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_SLASH,
    ACTIONS(228), 1,
      anon_sym_SLASH_COLON,
    STATE(40), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(224), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
  [1827] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_ATserver,
    ACTIONS(215), 1,
      anon_sym_ATdoc,
    ACTIONS(217), 1,
      anon_sym_AThandler,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(119), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(139), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    ACTIONS(234), 1,
      sym_IDENT,
    ACTIONS(238), 1,
      anon_sym_u00b5s,
    ACTIONS(236), 6,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
      anon_sym_h,
  [1876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(187), 8,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
      anon_sym_SLASH_COLON,
  [1893] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_IDENT,
    ACTIONS(244), 1,
      sym_NUMBER,
    ACTIONS(246), 1,
      anon_sym_SLASH,
    ACTIONS(248), 1,
      anon_sym_SLASH_COLON,
    STATE(93), 1,
      aux_sym_PATH_repeat1,
    STATE(144), 1,
      aux_sym_identValue_repeat1,
    STATE(158), 3,
      sym_identValue,
      sym_DURATION,
      sym_PATH,
  [1920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_as,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_VALUE,
  [1937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [1951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_VALUE,
  [1981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 7,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
      anon_sym_returns,
      anon_sym_SEMI,
  [1994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2007] = 2,
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
  [2020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
  [2033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      anon_sym_returns,
    ACTIONS(274), 1,
      anon_sym_SEMI,
    ACTIONS(270), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2076] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    ACTIONS(282), 1,
      sym_IDENT,
    STATE(13), 1,
      sym_structNameId,
    STATE(65), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_returns,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(286), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_IDENT,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_structNameId,
    STATE(78), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_returns,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    ACTIONS(304), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2252] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_VALUE,
    ACTIONS(318), 1,
      sym_IDENT,
    STATE(109), 1,
      aux_sym_pair_repeat1,
    STATE(178), 1,
      sym_pair,
    STATE(189), 1,
      sym_docValue,
    STATE(209), 1,
      sym_key,
  [2274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2310] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 1,
      sym_IDENT,
    STATE(13), 1,
      sym_structNameId,
    STATE(78), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2340] = 3,
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
  [2354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
  [2426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    ACTIONS(304), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_SLASH,
    ACTIONS(248), 1,
      anon_sym_SLASH_COLON,
    STATE(101), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(224), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(349), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    ACTIONS(353), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    ACTIONS(359), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_RAW_STRING,
    STATE(136), 1,
      sym_tag,
    ACTIONS(363), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2598] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_SLASH,
    ACTIONS(372), 1,
      anon_sym_SLASH_COLON,
    STATE(101), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(187), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_SEMI,
    ACTIONS(375), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(381), 1,
      sym_VALUE,
    STATE(104), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [2652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2662] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_IDENT,
    STATE(109), 1,
      aux_sym_pair_repeat1,
    STATE(162), 1,
      sym_pair,
    STATE(209), 1,
      sym_key,
  [2678] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_IDENT,
    STATE(127), 1,
      aux_sym_handlerPair_repeat1,
    STATE(165), 1,
      sym_key,
    STATE(167), 1,
      sym_handlerPair,
  [2694] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_IDENT,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_structNameId,
    STATE(62), 1,
      sym_structType,
  [2710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_IDENT,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_pair_repeat1,
    STATE(209), 1,
      sym_key,
  [2726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2756] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_IDENT,
    STATE(123), 1,
      aux_sym_identPair_repeat1,
    STATE(195), 1,
      sym_key,
    STATE(196), 1,
      sym_identPair,
  [2772] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_SLASH,
    ACTIONS(228), 1,
      anon_sym_SLASH_COLON,
    STATE(45), 1,
      aux_sym_PATH_repeat1,
    STATE(54), 1,
      sym_PATH,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 1,
      sym_IDENT,
    STATE(117), 1,
      aux_sym_handlerPair_repeat1,
    STATE(165), 1,
      sym_key,
  [2824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_ATserver,
    ACTIONS(217), 1,
      anon_sym_AThandler,
    STATE(141), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [2848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 1,
      sym_VALUE,
    STATE(104), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [2862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_VALUE,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(120), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [2886] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_IDENT,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_identPair_repeat1,
    STATE(195), 1,
      sym_key,
  [2902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    ACTIONS(411), 1,
      sym_IDENT,
    STATE(125), 1,
      aux_sym_identPair_repeat1,
    STATE(195), 1,
      sym_key,
  [2928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_IDENT,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_handlerPair_repeat1,
    STATE(165), 1,
      sym_key,
  [2954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(418), 1,
      sym_IDENT,
    STATE(128), 1,
      aux_sym_pair_repeat1,
    STATE(209), 1,
      sym_key,
  [2970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_SLASH,
    ACTIONS(187), 3,
      anon_sym_RPAREN,
      sym_IDENT,
      anon_sym_SLASH_COLON,
  [2992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      sym_IDENT,
    STATE(131), 1,
      aux_sym_identValue_repeat1,
  [3005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym_VALUE,
    ACTIONS(416), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(430), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_VALUE,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_docValue,
  [3076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_HTTPMETHOD,
    STATE(58), 1,
      sym_httpRoute,
    STATE(115), 1,
      sym_serviceRoute,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_HTTPMETHOD,
    STATE(58), 1,
      sym_httpRoute,
    STATE(124), 1,
      sym_serviceRoute,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 3,
      anon_sym_RPAREN,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_VALUE,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_importValue,
  [3133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    ACTIONS(452), 1,
      sym_IDENT,
    STATE(131), 1,
      aux_sym_identValue_repeat1,
  [3146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
    ACTIONS(457), 1,
      sym_NUMBER,
  [3156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_IDENT,
    STATE(157), 1,
      sym_handlerValue,
  [3166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      sym_IDENT,
    STATE(199), 1,
      sym_serviceName,
  [3176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym_IDENT,
    STATE(140), 1,
      sym_referenceId,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(473), 1,
      anon_sym_struct,
  [3228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_service,
    STATE(68), 1,
      sym_serviceSpec,
  [3238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_IDENT,
    STATE(176), 1,
      sym_handlerValue,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [3303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_service,
  [3310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_HTTPMETHOD,
  [3317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_COLON,
  [3324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [3338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
  [3345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
  [3352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
  [3359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_IDENT,
  [3366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_EQ,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
  [3380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [3387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_VALUE,
  [3394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym_HTTPMETHOD,
  [3401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_HTTPMETHOD,
  [3408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
  [3415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [3422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
  [3429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_IDENT,
  [3436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COLON,
  [3443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LBRACK,
  [3450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
  [3457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
  [3464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
  [3471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
  [3478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      sym_IDENT,
  [3485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [3499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [3506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
  [3513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
  [3520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
  [3527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_COLON,
  [3534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [3541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
  [3548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      ts_builtin_sym_end,
  [3555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
  [3562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
  [3569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
  [3576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
  [3583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_IDENT,
  [3590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
  [3597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      sym_IDENT,
  [3604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
  [3611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
  [3618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
  [3625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
  [3632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
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
  [SMALL_STATE(19)] = 894,
  [SMALL_STATE(20)] = 935,
  [SMALL_STATE(21)] = 976,
  [SMALL_STATE(22)] = 1009,
  [SMALL_STATE(23)] = 1042,
  [SMALL_STATE(24)] = 1083,
  [SMALL_STATE(25)] = 1120,
  [SMALL_STATE(26)] = 1174,
  [SMALL_STATE(27)] = 1228,
  [SMALL_STATE(28)] = 1282,
  [SMALL_STATE(29)] = 1316,
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
  [SMALL_STATE(43)] = 1755,
  [SMALL_STATE(44)] = 1783,
  [SMALL_STATE(45)] = 1805,
  [SMALL_STATE(46)] = 1827,
  [SMALL_STATE(47)] = 1855,
  [SMALL_STATE(48)] = 1876,
  [SMALL_STATE(49)] = 1893,
  [SMALL_STATE(50)] = 1920,
  [SMALL_STATE(51)] = 1937,
  [SMALL_STATE(52)] = 1951,
  [SMALL_STATE(53)] = 1967,
  [SMALL_STATE(54)] = 1981,
  [SMALL_STATE(55)] = 1994,
  [SMALL_STATE(56)] = 2007,
  [SMALL_STATE(57)] = 2020,
  [SMALL_STATE(58)] = 2033,
  [SMALL_STATE(59)] = 2052,
  [SMALL_STATE(60)] = 2064,
  [SMALL_STATE(61)] = 2076,
  [SMALL_STATE(62)] = 2094,
  [SMALL_STATE(63)] = 2106,
  [SMALL_STATE(64)] = 2122,
  [SMALL_STATE(65)] = 2134,
  [SMALL_STATE(66)] = 2152,
  [SMALL_STATE(67)] = 2164,
  [SMALL_STATE(68)] = 2176,
  [SMALL_STATE(69)] = 2188,
  [SMALL_STATE(70)] = 2200,
  [SMALL_STATE(71)] = 2216,
  [SMALL_STATE(72)] = 2228,
  [SMALL_STATE(73)] = 2240,
  [SMALL_STATE(74)] = 2252,
  [SMALL_STATE(75)] = 2274,
  [SMALL_STATE(76)] = 2286,
  [SMALL_STATE(77)] = 2298,
  [SMALL_STATE(78)] = 2310,
  [SMALL_STATE(79)] = 2328,
  [SMALL_STATE(80)] = 2340,
  [SMALL_STATE(81)] = 2354,
  [SMALL_STATE(82)] = 2366,
  [SMALL_STATE(83)] = 2378,
  [SMALL_STATE(84)] = 2390,
  [SMALL_STATE(85)] = 2402,
  [SMALL_STATE(86)] = 2414,
  [SMALL_STATE(87)] = 2426,
  [SMALL_STATE(88)] = 2437,
  [SMALL_STATE(89)] = 2448,
  [SMALL_STATE(90)] = 2461,
  [SMALL_STATE(91)] = 2472,
  [SMALL_STATE(92)] = 2483,
  [SMALL_STATE(93)] = 2494,
  [SMALL_STATE(94)] = 2511,
  [SMALL_STATE(95)] = 2524,
  [SMALL_STATE(96)] = 2535,
  [SMALL_STATE(97)] = 2548,
  [SMALL_STATE(98)] = 2559,
  [SMALL_STATE(99)] = 2572,
  [SMALL_STATE(100)] = 2587,
  [SMALL_STATE(101)] = 2598,
  [SMALL_STATE(102)] = 2615,
  [SMALL_STATE(103)] = 2628,
  [SMALL_STATE(104)] = 2638,
  [SMALL_STATE(105)] = 2652,
  [SMALL_STATE(106)] = 2662,
  [SMALL_STATE(107)] = 2678,
  [SMALL_STATE(108)] = 2694,
  [SMALL_STATE(109)] = 2710,
  [SMALL_STATE(110)] = 2726,
  [SMALL_STATE(111)] = 2736,
  [SMALL_STATE(112)] = 2746,
  [SMALL_STATE(113)] = 2756,
  [SMALL_STATE(114)] = 2772,
  [SMALL_STATE(115)] = 2788,
  [SMALL_STATE(116)] = 2798,
  [SMALL_STATE(117)] = 2808,
  [SMALL_STATE(118)] = 2824,
  [SMALL_STATE(119)] = 2834,
  [SMALL_STATE(120)] = 2848,
  [SMALL_STATE(121)] = 2862,
  [SMALL_STATE(122)] = 2872,
  [SMALL_STATE(123)] = 2886,
  [SMALL_STATE(124)] = 2902,
  [SMALL_STATE(125)] = 2912,
  [SMALL_STATE(126)] = 2928,
  [SMALL_STATE(127)] = 2938,
  [SMALL_STATE(128)] = 2954,
  [SMALL_STATE(129)] = 2970,
  [SMALL_STATE(130)] = 2980,
  [SMALL_STATE(131)] = 2992,
  [SMALL_STATE(132)] = 3005,
  [SMALL_STATE(133)] = 3014,
  [SMALL_STATE(134)] = 3025,
  [SMALL_STATE(135)] = 3036,
  [SMALL_STATE(136)] = 3045,
  [SMALL_STATE(137)] = 3054,
  [SMALL_STATE(138)] = 3063,
  [SMALL_STATE(139)] = 3076,
  [SMALL_STATE(140)] = 3089,
  [SMALL_STATE(141)] = 3098,
  [SMALL_STATE(142)] = 3111,
  [SMALL_STATE(143)] = 3120,
  [SMALL_STATE(144)] = 3133,
  [SMALL_STATE(145)] = 3146,
  [SMALL_STATE(146)] = 3156,
  [SMALL_STATE(147)] = 3166,
  [SMALL_STATE(148)] = 3176,
  [SMALL_STATE(149)] = 3184,
  [SMALL_STATE(150)] = 3192,
  [SMALL_STATE(151)] = 3200,
  [SMALL_STATE(152)] = 3208,
  [SMALL_STATE(153)] = 3218,
  [SMALL_STATE(154)] = 3228,
  [SMALL_STATE(155)] = 3238,
  [SMALL_STATE(156)] = 3248,
  [SMALL_STATE(157)] = 3256,
  [SMALL_STATE(158)] = 3264,
  [SMALL_STATE(159)] = 3272,
  [SMALL_STATE(160)] = 3280,
  [SMALL_STATE(161)] = 3288,
  [SMALL_STATE(162)] = 3296,
  [SMALL_STATE(163)] = 3303,
  [SMALL_STATE(164)] = 3310,
  [SMALL_STATE(165)] = 3317,
  [SMALL_STATE(166)] = 3324,
  [SMALL_STATE(167)] = 3331,
  [SMALL_STATE(168)] = 3338,
  [SMALL_STATE(169)] = 3345,
  [SMALL_STATE(170)] = 3352,
  [SMALL_STATE(171)] = 3359,
  [SMALL_STATE(172)] = 3366,
  [SMALL_STATE(173)] = 3373,
  [SMALL_STATE(174)] = 3380,
  [SMALL_STATE(175)] = 3387,
  [SMALL_STATE(176)] = 3394,
  [SMALL_STATE(177)] = 3401,
  [SMALL_STATE(178)] = 3408,
  [SMALL_STATE(179)] = 3415,
  [SMALL_STATE(180)] = 3422,
  [SMALL_STATE(181)] = 3429,
  [SMALL_STATE(182)] = 3436,
  [SMALL_STATE(183)] = 3443,
  [SMALL_STATE(184)] = 3450,
  [SMALL_STATE(185)] = 3457,
  [SMALL_STATE(186)] = 3464,
  [SMALL_STATE(187)] = 3471,
  [SMALL_STATE(188)] = 3478,
  [SMALL_STATE(189)] = 3485,
  [SMALL_STATE(190)] = 3492,
  [SMALL_STATE(191)] = 3499,
  [SMALL_STATE(192)] = 3506,
  [SMALL_STATE(193)] = 3513,
  [SMALL_STATE(194)] = 3520,
  [SMALL_STATE(195)] = 3527,
  [SMALL_STATE(196)] = 3534,
  [SMALL_STATE(197)] = 3541,
  [SMALL_STATE(198)] = 3548,
  [SMALL_STATE(199)] = 3555,
  [SMALL_STATE(200)] = 3562,
  [SMALL_STATE(201)] = 3569,
  [SMALL_STATE(202)] = 3576,
  [SMALL_STATE(203)] = 3583,
  [SMALL_STATE(204)] = 3590,
  [SMALL_STATE(205)] = 3597,
  [SMALL_STATE(206)] = 3604,
  [SMALL_STATE(207)] = 3611,
  [SMALL_STATE(208)] = 3618,
  [SMALL_STATE(209)] = 3625,
  [SMALL_STATE(210)] = 3632,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(95),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(95),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(20),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(207),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(183),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(145),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(80),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(51),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(51),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(19),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(202),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(210),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(52),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldName, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fieldName, 1, 0, 0), REDUCE(sym_referenceId, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structNameId, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referenceId, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structNameId, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_fieldName, 1, 0, 0), REDUCE(sym_referenceId, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importStatement, 1, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_importStatement, 1, 0, 0), SHIFT(143),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importStatement_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importStatement_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PATH, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identPair_repeat1, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importValue, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GOTYPE, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importValue, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_httpRoute, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referenceId, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalFieldType, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalFieldType, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAlias, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeStruct, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupSpec, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importSpec, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apiBody, 1, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceStatement, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeStatement, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importGroup, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importGroup, 3, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infoStatement, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceSpec, 5, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeSingleSpec, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupSpec, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeGroupSpec_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeGroupSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAlias, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importLit, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 5, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceStatement, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxLit, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceSpec, 4, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayOrSliceType, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_starFieldType, 2, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 5, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 6, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapFieldType, 5, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 8, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalField, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldType, 1, 0, 0),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 7, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importGroup_repeat1, 2, 0, 0),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importGroup_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 9, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceBody, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 2, 0, 0),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identPair, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceBody, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 2, 0, 0),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handlerPair, 1, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2, 0, 0),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 2, 0, 0),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFiled, 1, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 1, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymousField, 1, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalField, 3, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymousField, 2, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docValue, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identValue, 1, 0, 0),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identValue, 1, 0, 0), SHIFT(134),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDocNew, 4, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDoc, 4, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupAlias, 2, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handlerValue, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDocNew, 2, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DURATION, 2, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceServerSpec, 4, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceHandler, 4, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceHandlerNew, 2, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceName, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [553] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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

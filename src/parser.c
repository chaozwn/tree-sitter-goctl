#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 214
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  sym_EOF = 46,
  sym_VALUE = 47,
  sym_RAW_STRING = 48,
  sym_comment = 49,
  sym_IDENT = 50,
  sym_NUMBER = 51,
  anon_sym_ns = 52,
  anon_sym_us = 53,
  anon_sym_u00b5s = 54,
  anon_sym_ms = 55,
  anon_sym_s = 56,
  anon_sym_m = 57,
  anon_sym_h = 58,
  sym_HTTPMETHOD = 59,
  anon_sym_SLASH = 60,
  anon_sym_SLASH_COLON = 61,
  sym_api = 62,
  sym_syntaxLit = 63,
  sym_apiBody = 64,
  sym_importStatement = 65,
  sym_importSpec = 66,
  sym_importLit = 67,
  sym_importGroup = 68,
  sym_infoStatement = 69,
  sym_typeStatement = 70,
  sym_typeGroupSpec = 71,
  sym_typeGroupAlias = 72,
  sym_typeSingleSpec = 73,
  sym_typeAlias = 74,
  sym_typeStruct = 75,
  sym_typeFiled = 76,
  sym_normalField = 77,
  sym_fieldType = 78,
  sym_GOTYPE = 79,
  sym_anonymousField = 80,
  sym_normalFieldType = 81,
  sym_starFieldType = 82,
  sym_mapFieldType = 83,
  sym_arrayOrSliceType = 84,
  sym_structType = 85,
  sym_structNameId = 86,
  sym_fieldName = 87,
  sym_referenceId = 88,
  sym_tag = 89,
  sym_body = 90,
  sym_serviceStatement = 91,
  sym_serviceServerSpec = 92,
  sym_serviceSpec = 93,
  sym_serviceName = 94,
  sym_serviceBody = 95,
  sym_serviceDoc = 96,
  sym_serviceDocNew = 97,
  sym_serviceHandler = 98,
  sym_serviceHandlerNew = 99,
  sym_serviceRoute = 100,
  sym_httpRoute = 101,
  sym_identPair = 102,
  sym_handlerPair = 103,
  sym_identValue = 104,
  sym_handlerValue = 105,
  sym_importValue = 106,
  sym_docValue = 107,
  sym_pair = 108,
  sym_key = 109,
  sym_DURATION = 110,
  sym_PATH = 111,
  aux_sym_api_repeat1 = 112,
  aux_sym_importStatement_repeat1 = 113,
  aux_sym_importGroup_repeat1 = 114,
  aux_sym_typeGroupSpec_repeat1 = 115,
  aux_sym_arrayOrSliceType_repeat1 = 116,
  aux_sym_structType_repeat1 = 117,
  aux_sym_serviceSpec_repeat1 = 118,
  aux_sym_identPair_repeat1 = 119,
  aux_sym_handlerPair_repeat1 = 120,
  aux_sym_identValue_repeat1 = 121,
  aux_sym_pair_repeat1 = 122,
  aux_sym_PATH_repeat1 = 123,
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
  [sym_EOF] = "EOF",
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
  [sym_EOF] = sym_EOF,
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
  [sym_EOF] = {
    .visible = true,
    .named = true,
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
  [6] = 6,
  [7] = 4,
  [8] = 2,
  [9] = 5,
  [10] = 6,
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
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 35,
  [38] = 31,
  [39] = 33,
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
  [81] = 49,
  [82] = 82,
  [83] = 52,
  [84] = 84,
  [85] = 65,
  [86] = 51,
  [87] = 50,
  [88] = 59,
  [89] = 89,
  [90] = 53,
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
  [102] = 93,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 68,
  [109] = 109,
  [110] = 110,
  [111] = 80,
  [112] = 54,
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
  [168] = 145,
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
  [191] = 191,
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
  [203] = 190,
  [204] = 204,
  [205] = 205,
  [206] = 187,
  [207] = 207,
  [208] = 173,
  [209] = 183,
  [210] = 198,
  [211] = 195,
  [212] = 212,
  [213] = 179,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(142);
      ADVANCE_MAP(
        '"', 3,
        '(', 146,
        ')', 147,
        '*', 189,
        ',', 207,
        '.', 199,
        '/', 293,
        ':', 206,
        ';', 205,
        '=', 144,
        '@', 46,
        'E', 28,
        '[', 195,
        ']', 196,
        '`', 30,
        'a', 118,
        'b', 100,
        'c', 94,
        'f', 77,
        'h', 290,
        'i', 81,
        'm', 288,
        'n', 119,
        'r', 58,
        's', 286,
        't', 71,
        'u', 72,
        '{', 192,
        '}', 193,
        0xb5, 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 3,
        '(', 146,
        ')', 147,
        '*', 189,
        ',', 207,
        '.', 199,
        '/', 293,
        ']', 196,
        '`', 30,
        '}', 193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        ')', 147,
        '.', 199,
        '/', 8,
        '@', 117,
        'E', 28,
        ']', 196,
        'a', 118,
        'c', 101,
        'd', 65,
        'g', 61,
        'h', 59,
        'i', 82,
        'o', 106,
        'p', 36,
        's', 64,
        't', 116,
        '{', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ')', 147,
        '*', 189,
        '/', 8,
        '[', 195,
        'b', 255,
        'c', 254,
        'f', 245,
        'i', 253,
        'r', 275,
        's', 266,
        't', 240,
        'u', 243,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        ')', 147,
        '/', 8,
        'h', 291,
        'm', 289,
        'n', 264,
        's', 287,
        'u', 265,
        0xb5, 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '*', 189,
        '.', 199,
        '/', 8,
        '[', 195,
        'b', 255,
        'c', 254,
        'f', 245,
        'i', 251,
        'm', 228,
        'r', 275,
        's', 274,
        't', 240,
        'u', 243,
        '{', 192,
        '}', 193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '*', 189,
        '/', 8,
        '[', 195,
        'b', 255,
        'c', 254,
        'f', 245,
        'i', 251,
        'm', 228,
        'r', 275,
        's', 266,
        't', 240,
        'u', 243,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '/', 8,
        '=', 144,
        'b', 255,
        'c', 254,
        'f', 245,
        'i', 251,
        'r', 275,
        's', 274,
        't', 240,
        'u', 243,
        '{', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '/', 8,
        'b', 255,
        'c', 254,
        'f', 245,
        'i', 251,
        'r', 275,
        's', 266,
        't', 240,
        'u', 243,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(164);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(156);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(168);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(166);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(158);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(172);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(162);
      END_STATE();
    case 25:
      if (lookahead == '6') ADVANCE(154);
      END_STATE();
    case 26:
      if (lookahead == '8') ADVANCE(174);
      END_STATE();
    case 27:
      if (lookahead == 'F') ADVANCE(209);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == '`') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 138:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 139:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 140:
      if (lookahead == 'x') ADVANCE(14);
      END_STATE();
    case 141:
      if (lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_uint8);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_uint16);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_complex64);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_complex64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_complex128);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_complex128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(225);
      if (lookahead == '3') ADVANCE(216);
      if (lookahead == '6') ADVANCE(221);
      if (lookahead == '8') ADVANCE(161);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(225);
      if (lookahead == '3') ADVANCE(216);
      if (lookahead == '6') ADVANCE(221);
      if (lookahead == '8') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '1') ADVANCE(226);
      if (lookahead == '3') ADVANCE(217);
      if (lookahead == '6') ADVANCE(222);
      if (lookahead == '8') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_uintptr);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_uintptr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_rune);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_rune);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_time_DOTTime);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_map);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_struct);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATserver);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATdoc);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_AThandler);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_EOF);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_VALUE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_RAW_STRING);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '6') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '2') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '3') ADVANCE(218);
      if (lookahead == '6') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '4') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '6') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '6') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '8') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'm') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead == 'y') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'p') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'x') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_ns);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_ns);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_us);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_us);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_u00b5s);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_ms);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_m);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_HTTPMETHOD);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ':') ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SLASH_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
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
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
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
    [sym_EOF] = ACTIONS(1),
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
    [sym_api] = STATE(197),
    [sym_syntaxLit] = STATE(30),
    [sym_apiBody] = STATE(29),
    [sym_importStatement] = STATE(29),
    [sym_importSpec] = STATE(43),
    [sym_importLit] = STATE(69),
    [sym_importGroup] = STATE(69),
    [sym_infoStatement] = STATE(29),
    [sym_typeStatement] = STATE(71),
    [sym_typeGroupSpec] = STATE(62),
    [sym_typeSingleSpec] = STATE(62),
    [sym_typeAlias] = STATE(67),
    [sym_typeStruct] = STATE(67),
    [sym_serviceStatement] = STATE(71),
    [sym_serviceServerSpec] = STATE(139),
    [sym_serviceSpec] = STATE(75),
    [aux_sym_api_repeat1] = STATE(29),
    [aux_sym_importStatement_repeat1] = STATE(43),
    [anon_sym_syntax] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_info] = ACTIONS(9),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_ATserver] = ACTIONS(13),
    [anon_sym_service] = ACTIONS(15),
    [sym_EOF] = ACTIONS(17),
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
    STATE(7), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(209), 1,
      sym_fieldType,
    STATE(51), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(91), 4,
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
    STATE(4), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(92), 1,
      sym_fieldType,
    STATE(86), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(91), 4,
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
    STATE(10), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(82), 1,
      sym_fieldType,
    STATE(86), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(91), 4,
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
    STATE(7), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(84), 1,
      sym_fieldType,
    STATE(51), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(91), 4,
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
    STATE(82), 1,
      sym_fieldType,
    STATE(51), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(91), 4,
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
    STATE(6), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(82), 1,
      sym_fieldType,
    STATE(51), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(91), 4,
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
    STATE(7), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(183), 1,
      sym_fieldType,
    STATE(51), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(91), 4,
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
  [413] = 12,
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
    STATE(4), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(84), 1,
      sym_fieldType,
    STATE(86), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(91), 4,
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
  [472] = 12,
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
    STATE(10), 1,
      aux_sym_arrayOrSliceType_repeat1,
    STATE(82), 1,
      sym_fieldType,
    STATE(86), 2,
      sym_GOTYPE,
      sym_referenceId,
    STATE(91), 4,
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
    STATE(77), 1,
      sym_normalFieldType,
    STATE(51), 2,
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
    STATE(146), 1,
      sym_normalFieldType,
    STATE(86), 2,
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
    STATE(161), 1,
      sym_GOTYPE,
    STATE(162), 1,
      sym_body,
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
    STATE(161), 1,
      sym_GOTYPE,
    STATE(182), 1,
      sym_body,
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
    STATE(161), 1,
      sym_GOTYPE,
    STATE(176), 1,
      sym_body,
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
    STATE(161), 1,
      sym_GOTYPE,
    STATE(170), 1,
      sym_body,
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
  [861] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(25), 1,
      anon_sym_interface,
    ACTIONS(31), 1,
      sym_IDENT,
    STATE(89), 1,
      sym_normalFieldType,
    STATE(51), 2,
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
  [902] = 7,
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
    STATE(51), 2,
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
  [943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_time_DOTTime,
    ACTIONS(39), 1,
      anon_sym_interface,
    ACTIONS(43), 1,
      sym_IDENT,
    STATE(89), 1,
      sym_normalFieldType,
    STATE(86), 2,
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
  [984] = 3,
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
  [1017] = 3,
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
  [1050] = 3,
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
  [1083] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(134), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      sym_IDENT,
    STATE(171), 1,
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
  [1120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(138), 1,
      sym_IDENT,
    STATE(167), 1,
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
  [1154] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_time_DOTTime,
    ACTIONS(140), 1,
      sym_IDENT,
    STATE(177), 1,
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
  [1188] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_info,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_ATserver,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(142), 1,
      sym_EOF,
    STATE(75), 1,
      sym_serviceSpec,
    STATE(139), 1,
      sym_serviceServerSpec,
    STATE(43), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(62), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(67), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(69), 2,
      sym_importLit,
      sym_importGroup,
    STATE(71), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(28), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1242] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_import,
    ACTIONS(147), 1,
      anon_sym_info,
    ACTIONS(150), 1,
      anon_sym_type,
    ACTIONS(153), 1,
      anon_sym_ATserver,
    ACTIONS(156), 1,
      anon_sym_service,
    ACTIONS(159), 1,
      sym_EOF,
    STATE(75), 1,
      sym_serviceSpec,
    STATE(139), 1,
      sym_serviceServerSpec,
    STATE(43), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(62), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(67), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(69), 2,
      sym_importLit,
      sym_importGroup,
    STATE(71), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(28), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1296] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_info,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_ATserver,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(161), 1,
      sym_EOF,
    STATE(75), 1,
      sym_serviceSpec,
    STATE(139), 1,
      sym_serviceServerSpec,
    STATE(43), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(62), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(67), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(69), 2,
      sym_importLit,
      sym_importGroup,
    STATE(71), 2,
      sym_typeStatement,
      sym_serviceStatement,
    STATE(28), 4,
      sym_apiBody,
      sym_importStatement,
      sym_infoStatement,
      aux_sym_api_repeat1,
  [1350] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_info,
    ACTIONS(11), 1,
      anon_sym_type,
    ACTIONS(13), 1,
      anon_sym_ATserver,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(161), 1,
      sym_EOF,
    STATE(75), 1,
      sym_serviceSpec,
    STATE(139), 1,
      sym_serviceServerSpec,
    STATE(43), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(62), 2,
      sym_typeGroupSpec,
      sym_typeSingleSpec,
    STATE(67), 2,
      sym_typeAlias,
      sym_typeStruct,
    STATE(69), 2,
      sym_importLit,
      sym_importGroup,
    STATE(71), 2,
      sym_typeStatement,
      sym_serviceStatement,
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
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      sym_IDENT,
    STATE(3), 1,
      sym_fieldName,
    STATE(131), 1,
      sym_referenceId,
    STATE(148), 1,
      sym_structNameId,
    STATE(33), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(129), 3,
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
    STATE(3), 1,
      sym_fieldName,
    STATE(131), 1,
      sym_referenceId,
    STATE(148), 1,
      sym_structNameId,
    STATE(37), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(129), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1466] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_IDENT,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_fieldName,
    STATE(131), 1,
      sym_referenceId,
    STATE(148), 1,
      sym_structNameId,
    STATE(36), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(129), 3,
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
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_fieldName,
    STATE(131), 1,
      sym_referenceId,
    STATE(148), 1,
      sym_structNameId,
    STATE(35), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(129), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1528] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      sym_IDENT,
    STATE(3), 1,
      sym_fieldName,
    STATE(131), 1,
      sym_referenceId,
    STATE(148), 1,
      sym_structNameId,
    STATE(36), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(129), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1559] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_STAR,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      sym_IDENT,
    STATE(3), 1,
      sym_fieldName,
    STATE(131), 1,
      sym_referenceId,
    STATE(148), 1,
      sym_structNameId,
    STATE(36), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(129), 3,
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
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_fieldName,
    STATE(131), 1,
      sym_referenceId,
    STATE(148), 1,
      sym_structNameId,
    STATE(36), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(129), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1621] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      sym_IDENT,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_fieldName,
    STATE(131), 1,
      sym_referenceId,
    STATE(148), 1,
      sym_structNameId,
    STATE(39), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(129), 3,
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
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_fieldName,
    STATE(131), 1,
      sym_referenceId,
    STATE(148), 1,
      sym_structNameId,
    STATE(36), 2,
      sym_typeFiled,
      aux_sym_structType_repeat1,
    STATE(129), 3,
      sym_normalField,
      sym_anonymousField,
      sym_structType,
  [1683] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_import,
    STATE(40), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(69), 2,
      sym_importLit,
      sym_importGroup,
    ACTIONS(190), 5,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [1705] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      anon_sym_ATserver,
    ACTIONS(196), 1,
      anon_sym_ATdoc,
    ACTIONS(198), 1,
      anon_sym_AThandler,
    STATE(42), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(94), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(125), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1733] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_ATserver,
    ACTIONS(196), 1,
      anon_sym_ATdoc,
    ACTIONS(198), 1,
      anon_sym_AThandler,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(94), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(125), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1761] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_import,
    STATE(40), 2,
      sym_importSpec,
      aux_sym_importStatement_repeat1,
    STATE(69), 2,
      sym_importLit,
      sym_importGroup,
    ACTIONS(205), 5,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [1783] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      anon_sym_ATserver,
    ACTIONS(212), 1,
      anon_sym_ATdoc,
    ACTIONS(215), 1,
      anon_sym_AThandler,
    STATE(44), 2,
      sym_serviceBody,
      aux_sym_serviceSpec_repeat1,
    STATE(94), 2,
      sym_serviceDoc,
      sym_serviceDocNew,
    STATE(125), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [1811] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_IDENT,
    ACTIONS(220), 1,
      sym_NUMBER,
    ACTIONS(222), 1,
      anon_sym_SLASH,
    ACTIONS(224), 1,
      anon_sym_SLASH_COLON,
    STATE(85), 1,
      aux_sym_PATH_repeat1,
    STATE(130), 1,
      aux_sym_identValue_repeat1,
    STATE(153), 3,
      sym_identValue,
      sym_DURATION,
      sym_PATH,
  [1838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    ACTIONS(228), 1,
      sym_IDENT,
    ACTIONS(232), 1,
      anon_sym_u00b5s,
    ACTIONS(230), 6,
      anon_sym_ns,
      anon_sym_us,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_m,
      anon_sym_h,
  [1859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_as,
    ACTIONS(234), 8,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
      sym_VALUE,
  [1876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 8,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
      sym_VALUE,
  [1890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(93), 7,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [1906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 8,
      anon_sym_import,
      anon_sym_RPAREN,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [1920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 7,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [1933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 7,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [1946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 7,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_RBRACK,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [1959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [1971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [1983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [1995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      sym_IDENT,
    STATE(13), 1,
      sym_structNameId,
    STATE(64), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2025] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(267), 1,
      anon_sym_SLASH_COLON,
    STATE(59), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(262), 3,
      anon_sym_LPAREN,
      anon_sym_returns,
      anon_sym_SEMI,
  [2043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2091] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_IDENT,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_structNameId,
    STATE(78), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2109] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    ACTIONS(284), 1,
      anon_sym_SLASH_COLON,
    STATE(59), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(280), 3,
      anon_sym_LPAREN,
      anon_sym_returns,
      anon_sym_SEMI,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2247] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_VALUE,
    ACTIONS(308), 1,
      sym_IDENT,
    STATE(109), 1,
      aux_sym_pair_repeat1,
    STATE(175), 1,
      sym_docValue,
    STATE(199), 1,
      sym_key,
    STATE(202), 1,
      sym_pair,
  [2269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2281] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 1,
      sym_IDENT,
    STATE(13), 1,
      sym_structNameId,
    STATE(78), 3,
      sym_typeGroupAlias,
      sym_structType,
      aux_sym_typeGroupSpec_repeat1,
  [2299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 6,
      anon_sym_import,
      anon_sym_info,
      anon_sym_type,
      anon_sym_ATserver,
      anon_sym_service,
      sym_EOF,
  [2323] = 3,
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
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2370] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_SLASH,
    ACTIONS(224), 1,
      anon_sym_SLASH_COLON,
    STATE(88), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(280), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2409] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_SLASH,
    ACTIONS(328), 1,
      anon_sym_SLASH_COLON,
    STATE(88), 1,
      aux_sym_PATH_repeat1,
    ACTIONS(262), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 5,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_RAW_STRING,
      sym_IDENT,
  [2448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      anon_sym_STAR,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym_RAW_STRING,
      sym_IDENT,
  [2459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_RAW_STRING,
    STATE(127), 1,
      sym_tag,
    ACTIONS(335), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_SLASH,
    ACTIONS(262), 4,
      anon_sym_LPAREN,
      anon_sym_returns,
      anon_sym_SEMI,
      anon_sym_SLASH_COLON,
  [2487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_ATserver,
    ACTIONS(198), 1,
      anon_sym_AThandler,
    STATE(124), 2,
      sym_serviceHandler,
      sym_serviceHandlerNew,
  [2501] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_IDENT,
    STATE(109), 1,
      aux_sym_pair_repeat1,
    STATE(199), 1,
      sym_key,
    STATE(200), 1,
      sym_pair,
  [2517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2537] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_IDENT,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_handlerPair_repeat1,
    STATE(196), 1,
      sym_key,
  [2553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      sym_VALUE,
    STATE(121), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [2567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_SLASH,
    ACTIONS(262), 3,
      anon_sym_RPAREN,
      sym_IDENT,
      anon_sym_SLASH_COLON,
  [2599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
    ACTIONS(359), 1,
      sym_IDENT,
    STATE(104), 1,
      aux_sym_identPair_repeat1,
    STATE(193), 1,
      sym_key,
  [2625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_IDENT,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_structNameId,
    STATE(61), 1,
      sym_structType,
  [2641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2671] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_IDENT,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_pair_repeat1,
    STATE(199), 1,
      sym_key,
  [2687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_IDENT,
    STATE(98), 1,
      aux_sym_handlerPair_repeat1,
    STATE(191), 1,
      sym_handlerPair,
    STATE(196), 1,
      sym_key,
  [2703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      sym_IDENT,
    STATE(113), 1,
      aux_sym_pair_repeat1,
    STATE(199), 1,
      sym_key,
  [2739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_VALUE,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(99), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [2763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_IDENT,
    STATE(120), 1,
      aux_sym_identPair_repeat1,
    STATE(193), 1,
      sym_key,
    STATE(194), 1,
      sym_identPair,
  [2779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_SLASH,
    ACTIONS(284), 1,
      anon_sym_SLASH_COLON,
    STATE(65), 1,
      aux_sym_PATH_repeat1,
    STATE(137), 1,
      sym_PATH,
  [2795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 4,
      anon_sym_RBRACE,
      anon_sym_ATserver,
      anon_sym_ATdoc,
      anon_sym_AThandler,
  [2805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    ACTIONS(383), 1,
      sym_IDENT,
    STATE(119), 1,
      aux_sym_handlerPair_repeat1,
    STATE(196), 1,
      sym_key,
  [2821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_IDENT,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_identPair_repeat1,
    STATE(193), 1,
      sym_key,
  [2837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      sym_VALUE,
    STATE(121), 2,
      sym_importValue,
      aux_sym_importGroup_repeat1,
  [2851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_VALUE,
    ACTIONS(370), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      anon_sym_returns,
    ACTIONS(399), 1,
      anon_sym_SEMI,
  [2875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_HTTPMETHOD,
    STATE(97), 1,
      sym_serviceRoute,
    STATE(123), 1,
      sym_httpRoute,
  [2888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_HTTPMETHOD,
    STATE(118), 1,
      sym_serviceRoute,
    STATE(123), 1,
      sym_httpRoute,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      anon_sym_RPAREN,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [2928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      sym_IDENT,
    STATE(134), 1,
      aux_sym_identValue_repeat1,
  [2950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [2959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(418), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [2970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_VALUE,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_docValue,
  [2983] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(426), 1,
      sym_IDENT,
    STATE(134), 1,
      aux_sym_identValue_repeat1,
  [2996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_VALUE,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_importValue,
  [3009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_STAR,
      anon_sym_RBRACE,
      sym_IDENT,
  [3018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 3,
      anon_sym_LPAREN,
      anon_sym_returns,
      anon_sym_SEMI,
  [3027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_service,
    STATE(58), 1,
      sym_serviceSpec,
  [3045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_IDENT,
    STATE(155), 1,
      sym_handlerValue,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_returns,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [3081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_IDENT,
    STATE(180), 1,
      sym_serviceName,
  [3091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_IDENT,
    STATE(136), 1,
      sym_referenceId,
  [3117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 1,
      anon_sym_struct,
  [3127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_IDENT,
    STATE(166), 1,
      sym_handlerValue,
  [3137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    ACTIONS(461), 1,
      sym_NUMBER,
  [3155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_ATserver,
      anon_sym_AThandler,
  [3179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_RPAREN,
      sym_IDENT,
  [3187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_returns,
    ACTIONS(471), 1,
      anon_sym_SEMI,
  [3197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_SEMI,
  [3204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_service,
  [3211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
  [3218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
  [3225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
  [3232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
  [3239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_EQ,
  [3246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_VALUE,
  [3253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
  [3260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_HTTPMETHOD,
  [3267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [3274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_HTTPMETHOD,
  [3281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SEMI,
  [3288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [3295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
  [3302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
  [3309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym_IDENT,
  [3316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_SEMI,
  [3323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
  [3330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
  [3337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
  [3344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_HTTPMETHOD,
  [3351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
  [3358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
  [3365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_SEMI,
  [3372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
  [3379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
  [3386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_SEMI,
  [3393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
  [3400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
  [3407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_IDENT,
  [3414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
  [3428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
  [3435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [3442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
  [3449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COLON,
  [3456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
  [3463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
  [3470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_COLON,
  [3477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
  [3484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
  [3491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COLON,
  [3498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
  [3505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
  [3512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [3519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON,
  [3540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_IDENT,
  [3547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
  [3554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym_IDENT,
  [3561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
  [3575] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LBRACE,
  [3582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_IDENT,
  [3589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
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
  [SMALL_STATE(20)] = 943,
  [SMALL_STATE(21)] = 984,
  [SMALL_STATE(22)] = 1017,
  [SMALL_STATE(23)] = 1050,
  [SMALL_STATE(24)] = 1083,
  [SMALL_STATE(25)] = 1120,
  [SMALL_STATE(26)] = 1154,
  [SMALL_STATE(27)] = 1188,
  [SMALL_STATE(28)] = 1242,
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
  [SMALL_STATE(42)] = 1733,
  [SMALL_STATE(43)] = 1761,
  [SMALL_STATE(44)] = 1783,
  [SMALL_STATE(45)] = 1811,
  [SMALL_STATE(46)] = 1838,
  [SMALL_STATE(47)] = 1859,
  [SMALL_STATE(48)] = 1876,
  [SMALL_STATE(49)] = 1890,
  [SMALL_STATE(50)] = 1906,
  [SMALL_STATE(51)] = 1920,
  [SMALL_STATE(52)] = 1933,
  [SMALL_STATE(53)] = 1946,
  [SMALL_STATE(54)] = 1959,
  [SMALL_STATE(55)] = 1971,
  [SMALL_STATE(56)] = 1983,
  [SMALL_STATE(57)] = 1995,
  [SMALL_STATE(58)] = 2013,
  [SMALL_STATE(59)] = 2025,
  [SMALL_STATE(60)] = 2043,
  [SMALL_STATE(61)] = 2055,
  [SMALL_STATE(62)] = 2067,
  [SMALL_STATE(63)] = 2079,
  [SMALL_STATE(64)] = 2091,
  [SMALL_STATE(65)] = 2109,
  [SMALL_STATE(66)] = 2127,
  [SMALL_STATE(67)] = 2139,
  [SMALL_STATE(68)] = 2151,
  [SMALL_STATE(69)] = 2163,
  [SMALL_STATE(70)] = 2175,
  [SMALL_STATE(71)] = 2187,
  [SMALL_STATE(72)] = 2199,
  [SMALL_STATE(73)] = 2211,
  [SMALL_STATE(74)] = 2223,
  [SMALL_STATE(75)] = 2235,
  [SMALL_STATE(76)] = 2247,
  [SMALL_STATE(77)] = 2269,
  [SMALL_STATE(78)] = 2281,
  [SMALL_STATE(79)] = 2299,
  [SMALL_STATE(80)] = 2311,
  [SMALL_STATE(81)] = 2323,
  [SMALL_STATE(82)] = 2337,
  [SMALL_STATE(83)] = 2348,
  [SMALL_STATE(84)] = 2359,
  [SMALL_STATE(85)] = 2370,
  [SMALL_STATE(86)] = 2387,
  [SMALL_STATE(87)] = 2398,
  [SMALL_STATE(88)] = 2409,
  [SMALL_STATE(89)] = 2426,
  [SMALL_STATE(90)] = 2437,
  [SMALL_STATE(91)] = 2448,
  [SMALL_STATE(92)] = 2459,
  [SMALL_STATE(93)] = 2474,
  [SMALL_STATE(94)] = 2487,
  [SMALL_STATE(95)] = 2501,
  [SMALL_STATE(96)] = 2517,
  [SMALL_STATE(97)] = 2527,
  [SMALL_STATE(98)] = 2537,
  [SMALL_STATE(99)] = 2553,
  [SMALL_STATE(100)] = 2567,
  [SMALL_STATE(101)] = 2577,
  [SMALL_STATE(102)] = 2587,
  [SMALL_STATE(103)] = 2599,
  [SMALL_STATE(104)] = 2609,
  [SMALL_STATE(105)] = 2625,
  [SMALL_STATE(106)] = 2641,
  [SMALL_STATE(107)] = 2651,
  [SMALL_STATE(108)] = 2661,
  [SMALL_STATE(109)] = 2671,
  [SMALL_STATE(110)] = 2687,
  [SMALL_STATE(111)] = 2703,
  [SMALL_STATE(112)] = 2713,
  [SMALL_STATE(113)] = 2723,
  [SMALL_STATE(114)] = 2739,
  [SMALL_STATE(115)] = 2749,
  [SMALL_STATE(116)] = 2763,
  [SMALL_STATE(117)] = 2779,
  [SMALL_STATE(118)] = 2795,
  [SMALL_STATE(119)] = 2805,
  [SMALL_STATE(120)] = 2821,
  [SMALL_STATE(121)] = 2837,
  [SMALL_STATE(122)] = 2851,
  [SMALL_STATE(123)] = 2862,
  [SMALL_STATE(124)] = 2875,
  [SMALL_STATE(125)] = 2888,
  [SMALL_STATE(126)] = 2901,
  [SMALL_STATE(127)] = 2910,
  [SMALL_STATE(128)] = 2919,
  [SMALL_STATE(129)] = 2928,
  [SMALL_STATE(130)] = 2937,
  [SMALL_STATE(131)] = 2950,
  [SMALL_STATE(132)] = 2959,
  [SMALL_STATE(133)] = 2970,
  [SMALL_STATE(134)] = 2983,
  [SMALL_STATE(135)] = 2996,
  [SMALL_STATE(136)] = 3009,
  [SMALL_STATE(137)] = 3018,
  [SMALL_STATE(138)] = 3027,
  [SMALL_STATE(139)] = 3035,
  [SMALL_STATE(140)] = 3045,
  [SMALL_STATE(141)] = 3055,
  [SMALL_STATE(142)] = 3063,
  [SMALL_STATE(143)] = 3071,
  [SMALL_STATE(144)] = 3081,
  [SMALL_STATE(145)] = 3091,
  [SMALL_STATE(146)] = 3099,
  [SMALL_STATE(147)] = 3107,
  [SMALL_STATE(148)] = 3117,
  [SMALL_STATE(149)] = 3127,
  [SMALL_STATE(150)] = 3137,
  [SMALL_STATE(151)] = 3145,
  [SMALL_STATE(152)] = 3155,
  [SMALL_STATE(153)] = 3163,
  [SMALL_STATE(154)] = 3171,
  [SMALL_STATE(155)] = 3179,
  [SMALL_STATE(156)] = 3187,
  [SMALL_STATE(157)] = 3197,
  [SMALL_STATE(158)] = 3204,
  [SMALL_STATE(159)] = 3211,
  [SMALL_STATE(160)] = 3218,
  [SMALL_STATE(161)] = 3225,
  [SMALL_STATE(162)] = 3232,
  [SMALL_STATE(163)] = 3239,
  [SMALL_STATE(164)] = 3246,
  [SMALL_STATE(165)] = 3253,
  [SMALL_STATE(166)] = 3260,
  [SMALL_STATE(167)] = 3267,
  [SMALL_STATE(168)] = 3274,
  [SMALL_STATE(169)] = 3281,
  [SMALL_STATE(170)] = 3288,
  [SMALL_STATE(171)] = 3295,
  [SMALL_STATE(172)] = 3302,
  [SMALL_STATE(173)] = 3309,
  [SMALL_STATE(174)] = 3316,
  [SMALL_STATE(175)] = 3323,
  [SMALL_STATE(176)] = 3330,
  [SMALL_STATE(177)] = 3337,
  [SMALL_STATE(178)] = 3344,
  [SMALL_STATE(179)] = 3351,
  [SMALL_STATE(180)] = 3358,
  [SMALL_STATE(181)] = 3365,
  [SMALL_STATE(182)] = 3372,
  [SMALL_STATE(183)] = 3379,
  [SMALL_STATE(184)] = 3386,
  [SMALL_STATE(185)] = 3393,
  [SMALL_STATE(186)] = 3400,
  [SMALL_STATE(187)] = 3407,
  [SMALL_STATE(188)] = 3414,
  [SMALL_STATE(189)] = 3421,
  [SMALL_STATE(190)] = 3428,
  [SMALL_STATE(191)] = 3435,
  [SMALL_STATE(192)] = 3442,
  [SMALL_STATE(193)] = 3449,
  [SMALL_STATE(194)] = 3456,
  [SMALL_STATE(195)] = 3463,
  [SMALL_STATE(196)] = 3470,
  [SMALL_STATE(197)] = 3477,
  [SMALL_STATE(198)] = 3484,
  [SMALL_STATE(199)] = 3491,
  [SMALL_STATE(200)] = 3498,
  [SMALL_STATE(201)] = 3505,
  [SMALL_STATE(202)] = 3512,
  [SMALL_STATE(203)] = 3519,
  [SMALL_STATE(204)] = 3526,
  [SMALL_STATE(205)] = 3533,
  [SMALL_STATE(206)] = 3540,
  [SMALL_STATE(207)] = 3547,
  [SMALL_STATE(208)] = 3554,
  [SMALL_STATE(209)] = 3561,
  [SMALL_STATE(210)] = 3568,
  [SMALL_STATE(211)] = 3575,
  [SMALL_STATE(212)] = 3582,
  [SMALL_STATE(213)] = 3589,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(50),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(50),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(18),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(198),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(213),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(151),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(49),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(87),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(87),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(20),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(210),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(179),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0), SHIFT(81),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldName, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldName, 1, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fieldName, 1, 0, 0), REDUCE(sym_referenceId, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structNameId, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referenceId, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structNameId, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_fieldName, 1, 0, 0), REDUCE(sym_referenceId, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arrayOrSliceType_repeat1, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_api_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_structType_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importStatement_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importStatement_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_importStatement, 1, 0, 0), SHIFT(135),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importStatement, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_serviceSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identPair_repeat1, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importValue, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importValue, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GOTYPE, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalFieldType, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalFieldType, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_referenceId, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupSpec, 4, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importGroup, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceStatement, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceSpec, 4, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeStruct, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeStatement, 1, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupSpec, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PATH, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntaxLit, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeSingleSpec, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 5, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importSpec, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importLit, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apiBody, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importGroup, 4, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceSpec, 5, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infoStatement, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceStatement, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAlias, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeGroupSpec_repeat1, 2, 0, 0),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeGroupSpec_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeAlias, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structType, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrayOrSliceType, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapFieldType, 5, 0, 0),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_starFieldType, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldType, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalField, 2, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_PATH_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 6, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceBody, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handlerPair, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 5, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 7, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 8, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 2, 0, 0),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identPair_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 9, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2, 0, 0),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceRoute, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceBody, 2, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 2, 0, 0),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identPair, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_importGroup_repeat1, 2, 0, 0),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_importGroup_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normalField, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docValue, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeFiled, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identValue, 1, 0, 0),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_identValue, 1, 0, 0), SHIFT(132),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymousField, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 1, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 2, 0, 0),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identValue_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymousField, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_httpRoute, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDocNew, 4, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDoc, 4, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_handlerValue, 1, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeGroupAlias, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pair_repeat1, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DURATION, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceDocNew, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_handlerPair_repeat1, 3, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceServerSpec, 4, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceName, 1, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceHandlerNew, 2, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_serviceHandler, 4, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 2, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 3, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [547] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_api, 1, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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

TS_PUBLIC const TSLanguage *tree_sitter_api(void) {
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

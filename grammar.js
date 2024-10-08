module.exports = grammar({
  name: 'goctl',

  extras: $ => [$.comment, /\s/],

  conflicts: $ => [
    [$.importStatement],
    [$.fieldName, $.referenceId],
    [$.identValue],
    [$.arrayOrSliceType],
    [$.identValue, $.PATH],
    [$.COMMON_PATH],
    [$.PATH]
  ],

  rules: {
    api: $ => seq(
      optional($.syntaxLit),
      repeat(choice(
        $.importStatement,
        $.infoStatement,
        $.apiBody
      )),
    ),

    syntaxLit: $ => seq('syntax', '=', $.VALUE),

    apiBody: $ => choice(
      $.typeStatement,
      $.serviceStatement
    ),

    importStatement: $ => repeat1($.importSpec),

    importSpec: $ => choice(
      $.importLit,
      $.importGroup
    ),

    importLit: $ => seq('import', $.importValue),

    importGroup: $ => seq(
      'import',
      '(',
      repeat($.importValue),
      ')'
    ),

    infoStatement: $ => seq('info', '(', $.pair, ')'),

    typeStatement: $ => choice(
      $.typeSingleSpec,
      $.typeGroupSpec
    ),

    typeGroupSpec: $ => seq(
      'type',
      '(',
      repeat(choice(
        $.typeGroupAlias,
        $.structType
      )),
      ')'
    ),

    typeGroupAlias: $ => seq($.structNameId, $.normalFieldType),

    typeSingleSpec: $ => choice(
      $.typeAlias,
      $.typeStruct
    ),

    typeAlias: $ => seq('type', $.structNameId, optional('='), $.normalFieldType),

    typeStruct: $ => seq('type', $.structType),

    typeFiled: $ => choice(
      $.anonymousField,
      $.normalField,
      $.structType
    ),

    normalField: $ => seq($.fieldName, $.fieldType, optional($.tag)),

    fieldType: $ => choice(
      $.normalFieldType,
      $.starFieldType,
      $.mapFieldType,
      $.arrayOrSliceType
    ),

    GOTYPE: $ => choice(
      'bool', 'uint8', 'uint16', 'uint32', 'uint64', 'int8', 'int16', 'int32', 'int64',
      'float32', 'float64', 'complex64', 'complex128', 'string', 'int', 'uint', 'uintptr',
      'byte', 'rune', 'time.Time'
    ),

    anonymousField: $ => seq(optional('*'), $.referenceId),

    normalFieldType: $ => choice(
      $.GOTYPE,
      $.referenceId,
      seq('interface', '{', '}')
    ),

    starFieldType: $ => seq('*', $.normalFieldType),

    mapFieldType: $ => seq(
      'map',
      '[',
      $.fieldType,
      ']',
      $.fieldType
    ),

    arrayOrSliceType: $ => seq(
      repeat1(seq('[', optional($.NUMBER), ']')),
      $.fieldType
    ),

    structType: $ => seq(
      $.structNameId,
      optional('struct'),
      '{',
      repeat($.typeFiled),
      '}'
    ),

    structNameId: $ => $.IDENT,

    fieldName: $ => $.IDENT,

    referenceId: $ => seq(optional(seq($.IDENT, '.')), $.IDENT),

    tag: $ => $.RAW_STRING,

    body: $ => seq(
      optional(seq('[', ']')),
      optional('*'),
      choice($.IDENT, $.GOTYPE)
    ),

    serviceStatement: $ => seq(
      optional($.serviceServerSpec),
      $.serviceSpec
    ),

    serviceServerSpec: $ => seq('@server', '(', $.identPair, ')'),

    serviceSpec: $ => seq(
      'service',
      $.serviceName,
      '{',
      repeat($.serviceBody),
      '}'
    ),

    serviceName: $ => $.IDENT,

    serviceBody: $ => seq(
      optional(choice($.serviceDoc, $.serviceDocNew)),
      choice($.serviceHandler, $.serviceHandlerNew),
      $.serviceRoute
    ),

    serviceDoc: $ => seq('@doc', '(', $.pair, ')'),

    serviceDocNew: $ => seq('@doc', choice($.docValue, seq('(', $.docValue, ')'))),

    serviceHandler: $ => seq('@server', '(', $.handlerPair, ')'),

    serviceHandlerNew: $ => seq('@handler', $.handlerValue),

    serviceRoute: $ => seq(
      $.httpRoute,
      optional(seq('(', optional($.body), ')')),
      optional(seq('returns', '(', optional($.body), ')')),
      optional(';')
    ),

    httpRoute: $ => seq($.HTTPMETHOD, $.PATH),

    identPair: $ => repeat1(seq($.key, ':', choice($.DURATION, $.identValue, $.PATH, $.NUMBER))),

    handlerPair: $ => repeat1(seq($.key, ':', $.handlerValue)),

    identValue: $ => repeat1(seq($.IDENT, optional(','))),

    handlerValue: $ => $.IDENT,

    importValue: $ => seq($.VALUE, optional(seq('as', $.IDENT))),

    docValue: $ => $.VALUE,

    pair: $ => repeat1(seq($.key, ':', optional($.VALUE))),

    key: $ => $.IDENT,

    VALUE: $ => token(seq('"', repeat(/[^"\r\n:]/), '"')),

    RAW_STRING: $ => token(seq('`', repeat(/[^`\r\n]/), '`')),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
    )),

    IDENT: $ => token(seq(
      /[a-zA-Z_]/,
      repeat(/[a-zA-Z0-9_-]/)
    )),

    NUMBER: $ => token(/[0-9]+/),

    DURATION: $ => seq(
      $.NUMBER,
      choice('ns', 'us', 'µs', 'ms', 's', 'm', 'h')
    ),

    HTTPMETHOD: $ => token(choice(
      'get', 'head', 'post', 'put', 'patch', 'delete', 'connect', 'options', 'trace'
    )),

    DYNAMIC_PATH: $ => seq(
      '/:',
      $.IDENT,
    ),

    COMMON_PATH: $ => seq(
      '/',
      optional(choice(
        $.IDENT,
        $.NUMBER
      ))
    ),

    PATH: $ => repeat1(
      choice(
        $.IDENT,
        $.COMMON_PATH,
        $.DYNAMIC_PATH
      )
    )
  }
})

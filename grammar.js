const
  letter = /[a-zA-Z]/,
  decimal_digit = /[0-9]/
  octal_digit = /[0-7]/
  hex_digit = /[0-9A-Fa-f]/

module.exports = grammar({
  name: 'api',

  extras: $ => [$.comment, /\s/],

  rules: {
    api: $ => seq(
      optional($.syntaxLit),
      repeat(choice(
        $.importStatement,
        $.infoStatement,
        $.apiBody
      )),
      $.EOF
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
      ';'
    ),

    httpRoute: $ => seq($.HTTPMETHOD, $.PATH),

    identPair: $ => repeat(seq($.key, ':', choice($.DURATION, $.identValue, $.PATH, $.NUMBER))),

    handlerPair: $ => repeat1(seq($.key, ':', $.handlerValue)),

    identValue: $ => repeat1(seq($.IDENT, optional(','))),

    handlerValue: $ => $.IDENT,

    importValue: $ => seq($.VALUE, optional(seq('as', $.IDENT))),

    docValue: $ => $.VALUE,

    pair: $ => repeat(seq($.key, ':', optional($.VALUE))),

    key: $ => $.IDENT,

    EOF: $ => 'EOF',

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

    DURATION: $ => token(seq(
      $.NUMBER,
      choice('ns', 'us', 'µs', 'ms', 's', 'm', 'h')
    )),

    HTTPMETHOD: $ => token(choice(
      'get', 'head', 'post', 'put', 'patch', 'delete', 'connect', 'options', 'trace'
    )),

    PATH: $ => token(repeat1(seq(
      choice('/', '/:'),
      $.IDENT
    )))
  }
});
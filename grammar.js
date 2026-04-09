/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "bruno",

  extras: _ => [/\s+|(\r?\n)/],

  externals: $ => [$.rawtext],

  rules: {
    source_file: $ => repeat(field("tag",
			choice(
      	$.meta,
      	$.http,
      	$.query,
      	$.params,
      	$.headers,
      	$.metadata,
      	$.auths,
      	$.bodies,
      	$.varsandassert,
      	$.script,
      	$.tests,
      	$.docs,
      	$.example,
      	$.settings,
			)
		)),

    meta: $ => seq(
			alias("meta", $.keyword),
			$.dictionary
		),

    http: $ => seq(
			alias($.http_verb, $.keyword),
			$.dictionary
		),
    http_verb: _ => choice(
      "get",
      "post",
      "put",
      "delete",
      "patch",
      "options",
      "head",
      "connect",
      "trace",
      "http",
      "grpc",
      "ws",
    ),

    query: $ => seq(
      alias("query", $.keyword),
      $.dictionary,
    ),

    params: $ => choice(
      $.params_query,
      $.params_path,
    ),
    params_query: $ => seq(
      alias("params:query", $.keyword),
      $.dictionary,
    ),
    params_path: $ => seq(
      alias("params:path", $.keyword),
      $.dictionary,
    ),

    headers: $ => seq(
      alias("headers", $.keyword),
      $.dictionary,
    ),

    metadata: $ => seq(
      alias("metadata", $.keyword),
      $.dictionary,
    ),

    auths: $ => choice(
      $.auth,
      $.authawsv4,
      $.authbasic,
      $.authbearer,
      $.authdigest,
      $.authntlm,
      $.authwsse,
      $.authapikey,
      $.authoauth1,
      $.authoauth2,
      $.authoauth2_additional,
    ),
    auth: $ => seq(
      alias("auth", $.keyword),
      $.dictionary,
    ),
    authawsv4: $ => seq(
      alias("auth:awsv4", $.keyword),
      $.dictionary,
    ),
    authbasic: $ => seq(
      alias("auth:basic", $.keyword),
      $.dictionary,
    ),
    authbearer: $ => seq(
      alias("auth:bearer", $.keyword),
      $.dictionary,
    ),
    authdigest: $ => seq(
      alias("auth:digest", $.keyword),
      $.dictionary,
    ),
    authntlm: $ => seq(
      alias("auth:ntlm", $.keyword),
      $.dictionary,
    ),
    authwsse: $ => seq(
      alias("auth:wsse", $.keyword),
      $.dictionary,
    ),
    authapikey: $ => seq(
      alias("auth:apikey", $.keyword),
      $.dictionary,
    ),
    authoauth1: $ => seq(
      alias("auth:oauth1", $.keyword),
      $.dictionary,
    ),
    authoauth2: $ => seq(
      alias("auth:oauth2", $.keyword),
      $.dictionary,
    ),
    authoauth2_additional: $ => seq(
      alias($.authoauth2_additional_keyword, $.keyword),
      $.dictionary,
    ),
    authoauth2_additional_keyword: _ => choice(
      "auth:oauth2:additional_params:auth_req:headers",
      "auth:oauth2:additional_params:auth_req:queryparams",
      "auth:oauth2:additional_params:access_token_req:headers",
      "auth:oauth2:additional_params:access_token_req:queryparams",
      "auth:oauth2:additional_params:access_token_req:body",
      "auth:oauth2:additional_params:refresh_token_req:headers",
      "auth:oauth2:additional_params:refresh_token_req:queryparams",
      "auth:oauth2:additional_params:refresh_token_req:body",
    ),

    bodies: $ => choice(
      $.bodyjson,
      $.bodytext,
      $.bodyxml,
      $.bodysparql,
      $.bodygraphql,
      $.bodygraphqlvars,
      $.bodyforms,
      $.bodyfile,
      $.bodygrpc,
      $.bodyws,
      $.body,
    ),
    bodyforms: $ => choice(
      $.bodyformurlencoded,
      $.bodyformmultipart,
    ),
    body: $ => seq(
			alias("body", $.keyword),
			$.textblock
		),
    bodyjson: $ => seq(
      alias("body:json", $.keyword),
      $.textblock,
    ),
    bodytext: $ => seq(
      alias("body:text", $.keyword),
      $.textblock,
    ),
    bodyxml: $ => seq(
      alias("body:xml", $.keyword),
      $.textblock,
    ),
    bodysparql: $ => seq(
      alias("body:sparql", $.keyword),
      $.textblock,
    ),
    bodygraphql: $ => seq(
      alias("body:graphql", $.keyword),
      $.textblock,
    ),
    bodygraphqlvars: $ => seq(
      alias("body:graphql:vars", $.keyword),
      $.textblock,
    ),
    bodyformurlencoded: $ => seq(
      alias("body:form-urlencoded", $.keyword),
      $.dictionary,
    ),
    bodyformmultipart: $ => seq(
      alias("body:multipart-form", $.keyword),
      $.dictionary,
    ),
    bodyfile: $ => seq(
      alias("body:file", $.keyword),
      $.textblock,
    ),
    bodygrpc: $ => seq(
      alias("body:grpc", $.keyword),
      $.textblock,
    ),
    bodyws: $ => seq(
      alias("body:ws", $.keyword),
      $.textblock,
    ),

    varsandassert: $ => choice(
			$.vars,
			$.vars_secret,
			$.varsreq,
			$.varsres,
			$.assert
		),
		vars: $ => seq(
      alias("vars", $.keyword),
      $.dictionary,
		),
		vars_secret: $ => seq(
			alias("vars:secret", $.keyword),
			$.array,
		),
    varsreq: $ => seq(
      alias("vars:pre-request", $.keyword),
      $.dictionary,
    ),
    varsres: $ => seq(
      alias("vars:post-response", $.keyword),
      $.dictionary,
    ),

    assert: $ => seq(
      alias("assert", $.keyword),
      $.assert_dictionary,
    ),

    script: $ => choice($.scriptreq, $.scriptres),
    scriptreq: $ => seq(
      alias("script:pre-request", $.keyword),
      $.textblock,
    ),
    scriptres: $ => seq(
      alias("script:post-response", $.keyword),
      $.textblock,
    ),

    tests: $ => seq(
			alias("tests", $.keyword),
			$.textblock
		),

    docs: $ => seq(
			alias("docs", $.keyword),
			$.textblock
		),

    example: $ => seq(
      alias("example", $.keyword),
      $.textblock,
    ),

    settings: $ => seq(
      alias("settings", $.keyword),
      $.dictionary,
    ),

    textblock: $ => seq(
			"{",
			optional($.rawtext),
			"}"
		),

		array: $ => seq(
			"[",
			repeat(seq(
				$.array_value,
				optional(","),
			)),
			"]"
		),
		array_value: _ => /[^\r\n\s\t\[\],]+/,

    dictionary: $ => seq(
			"{",
			repeat($.dictionary_pair),
			"}"
		),
    dictionary_pair: $ => seq(
			$.key,
			":",
			$.value
		),

    assert_dictionary: $ => seq(
      "{",
      repeat($.assert_dictionary_pair),
      "}",
    ),
    assert_dictionary_pair: $ => seq(
			$.assert_key,
			":",
			$.value
		),
    assert_key: _ => /[^\r\n:]+/,

    key: _ => /[^\s\r\n:]+/,
    value: _ => /[^\r\n]*/,
  },
});

#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 123
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_meta = 1,
  anon_sym_get = 2,
  anon_sym_post = 3,
  anon_sym_put = 4,
  anon_sym_delete = 5,
  anon_sym_patch = 6,
  anon_sym_options = 7,
  anon_sym_head = 8,
  anon_sym_connect = 9,
  anon_sym_trace = 10,
  anon_sym_http = 11,
  anon_sym_grpc = 12,
  anon_sym_ws = 13,
  anon_sym_query = 14,
  anon_sym_params_COLONquery = 15,
  anon_sym_params_COLONpath = 16,
  anon_sym_headers = 17,
  anon_sym_metadata = 18,
  anon_sym_auth = 19,
  anon_sym_auth_COLONawsv4 = 20,
  anon_sym_auth_COLONbasic = 21,
  anon_sym_auth_COLONbearer = 22,
  anon_sym_auth_COLONdigest = 23,
  anon_sym_auth_COLONntlm = 24,
  anon_sym_auth_COLONwsse = 25,
  anon_sym_auth_COLONapikey = 26,
  anon_sym_auth_COLONoauth1 = 27,
  anon_sym_auth_COLONoauth2 = 28,
  anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders = 29,
  anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams = 30,
  anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders = 31,
  anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams = 32,
  anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody = 33,
  anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders = 34,
  anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams = 35,
  anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody = 36,
  anon_sym_body = 37,
  anon_sym_body_COLONjson = 38,
  anon_sym_body_COLONtext = 39,
  anon_sym_body_COLONxml = 40,
  anon_sym_body_COLONsparql = 41,
  anon_sym_body_COLONgraphql = 42,
  anon_sym_body_COLONgraphql_COLONvars = 43,
  anon_sym_body_COLONform_DASHurlencoded = 44,
  anon_sym_body_COLONmultipart_DASHform = 45,
  anon_sym_body_COLONfile = 46,
  anon_sym_body_COLONgrpc = 47,
  anon_sym_body_COLONws = 48,
  anon_sym_vars = 49,
  anon_sym_vars_COLONsecret = 50,
  anon_sym_vars_COLONpre_DASHrequest = 51,
  anon_sym_vars_COLONpost_DASHresponse = 52,
  anon_sym_assert = 53,
  anon_sym_script_COLONpre_DASHrequest = 54,
  anon_sym_script_COLONpost_DASHresponse = 55,
  anon_sym_tests = 56,
  anon_sym_docs = 57,
  anon_sym_example = 58,
  anon_sym_settings = 59,
  anon_sym_LBRACE = 60,
  anon_sym_RBRACE = 61,
  anon_sym_LBRACK = 62,
  anon_sym_COMMA = 63,
  anon_sym_RBRACK = 64,
  sym_array_value = 65,
  anon_sym_COLON = 66,
  sym_assert_key = 67,
  sym_key = 68,
  sym_value = 69,
  sym_rawtext = 70,
  sym_source_file = 71,
  sym_meta = 72,
  sym_http = 73,
  sym_http_verb = 74,
  sym_query = 75,
  sym_params = 76,
  sym_params_query = 77,
  sym_params_path = 78,
  sym_headers = 79,
  sym_metadata = 80,
  sym_auths = 81,
  sym_auth = 82,
  sym_authawsv4 = 83,
  sym_authbasic = 84,
  sym_authbearer = 85,
  sym_authdigest = 86,
  sym_authntlm = 87,
  sym_authwsse = 88,
  sym_authapikey = 89,
  sym_authoauth1 = 90,
  sym_authoauth2 = 91,
  sym_authoauth2_additional = 92,
  sym_authoauth2_additional_keyword = 93,
  sym_bodies = 94,
  sym_bodyforms = 95,
  sym_body = 96,
  sym_bodyjson = 97,
  sym_bodytext = 98,
  sym_bodyxml = 99,
  sym_bodysparql = 100,
  sym_bodygraphql = 101,
  sym_bodygraphqlvars = 102,
  sym_bodyformurlencoded = 103,
  sym_bodyformmultipart = 104,
  sym_bodyfile = 105,
  sym_bodygrpc = 106,
  sym_bodyws = 107,
  sym_varsandassert = 108,
  sym_vars = 109,
  sym_vars_secret = 110,
  sym_varsreq = 111,
  sym_varsres = 112,
  sym_assert = 113,
  sym_script = 114,
  sym_scriptreq = 115,
  sym_scriptres = 116,
  sym_tests = 117,
  sym_docs = 118,
  sym_example = 119,
  sym_settings = 120,
  sym_textblock = 121,
  sym_array = 122,
  sym_dictionary = 123,
  sym_dictionary_pair = 124,
  sym_assert_dictionary = 125,
  sym_assert_dictionary_pair = 126,
  aux_sym_source_file_repeat1 = 127,
  aux_sym_array_repeat1 = 128,
  aux_sym_dictionary_repeat1 = 129,
  aux_sym_assert_dictionary_repeat1 = 130,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_meta] = "keyword",
  [anon_sym_get] = "get",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_patch] = "patch",
  [anon_sym_options] = "options",
  [anon_sym_head] = "head",
  [anon_sym_connect] = "connect",
  [anon_sym_trace] = "trace",
  [anon_sym_http] = "http",
  [anon_sym_grpc] = "grpc",
  [anon_sym_ws] = "ws",
  [anon_sym_query] = "keyword",
  [anon_sym_params_COLONquery] = "keyword",
  [anon_sym_params_COLONpath] = "keyword",
  [anon_sym_headers] = "keyword",
  [anon_sym_metadata] = "keyword",
  [anon_sym_auth] = "keyword",
  [anon_sym_auth_COLONawsv4] = "keyword",
  [anon_sym_auth_COLONbasic] = "keyword",
  [anon_sym_auth_COLONbearer] = "keyword",
  [anon_sym_auth_COLONdigest] = "keyword",
  [anon_sym_auth_COLONntlm] = "keyword",
  [anon_sym_auth_COLONwsse] = "keyword",
  [anon_sym_auth_COLONapikey] = "keyword",
  [anon_sym_auth_COLONoauth1] = "keyword",
  [anon_sym_auth_COLONoauth2] = "keyword",
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders] = "auth:oauth2:additional_params:auth_req:headers",
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams] = "auth:oauth2:additional_params:auth_req:queryparams",
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders] = "auth:oauth2:additional_params:access_token_req:headers",
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams] = "auth:oauth2:additional_params:access_token_req:queryparams",
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody] = "auth:oauth2:additional_params:access_token_req:body",
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders] = "auth:oauth2:additional_params:refresh_token_req:headers",
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams] = "auth:oauth2:additional_params:refresh_token_req:queryparams",
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody] = "auth:oauth2:additional_params:refresh_token_req:body",
  [anon_sym_body] = "keyword",
  [anon_sym_body_COLONjson] = "keyword",
  [anon_sym_body_COLONtext] = "keyword",
  [anon_sym_body_COLONxml] = "keyword",
  [anon_sym_body_COLONsparql] = "keyword",
  [anon_sym_body_COLONgraphql] = "keyword",
  [anon_sym_body_COLONgraphql_COLONvars] = "keyword",
  [anon_sym_body_COLONform_DASHurlencoded] = "keyword",
  [anon_sym_body_COLONmultipart_DASHform] = "keyword",
  [anon_sym_body_COLONfile] = "keyword",
  [anon_sym_body_COLONgrpc] = "keyword",
  [anon_sym_body_COLONws] = "keyword",
  [anon_sym_vars] = "keyword",
  [anon_sym_vars_COLONsecret] = "keyword",
  [anon_sym_vars_COLONpre_DASHrequest] = "keyword",
  [anon_sym_vars_COLONpost_DASHresponse] = "keyword",
  [anon_sym_assert] = "keyword",
  [anon_sym_script_COLONpre_DASHrequest] = "keyword",
  [anon_sym_script_COLONpost_DASHresponse] = "keyword",
  [anon_sym_tests] = "keyword",
  [anon_sym_docs] = "keyword",
  [anon_sym_example] = "keyword",
  [anon_sym_settings] = "keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_array_value] = "array_value",
  [anon_sym_COLON] = ":",
  [sym_assert_key] = "assert_key",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_rawtext] = "rawtext",
  [sym_source_file] = "source_file",
  [sym_meta] = "meta",
  [sym_http] = "http",
  [sym_http_verb] = "keyword",
  [sym_query] = "query",
  [sym_params] = "params",
  [sym_params_query] = "params_query",
  [sym_params_path] = "params_path",
  [sym_headers] = "headers",
  [sym_metadata] = "metadata",
  [sym_auths] = "auths",
  [sym_auth] = "auth",
  [sym_authawsv4] = "authawsv4",
  [sym_authbasic] = "authbasic",
  [sym_authbearer] = "authbearer",
  [sym_authdigest] = "authdigest",
  [sym_authntlm] = "authntlm",
  [sym_authwsse] = "authwsse",
  [sym_authapikey] = "authapikey",
  [sym_authoauth1] = "authoauth1",
  [sym_authoauth2] = "authoauth2",
  [sym_authoauth2_additional] = "authoauth2_additional",
  [sym_authoauth2_additional_keyword] = "keyword",
  [sym_bodies] = "bodies",
  [sym_bodyforms] = "bodyforms",
  [sym_body] = "body",
  [sym_bodyjson] = "bodyjson",
  [sym_bodytext] = "bodytext",
  [sym_bodyxml] = "bodyxml",
  [sym_bodysparql] = "bodysparql",
  [sym_bodygraphql] = "bodygraphql",
  [sym_bodygraphqlvars] = "bodygraphqlvars",
  [sym_bodyformurlencoded] = "bodyformurlencoded",
  [sym_bodyformmultipart] = "bodyformmultipart",
  [sym_bodyfile] = "bodyfile",
  [sym_bodygrpc] = "bodygrpc",
  [sym_bodyws] = "bodyws",
  [sym_varsandassert] = "varsandassert",
  [sym_vars] = "vars",
  [sym_vars_secret] = "vars_secret",
  [sym_varsreq] = "varsreq",
  [sym_varsres] = "varsres",
  [sym_assert] = "assert",
  [sym_script] = "script",
  [sym_scriptreq] = "scriptreq",
  [sym_scriptres] = "scriptres",
  [sym_tests] = "tests",
  [sym_docs] = "docs",
  [sym_example] = "example",
  [sym_settings] = "settings",
  [sym_textblock] = "textblock",
  [sym_array] = "array",
  [sym_dictionary] = "dictionary",
  [sym_dictionary_pair] = "dictionary_pair",
  [sym_assert_dictionary] = "assert_dictionary",
  [sym_assert_dictionary_pair] = "assert_dictionary_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_assert_dictionary_repeat1] = "assert_dictionary_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_connect] = anon_sym_connect,
  [anon_sym_trace] = anon_sym_trace,
  [anon_sym_http] = anon_sym_http,
  [anon_sym_grpc] = anon_sym_grpc,
  [anon_sym_ws] = anon_sym_ws,
  [anon_sym_query] = anon_sym_meta,
  [anon_sym_params_COLONquery] = anon_sym_meta,
  [anon_sym_params_COLONpath] = anon_sym_meta,
  [anon_sym_headers] = anon_sym_meta,
  [anon_sym_metadata] = anon_sym_meta,
  [anon_sym_auth] = anon_sym_meta,
  [anon_sym_auth_COLONawsv4] = anon_sym_meta,
  [anon_sym_auth_COLONbasic] = anon_sym_meta,
  [anon_sym_auth_COLONbearer] = anon_sym_meta,
  [anon_sym_auth_COLONdigest] = anon_sym_meta,
  [anon_sym_auth_COLONntlm] = anon_sym_meta,
  [anon_sym_auth_COLONwsse] = anon_sym_meta,
  [anon_sym_auth_COLONapikey] = anon_sym_meta,
  [anon_sym_auth_COLONoauth1] = anon_sym_meta,
  [anon_sym_auth_COLONoauth2] = anon_sym_meta,
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders] = anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams] = anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders] = anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams] = anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody] = anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders] = anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams] = anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody] = anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
  [anon_sym_body] = anon_sym_meta,
  [anon_sym_body_COLONjson] = anon_sym_meta,
  [anon_sym_body_COLONtext] = anon_sym_meta,
  [anon_sym_body_COLONxml] = anon_sym_meta,
  [anon_sym_body_COLONsparql] = anon_sym_meta,
  [anon_sym_body_COLONgraphql] = anon_sym_meta,
  [anon_sym_body_COLONgraphql_COLONvars] = anon_sym_meta,
  [anon_sym_body_COLONform_DASHurlencoded] = anon_sym_meta,
  [anon_sym_body_COLONmultipart_DASHform] = anon_sym_meta,
  [anon_sym_body_COLONfile] = anon_sym_meta,
  [anon_sym_body_COLONgrpc] = anon_sym_meta,
  [anon_sym_body_COLONws] = anon_sym_meta,
  [anon_sym_vars] = anon_sym_meta,
  [anon_sym_vars_COLONsecret] = anon_sym_meta,
  [anon_sym_vars_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_vars_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_assert] = anon_sym_meta,
  [anon_sym_script_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_script_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_tests] = anon_sym_meta,
  [anon_sym_docs] = anon_sym_meta,
  [anon_sym_example] = anon_sym_meta,
  [anon_sym_settings] = anon_sym_meta,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_array_value] = sym_array_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_assert_key] = sym_assert_key,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_rawtext] = sym_rawtext,
  [sym_source_file] = sym_source_file,
  [sym_meta] = sym_meta,
  [sym_http] = sym_http,
  [sym_http_verb] = anon_sym_meta,
  [sym_query] = sym_query,
  [sym_params] = sym_params,
  [sym_params_query] = sym_params_query,
  [sym_params_path] = sym_params_path,
  [sym_headers] = sym_headers,
  [sym_metadata] = sym_metadata,
  [sym_auths] = sym_auths,
  [sym_auth] = sym_auth,
  [sym_authawsv4] = sym_authawsv4,
  [sym_authbasic] = sym_authbasic,
  [sym_authbearer] = sym_authbearer,
  [sym_authdigest] = sym_authdigest,
  [sym_authntlm] = sym_authntlm,
  [sym_authwsse] = sym_authwsse,
  [sym_authapikey] = sym_authapikey,
  [sym_authoauth1] = sym_authoauth1,
  [sym_authoauth2] = sym_authoauth2,
  [sym_authoauth2_additional] = sym_authoauth2_additional,
  [sym_authoauth2_additional_keyword] = anon_sym_meta,
  [sym_bodies] = sym_bodies,
  [sym_bodyforms] = sym_bodyforms,
  [sym_body] = sym_body,
  [sym_bodyjson] = sym_bodyjson,
  [sym_bodytext] = sym_bodytext,
  [sym_bodyxml] = sym_bodyxml,
  [sym_bodysparql] = sym_bodysparql,
  [sym_bodygraphql] = sym_bodygraphql,
  [sym_bodygraphqlvars] = sym_bodygraphqlvars,
  [sym_bodyformurlencoded] = sym_bodyformurlencoded,
  [sym_bodyformmultipart] = sym_bodyformmultipart,
  [sym_bodyfile] = sym_bodyfile,
  [sym_bodygrpc] = sym_bodygrpc,
  [sym_bodyws] = sym_bodyws,
  [sym_varsandassert] = sym_varsandassert,
  [sym_vars] = sym_vars,
  [sym_vars_secret] = sym_vars_secret,
  [sym_varsreq] = sym_varsreq,
  [sym_varsres] = sym_varsres,
  [sym_assert] = sym_assert,
  [sym_script] = sym_script,
  [sym_scriptreq] = sym_scriptreq,
  [sym_scriptres] = sym_scriptres,
  [sym_tests] = sym_tests,
  [sym_docs] = sym_docs,
  [sym_example] = sym_example,
  [sym_settings] = sym_settings,
  [sym_textblock] = sym_textblock,
  [sym_array] = sym_array,
  [sym_dictionary] = sym_dictionary,
  [sym_dictionary_pair] = sym_dictionary_pair,
  [sym_assert_dictionary] = sym_assert_dictionary,
  [sym_assert_dictionary_pair] = sym_assert_dictionary_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_assert_dictionary_repeat1] = aux_sym_assert_dictionary_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_grpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_params_COLONquery] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_params_COLONpath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_headers] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONawsv4] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONbasic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONbearer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONdigest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONntlm] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONwsse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONapikey] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONoauth1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONoauth2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONjson] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONtext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONxml] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONsparql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgraphql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgraphql_COLONvars] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONform_DASHurlencoded] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONmultipart_DASHform] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgrpc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONws] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONsecret] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONpre_DASHrequest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONpost_DASHresponse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script_COLONpre_DASHrequest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script_COLONpost_DASHresponse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tests] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_docs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_example] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_settings] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_array_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_assert_key] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_rawtext] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_http] = {
    .visible = true,
    .named = true,
  },
  [sym_http_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_params_query] = {
    .visible = true,
    .named = true,
  },
  [sym_params_path] = {
    .visible = true,
    .named = true,
  },
  [sym_headers] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_auths] = {
    .visible = true,
    .named = true,
  },
  [sym_auth] = {
    .visible = true,
    .named = true,
  },
  [sym_authawsv4] = {
    .visible = true,
    .named = true,
  },
  [sym_authbasic] = {
    .visible = true,
    .named = true,
  },
  [sym_authbearer] = {
    .visible = true,
    .named = true,
  },
  [sym_authdigest] = {
    .visible = true,
    .named = true,
  },
  [sym_authntlm] = {
    .visible = true,
    .named = true,
  },
  [sym_authwsse] = {
    .visible = true,
    .named = true,
  },
  [sym_authapikey] = {
    .visible = true,
    .named = true,
  },
  [sym_authoauth1] = {
    .visible = true,
    .named = true,
  },
  [sym_authoauth2] = {
    .visible = true,
    .named = true,
  },
  [sym_authoauth2_additional] = {
    .visible = true,
    .named = true,
  },
  [sym_authoauth2_additional_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_bodies] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyforms] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyjson] = {
    .visible = true,
    .named = true,
  },
  [sym_bodytext] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyxml] = {
    .visible = true,
    .named = true,
  },
  [sym_bodysparql] = {
    .visible = true,
    .named = true,
  },
  [sym_bodygraphql] = {
    .visible = true,
    .named = true,
  },
  [sym_bodygraphqlvars] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyformurlencoded] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyformmultipart] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyfile] = {
    .visible = true,
    .named = true,
  },
  [sym_bodygrpc] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyws] = {
    .visible = true,
    .named = true,
  },
  [sym_varsandassert] = {
    .visible = true,
    .named = true,
  },
  [sym_vars] = {
    .visible = true,
    .named = true,
  },
  [sym_vars_secret] = {
    .visible = true,
    .named = true,
  },
  [sym_varsreq] = {
    .visible = true,
    .named = true,
  },
  [sym_varsres] = {
    .visible = true,
    .named = true,
  },
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptreq] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptres] = {
    .visible = true,
    .named = true,
  },
  [sym_tests] = {
    .visible = true,
    .named = true,
  },
  [sym_docs] = {
    .visible = true,
    .named = true,
  },
  [sym_example] = {
    .visible = true,
    .named = true,
  },
  [sym_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_textblock] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_dictionary_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_tag = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_tag] = "tag",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_tag, 0},
  [1] =
    {field_tag, 0, .inherited = true},
  [2] =
    {field_tag, 0, .inherited = true},
    {field_tag, 1, .inherited = true},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(355);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '[') ADVANCE(419);
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'b') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == 'h') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 'q') ADVANCE(332);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == 'v') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(263);
      if (lookahead == '{') ADVANCE(415);
      if (lookahead == '}') ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '}') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(426);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '}') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(425);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(422);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(334);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(241);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(242);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(262);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(261);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(382);
      if (lookahead == '2') ADVANCE(383);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(375);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(210);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(141);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(319);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(244);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(251);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(214);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(259);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(331);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(356);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(289);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(195);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == 'q') ADVANCE(340);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(198);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'q') ADVANCE(341);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(367);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(351);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'g') ADVANCE(228);
      if (lookahead == 'j') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(333);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(250);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(374);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(361);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(371);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == 'q') ADVANCE(337);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(224);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 154:
      if (lookahead == 'k') ADVANCE(96);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(104);
      END_STATE();
    case 156:
      if (lookahead == 'k') ADVANCE(129);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(379);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(400);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(267);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(275);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(279);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(366);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(303);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'w') ADVANCE(271);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 'q') ADVANCE(336);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(313);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 221:
      if (lookahead == 'q') ADVANCE(14);
      END_STATE();
    case 222:
      if (lookahead == 'q') ADVANCE(15);
      END_STATE();
    case 223:
      if (lookahead == 'q') ADVANCE(158);
      END_STATE();
    case 224:
      if (lookahead == 'q') ADVANCE(159);
      END_STATE();
    case 225:
      if (lookahead == 'q') ADVANCE(338);
      END_STATE();
    case 226:
      if (lookahead == 'q') ADVANCE(17);
      END_STATE();
    case 227:
      if (lookahead == 'q') ADVANCE(339);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(354);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(389);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 279:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 280:
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 'u') ADVANCE(301);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(323);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(329);
      END_STATE();
    case 293:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 294:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 295:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 296:
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 297:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 298:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 299:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 332:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 333:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 334:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 335:
      if (lookahead == 'u') ADVANCE(316);
      END_STATE();
    case 336:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 337:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 338:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 339:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 340:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 341:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 342:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 343:
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 344:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 345:
      if (lookahead == 'x') ADVANCE(308);
      END_STATE();
    case 346:
      if (lookahead == 'y') ADVANCE(392);
      END_STATE();
    case 347:
      if (lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 348:
      if (lookahead == 'y') ADVANCE(381);
      END_STATE();
    case 349:
      if (lookahead == 'y') ADVANCE(370);
      END_STATE();
    case 350:
      if (lookahead == 'y') ADVANCE(388);
      END_STATE();
    case 351:
      if (lookahead == 'y') ADVANCE(391);
      END_STATE();
    case 352:
      if (lookahead == 'y') ADVANCE(216);
      END_STATE();
    case 353:
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 354:
      if (lookahead == 'y') ADVANCE(219);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_meta);
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_http);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_grpc);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_ws);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_params_COLONquery);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_params_COLONpath);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_metadata);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_auth);
      if (lookahead == ':') ADVANCE(27);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_auth_COLONawsv4);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_auth_COLONbasic);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_auth_COLONbearer);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_auth_COLONdigest);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_auth_COLONntlm);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_auth_COLONwsse);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_auth_COLONapikey);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth1);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2);
      if (lookahead == ':') ADVANCE(34);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_body_COLONjson);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_body_COLONtext);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_body_COLONxml);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_body_COLONsparql);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql);
      if (lookahead == ':') ADVANCE(343);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql_COLONvars);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_body_COLONform_DASHurlencoded);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_body_COLONmultipart_DASHform);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_body_COLONfile);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_body_COLONgrpc);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_body_COLONws);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_vars);
      if (lookahead == ':') ADVANCE(204);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_vars_COLONsecret);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_vars_COLONpre_DASHrequest);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_vars_COLONpost_DASHresponse);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_script_COLONpre_DASHrequest);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_script_COLONpost_DASHresponse);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_example);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_settings);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(426);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(425);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_array_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead == '}') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(428);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 427},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 427},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
};

enum {
  ts_external_token_rawtext = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_rawtext] = sym_rawtext,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_rawtext] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_connect] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [anon_sym_http] = ACTIONS(1),
    [anon_sym_grpc] = ACTIONS(1),
    [anon_sym_ws] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_params_COLONquery] = ACTIONS(1),
    [anon_sym_params_COLONpath] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [anon_sym_metadata] = ACTIONS(1),
    [anon_sym_auth] = ACTIONS(1),
    [anon_sym_auth_COLONawsv4] = ACTIONS(1),
    [anon_sym_auth_COLONbasic] = ACTIONS(1),
    [anon_sym_auth_COLONbearer] = ACTIONS(1),
    [anon_sym_auth_COLONdigest] = ACTIONS(1),
    [anon_sym_auth_COLONntlm] = ACTIONS(1),
    [anon_sym_auth_COLONwsse] = ACTIONS(1),
    [anon_sym_auth_COLONapikey] = ACTIONS(1),
    [anon_sym_auth_COLONoauth1] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams] = ACTIONS(1),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_body_COLONjson] = ACTIONS(1),
    [anon_sym_body_COLONtext] = ACTIONS(1),
    [anon_sym_body_COLONxml] = ACTIONS(1),
    [anon_sym_body_COLONsparql] = ACTIONS(1),
    [anon_sym_body_COLONgraphql] = ACTIONS(1),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(1),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(1),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(1),
    [anon_sym_body_COLONfile] = ACTIONS(1),
    [anon_sym_body_COLONgrpc] = ACTIONS(1),
    [anon_sym_body_COLONws] = ACTIONS(1),
    [anon_sym_vars] = ACTIONS(1),
    [anon_sym_vars_COLONsecret] = ACTIONS(1),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_tests] = ACTIONS(1),
    [anon_sym_docs] = ACTIONS(1),
    [anon_sym_example] = ACTIONS(1),
    [anon_sym_settings] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_rawtext] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym_meta] = STATE(44),
    [sym_http] = STATE(44),
    [sym_http_verb] = STATE(77),
    [sym_query] = STATE(44),
    [sym_params] = STATE(44),
    [sym_params_query] = STATE(46),
    [sym_params_path] = STATE(46),
    [sym_headers] = STATE(44),
    [sym_metadata] = STATE(44),
    [sym_auths] = STATE(44),
    [sym_auth] = STATE(47),
    [sym_authawsv4] = STATE(47),
    [sym_authbasic] = STATE(47),
    [sym_authbearer] = STATE(47),
    [sym_authdigest] = STATE(47),
    [sym_authntlm] = STATE(47),
    [sym_authwsse] = STATE(47),
    [sym_authapikey] = STATE(47),
    [sym_authoauth1] = STATE(47),
    [sym_authoauth2] = STATE(47),
    [sym_authoauth2_additional] = STATE(47),
    [sym_authoauth2_additional_keyword] = STATE(76),
    [sym_bodies] = STATE(44),
    [sym_bodyforms] = STATE(49),
    [sym_body] = STATE(49),
    [sym_bodyjson] = STATE(49),
    [sym_bodytext] = STATE(49),
    [sym_bodyxml] = STATE(49),
    [sym_bodysparql] = STATE(49),
    [sym_bodygraphql] = STATE(49),
    [sym_bodygraphqlvars] = STATE(49),
    [sym_bodyformurlencoded] = STATE(50),
    [sym_bodyformmultipart] = STATE(50),
    [sym_bodyfile] = STATE(49),
    [sym_bodygrpc] = STATE(49),
    [sym_bodyws] = STATE(49),
    [sym_varsandassert] = STATE(44),
    [sym_vars] = STATE(51),
    [sym_vars_secret] = STATE(51),
    [sym_varsreq] = STATE(51),
    [sym_varsres] = STATE(51),
    [sym_assert] = STATE(51),
    [sym_script] = STATE(44),
    [sym_scriptreq] = STATE(52),
    [sym_scriptres] = STATE(52),
    [sym_tests] = STATE(44),
    [sym_docs] = STATE(44),
    [sym_example] = STATE(44),
    [sym_settings] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_meta] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_post] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(7),
    [anon_sym_patch] = ACTIONS(7),
    [anon_sym_options] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_connect] = ACTIONS(7),
    [anon_sym_trace] = ACTIONS(7),
    [anon_sym_http] = ACTIONS(7),
    [anon_sym_grpc] = ACTIONS(7),
    [anon_sym_ws] = ACTIONS(7),
    [anon_sym_query] = ACTIONS(11),
    [anon_sym_params_COLONquery] = ACTIONS(13),
    [anon_sym_params_COLONpath] = ACTIONS(15),
    [anon_sym_headers] = ACTIONS(17),
    [anon_sym_metadata] = ACTIONS(19),
    [anon_sym_auth] = ACTIONS(21),
    [anon_sym_auth_COLONawsv4] = ACTIONS(23),
    [anon_sym_auth_COLONbasic] = ACTIONS(25),
    [anon_sym_auth_COLONbearer] = ACTIONS(27),
    [anon_sym_auth_COLONdigest] = ACTIONS(29),
    [anon_sym_auth_COLONntlm] = ACTIONS(31),
    [anon_sym_auth_COLONwsse] = ACTIONS(33),
    [anon_sym_auth_COLONapikey] = ACTIONS(35),
    [anon_sym_auth_COLONoauth1] = ACTIONS(37),
    [anon_sym_auth_COLONoauth2] = ACTIONS(39),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody] = ACTIONS(41),
    [anon_sym_body] = ACTIONS(43),
    [anon_sym_body_COLONjson] = ACTIONS(45),
    [anon_sym_body_COLONtext] = ACTIONS(47),
    [anon_sym_body_COLONxml] = ACTIONS(49),
    [anon_sym_body_COLONsparql] = ACTIONS(51),
    [anon_sym_body_COLONgraphql] = ACTIONS(53),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(55),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(57),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(59),
    [anon_sym_body_COLONfile] = ACTIONS(61),
    [anon_sym_body_COLONgrpc] = ACTIONS(63),
    [anon_sym_body_COLONws] = ACTIONS(65),
    [anon_sym_vars] = ACTIONS(67),
    [anon_sym_vars_COLONsecret] = ACTIONS(69),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(71),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(73),
    [anon_sym_assert] = ACTIONS(75),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(77),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(79),
    [anon_sym_tests] = ACTIONS(81),
    [anon_sym_docs] = ACTIONS(83),
    [anon_sym_example] = ACTIONS(85),
    [anon_sym_settings] = ACTIONS(87),
  },
  [2] = {
    [sym_meta] = STATE(44),
    [sym_http] = STATE(44),
    [sym_http_verb] = STATE(77),
    [sym_query] = STATE(44),
    [sym_params] = STATE(44),
    [sym_params_query] = STATE(46),
    [sym_params_path] = STATE(46),
    [sym_headers] = STATE(44),
    [sym_metadata] = STATE(44),
    [sym_auths] = STATE(44),
    [sym_auth] = STATE(47),
    [sym_authawsv4] = STATE(47),
    [sym_authbasic] = STATE(47),
    [sym_authbearer] = STATE(47),
    [sym_authdigest] = STATE(47),
    [sym_authntlm] = STATE(47),
    [sym_authwsse] = STATE(47),
    [sym_authapikey] = STATE(47),
    [sym_authoauth1] = STATE(47),
    [sym_authoauth2] = STATE(47),
    [sym_authoauth2_additional] = STATE(47),
    [sym_authoauth2_additional_keyword] = STATE(76),
    [sym_bodies] = STATE(44),
    [sym_bodyforms] = STATE(49),
    [sym_body] = STATE(49),
    [sym_bodyjson] = STATE(49),
    [sym_bodytext] = STATE(49),
    [sym_bodyxml] = STATE(49),
    [sym_bodysparql] = STATE(49),
    [sym_bodygraphql] = STATE(49),
    [sym_bodygraphqlvars] = STATE(49),
    [sym_bodyformurlencoded] = STATE(50),
    [sym_bodyformmultipart] = STATE(50),
    [sym_bodyfile] = STATE(49),
    [sym_bodygrpc] = STATE(49),
    [sym_bodyws] = STATE(49),
    [sym_varsandassert] = STATE(44),
    [sym_vars] = STATE(51),
    [sym_vars_secret] = STATE(51),
    [sym_varsreq] = STATE(51),
    [sym_varsres] = STATE(51),
    [sym_assert] = STATE(51),
    [sym_script] = STATE(44),
    [sym_scriptreq] = STATE(52),
    [sym_scriptres] = STATE(52),
    [sym_tests] = STATE(44),
    [sym_docs] = STATE(44),
    [sym_example] = STATE(44),
    [sym_settings] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_meta] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_post] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(7),
    [anon_sym_patch] = ACTIONS(7),
    [anon_sym_options] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_connect] = ACTIONS(7),
    [anon_sym_trace] = ACTIONS(7),
    [anon_sym_http] = ACTIONS(7),
    [anon_sym_grpc] = ACTIONS(7),
    [anon_sym_ws] = ACTIONS(7),
    [anon_sym_query] = ACTIONS(11),
    [anon_sym_params_COLONquery] = ACTIONS(13),
    [anon_sym_params_COLONpath] = ACTIONS(15),
    [anon_sym_headers] = ACTIONS(17),
    [anon_sym_metadata] = ACTIONS(19),
    [anon_sym_auth] = ACTIONS(21),
    [anon_sym_auth_COLONawsv4] = ACTIONS(23),
    [anon_sym_auth_COLONbasic] = ACTIONS(25),
    [anon_sym_auth_COLONbearer] = ACTIONS(27),
    [anon_sym_auth_COLONdigest] = ACTIONS(29),
    [anon_sym_auth_COLONntlm] = ACTIONS(31),
    [anon_sym_auth_COLONwsse] = ACTIONS(33),
    [anon_sym_auth_COLONapikey] = ACTIONS(35),
    [anon_sym_auth_COLONoauth1] = ACTIONS(37),
    [anon_sym_auth_COLONoauth2] = ACTIONS(39),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams] = ACTIONS(41),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody] = ACTIONS(41),
    [anon_sym_body] = ACTIONS(43),
    [anon_sym_body_COLONjson] = ACTIONS(45),
    [anon_sym_body_COLONtext] = ACTIONS(47),
    [anon_sym_body_COLONxml] = ACTIONS(49),
    [anon_sym_body_COLONsparql] = ACTIONS(51),
    [anon_sym_body_COLONgraphql] = ACTIONS(53),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(55),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(57),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(59),
    [anon_sym_body_COLONfile] = ACTIONS(61),
    [anon_sym_body_COLONgrpc] = ACTIONS(63),
    [anon_sym_body_COLONws] = ACTIONS(65),
    [anon_sym_vars] = ACTIONS(67),
    [anon_sym_vars_COLONsecret] = ACTIONS(69),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(71),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(73),
    [anon_sym_assert] = ACTIONS(75),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(77),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(79),
    [anon_sym_tests] = ACTIONS(81),
    [anon_sym_docs] = ACTIONS(83),
    [anon_sym_example] = ACTIONS(85),
    [anon_sym_settings] = ACTIONS(87),
  },
  [3] = {
    [sym_meta] = STATE(44),
    [sym_http] = STATE(44),
    [sym_http_verb] = STATE(77),
    [sym_query] = STATE(44),
    [sym_params] = STATE(44),
    [sym_params_query] = STATE(46),
    [sym_params_path] = STATE(46),
    [sym_headers] = STATE(44),
    [sym_metadata] = STATE(44),
    [sym_auths] = STATE(44),
    [sym_auth] = STATE(47),
    [sym_authawsv4] = STATE(47),
    [sym_authbasic] = STATE(47),
    [sym_authbearer] = STATE(47),
    [sym_authdigest] = STATE(47),
    [sym_authntlm] = STATE(47),
    [sym_authwsse] = STATE(47),
    [sym_authapikey] = STATE(47),
    [sym_authoauth1] = STATE(47),
    [sym_authoauth2] = STATE(47),
    [sym_authoauth2_additional] = STATE(47),
    [sym_authoauth2_additional_keyword] = STATE(76),
    [sym_bodies] = STATE(44),
    [sym_bodyforms] = STATE(49),
    [sym_body] = STATE(49),
    [sym_bodyjson] = STATE(49),
    [sym_bodytext] = STATE(49),
    [sym_bodyxml] = STATE(49),
    [sym_bodysparql] = STATE(49),
    [sym_bodygraphql] = STATE(49),
    [sym_bodygraphqlvars] = STATE(49),
    [sym_bodyformurlencoded] = STATE(50),
    [sym_bodyformmultipart] = STATE(50),
    [sym_bodyfile] = STATE(49),
    [sym_bodygrpc] = STATE(49),
    [sym_bodyws] = STATE(49),
    [sym_varsandassert] = STATE(44),
    [sym_vars] = STATE(51),
    [sym_vars_secret] = STATE(51),
    [sym_varsreq] = STATE(51),
    [sym_varsres] = STATE(51),
    [sym_assert] = STATE(51),
    [sym_script] = STATE(44),
    [sym_scriptreq] = STATE(52),
    [sym_scriptres] = STATE(52),
    [sym_tests] = STATE(44),
    [sym_docs] = STATE(44),
    [sym_example] = STATE(44),
    [sym_settings] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_meta] = ACTIONS(93),
    [anon_sym_get] = ACTIONS(96),
    [anon_sym_post] = ACTIONS(96),
    [anon_sym_put] = ACTIONS(96),
    [anon_sym_delete] = ACTIONS(96),
    [anon_sym_patch] = ACTIONS(96),
    [anon_sym_options] = ACTIONS(96),
    [anon_sym_head] = ACTIONS(99),
    [anon_sym_connect] = ACTIONS(96),
    [anon_sym_trace] = ACTIONS(96),
    [anon_sym_http] = ACTIONS(96),
    [anon_sym_grpc] = ACTIONS(96),
    [anon_sym_ws] = ACTIONS(96),
    [anon_sym_query] = ACTIONS(102),
    [anon_sym_params_COLONquery] = ACTIONS(105),
    [anon_sym_params_COLONpath] = ACTIONS(108),
    [anon_sym_headers] = ACTIONS(111),
    [anon_sym_metadata] = ACTIONS(114),
    [anon_sym_auth] = ACTIONS(117),
    [anon_sym_auth_COLONawsv4] = ACTIONS(120),
    [anon_sym_auth_COLONbasic] = ACTIONS(123),
    [anon_sym_auth_COLONbearer] = ACTIONS(126),
    [anon_sym_auth_COLONdigest] = ACTIONS(129),
    [anon_sym_auth_COLONntlm] = ACTIONS(132),
    [anon_sym_auth_COLONwsse] = ACTIONS(135),
    [anon_sym_auth_COLONapikey] = ACTIONS(138),
    [anon_sym_auth_COLONoauth1] = ACTIONS(141),
    [anon_sym_auth_COLONoauth2] = ACTIONS(144),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders] = ACTIONS(147),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams] = ACTIONS(147),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders] = ACTIONS(147),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams] = ACTIONS(147),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody] = ACTIONS(147),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders] = ACTIONS(147),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams] = ACTIONS(147),
    [anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody] = ACTIONS(147),
    [anon_sym_body] = ACTIONS(150),
    [anon_sym_body_COLONjson] = ACTIONS(153),
    [anon_sym_body_COLONtext] = ACTIONS(156),
    [anon_sym_body_COLONxml] = ACTIONS(159),
    [anon_sym_body_COLONsparql] = ACTIONS(162),
    [anon_sym_body_COLONgraphql] = ACTIONS(165),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(168),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(171),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(174),
    [anon_sym_body_COLONfile] = ACTIONS(177),
    [anon_sym_body_COLONgrpc] = ACTIONS(180),
    [anon_sym_body_COLONws] = ACTIONS(183),
    [anon_sym_vars] = ACTIONS(186),
    [anon_sym_vars_COLONsecret] = ACTIONS(189),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(192),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(195),
    [anon_sym_assert] = ACTIONS(198),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(201),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(204),
    [anon_sym_tests] = ACTIONS(207),
    [anon_sym_docs] = ACTIONS(210),
    [anon_sym_example] = ACTIONS(213),
    [anon_sym_settings] = ACTIONS(216),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(221), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(219), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [65] = 2,
    ACTIONS(225), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(223), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [130] = 2,
    ACTIONS(229), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(227), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [195] = 2,
    ACTIONS(233), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(231), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [260] = 2,
    ACTIONS(237), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(235), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [325] = 2,
    ACTIONS(241), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(239), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [390] = 2,
    ACTIONS(245), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(243), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [455] = 2,
    ACTIONS(249), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(247), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [520] = 2,
    ACTIONS(253), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(251), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [585] = 2,
    ACTIONS(257), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(255), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [650] = 2,
    ACTIONS(261), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(259), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [715] = 2,
    ACTIONS(265), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(263), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [780] = 2,
    ACTIONS(269), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(267), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [845] = 2,
    ACTIONS(273), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(271), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [910] = 2,
    ACTIONS(277), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(275), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [975] = 2,
    ACTIONS(281), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(279), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1040] = 2,
    ACTIONS(285), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(283), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1105] = 2,
    ACTIONS(289), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(287), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1170] = 2,
    ACTIONS(293), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(291), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1235] = 2,
    ACTIONS(297), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(295), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1300] = 2,
    ACTIONS(301), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(299), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1365] = 2,
    ACTIONS(305), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(303), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1430] = 2,
    ACTIONS(309), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(307), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1495] = 2,
    ACTIONS(313), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(311), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1560] = 2,
    ACTIONS(317), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(315), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1625] = 2,
    ACTIONS(321), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(319), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1690] = 2,
    ACTIONS(325), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(323), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1755] = 2,
    ACTIONS(329), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(327), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1820] = 2,
    ACTIONS(333), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(331), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1885] = 2,
    ACTIONS(337), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(335), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [1950] = 2,
    ACTIONS(341), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(339), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2015] = 2,
    ACTIONS(345), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(343), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2080] = 2,
    ACTIONS(349), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(347), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2145] = 2,
    ACTIONS(353), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(351), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2210] = 2,
    ACTIONS(357), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(355), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2275] = 2,
    ACTIONS(361), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(359), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2340] = 2,
    ACTIONS(365), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(363), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2405] = 2,
    ACTIONS(369), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(367), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2470] = 2,
    ACTIONS(373), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(371), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2535] = 2,
    ACTIONS(377), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(375), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2600] = 2,
    ACTIONS(381), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(379), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2665] = 2,
    ACTIONS(385), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(383), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2730] = 2,
    ACTIONS(389), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(387), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2795] = 2,
    ACTIONS(393), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(391), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2860] = 2,
    ACTIONS(397), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(395), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2925] = 2,
    ACTIONS(401), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(399), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [2990] = 2,
    ACTIONS(405), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(403), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [3055] = 2,
    ACTIONS(409), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(407), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [3120] = 2,
    ACTIONS(413), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(411), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [3185] = 2,
    ACTIONS(417), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(415), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [3250] = 2,
    ACTIONS(421), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(419), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [3315] = 2,
    ACTIONS(425), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(423), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [3380] = 2,
    ACTIONS(429), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(427), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [3445] = 2,
    ACTIONS(433), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(431), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [3510] = 2,
    ACTIONS(437), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(435), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [3575] = 2,
    ACTIONS(441), 7,
      anon_sym_meta,
      anon_sym_head,
      anon_sym_auth,
      anon_sym_auth_COLONoauth2,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(439), 53,
      ts_builtin_sym_end,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_http,
      anon_sym_grpc,
      anon_sym_ws,
      anon_sym_query,
      anon_sym_params_COLONquery,
      anon_sym_params_COLONpath,
      anon_sym_headers,
      anon_sym_metadata,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_auth_COLONntlm,
      anon_sym_auth_COLONwsse,
      anon_sym_auth_COLONapikey,
      anon_sym_auth_COLONoauth1,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONauth_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONaccess_token_req_COLONbody,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONheaders,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONqueryparams,
      anon_sym_auth_COLONoauth2_COLONadditional_params_COLONrefresh_token_req_COLONbody,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_body_COLONfile,
      anon_sym_body_COLONgrpc,
      anon_sym_body_COLONws,
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
      anon_sym_example,
      anon_sym_settings,
  [3640] = 3,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(445), 1,
      sym_key,
    STATE(62), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [3651] = 3,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      sym_assert_key,
    STATE(63), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [3662] = 3,
    ACTIONS(445), 1,
      sym_key,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(64), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [3673] = 3,
    ACTIONS(449), 1,
      sym_assert_key,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(65), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [3684] = 3,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 1,
      sym_key,
    STATE(64), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [3695] = 3,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(462), 1,
      sym_assert_key,
    STATE(65), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [3706] = 3,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    ACTIONS(467), 1,
      sym_array_value,
    STATE(68), 1,
      aux_sym_array_repeat1,
  [3716] = 2,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 2,
      anon_sym_RBRACK,
      sym_array_value,
  [3724] = 3,
    ACTIONS(467), 1,
      sym_array_value,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_array_repeat1,
  [3734] = 3,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    ACTIONS(477), 1,
      sym_array_value,
    STATE(69), 1,
      aux_sym_array_repeat1,
  [3744] = 2,
    ACTIONS(480), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_array,
  [3751] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_textblock,
  [3758] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_dictionary,
  [3765] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_dictionary,
  [3772] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_dictionary,
  [3779] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_dictionary,
  [3786] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_dictionary,
  [3793] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_dictionary,
  [3800] = 1,
    ACTIONS(486), 2,
      anon_sym_RBRACE,
      sym_assert_key,
  [3805] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_textblock,
  [3812] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_textblock,
  [3819] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_textblock,
  [3826] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_textblock,
  [3833] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_textblock,
  [3840] = 2,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_assert_dictionary,
  [3847] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_dictionary,
  [3854] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_dictionary,
  [3861] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_dictionary,
  [3868] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_textblock,
  [3875] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_textblock,
  [3882] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_textblock,
  [3889] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_dictionary,
  [3896] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_dictionary,
  [3903] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_dictionary,
  [3910] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_textblock,
  [3917] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_textblock,
  [3924] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_textblock,
  [3931] = 2,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(492), 1,
      sym_rawtext,
  [3938] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_textblock,
  [3945] = 1,
    ACTIONS(494), 2,
      anon_sym_RBRACE,
      sym_key,
  [3950] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_textblock,
  [3957] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_dictionary,
  [3964] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_textblock,
  [3971] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_dictionary,
  [3978] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_dictionary,
  [3985] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_dictionary,
  [3992] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_dictionary,
  [3999] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_dictionary,
  [4006] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_dictionary,
  [4013] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_dictionary,
  [4020] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_dictionary,
  [4027] = 1,
    ACTIONS(475), 2,
      anon_sym_RBRACK,
      sym_array_value,
  [4032] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_dictionary,
  [4039] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_dictionary,
  [4046] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_dictionary,
  [4053] = 1,
    ACTIONS(496), 1,
      sym_value,
  [4057] = 1,
    ACTIONS(498), 1,
      anon_sym_COLON,
  [4061] = 1,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
  [4065] = 1,
    ACTIONS(502), 1,
      sym_value,
  [4069] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [4073] = 1,
    ACTIONS(506), 1,
      anon_sym_COLON,
  [4077] = 1,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
  [4081] = 1,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 260,
  [SMALL_STATE(9)] = 325,
  [SMALL_STATE(10)] = 390,
  [SMALL_STATE(11)] = 455,
  [SMALL_STATE(12)] = 520,
  [SMALL_STATE(13)] = 585,
  [SMALL_STATE(14)] = 650,
  [SMALL_STATE(15)] = 715,
  [SMALL_STATE(16)] = 780,
  [SMALL_STATE(17)] = 845,
  [SMALL_STATE(18)] = 910,
  [SMALL_STATE(19)] = 975,
  [SMALL_STATE(20)] = 1040,
  [SMALL_STATE(21)] = 1105,
  [SMALL_STATE(22)] = 1170,
  [SMALL_STATE(23)] = 1235,
  [SMALL_STATE(24)] = 1300,
  [SMALL_STATE(25)] = 1365,
  [SMALL_STATE(26)] = 1430,
  [SMALL_STATE(27)] = 1495,
  [SMALL_STATE(28)] = 1560,
  [SMALL_STATE(29)] = 1625,
  [SMALL_STATE(30)] = 1690,
  [SMALL_STATE(31)] = 1755,
  [SMALL_STATE(32)] = 1820,
  [SMALL_STATE(33)] = 1885,
  [SMALL_STATE(34)] = 1950,
  [SMALL_STATE(35)] = 2015,
  [SMALL_STATE(36)] = 2080,
  [SMALL_STATE(37)] = 2145,
  [SMALL_STATE(38)] = 2210,
  [SMALL_STATE(39)] = 2275,
  [SMALL_STATE(40)] = 2340,
  [SMALL_STATE(41)] = 2405,
  [SMALL_STATE(42)] = 2470,
  [SMALL_STATE(43)] = 2535,
  [SMALL_STATE(44)] = 2600,
  [SMALL_STATE(45)] = 2665,
  [SMALL_STATE(46)] = 2730,
  [SMALL_STATE(47)] = 2795,
  [SMALL_STATE(48)] = 2860,
  [SMALL_STATE(49)] = 2925,
  [SMALL_STATE(50)] = 2990,
  [SMALL_STATE(51)] = 3055,
  [SMALL_STATE(52)] = 3120,
  [SMALL_STATE(53)] = 3185,
  [SMALL_STATE(54)] = 3250,
  [SMALL_STATE(55)] = 3315,
  [SMALL_STATE(56)] = 3380,
  [SMALL_STATE(57)] = 3445,
  [SMALL_STATE(58)] = 3510,
  [SMALL_STATE(59)] = 3575,
  [SMALL_STATE(60)] = 3640,
  [SMALL_STATE(61)] = 3651,
  [SMALL_STATE(62)] = 3662,
  [SMALL_STATE(63)] = 3673,
  [SMALL_STATE(64)] = 3684,
  [SMALL_STATE(65)] = 3695,
  [SMALL_STATE(66)] = 3706,
  [SMALL_STATE(67)] = 3716,
  [SMALL_STATE(68)] = 3724,
  [SMALL_STATE(69)] = 3734,
  [SMALL_STATE(70)] = 3744,
  [SMALL_STATE(71)] = 3751,
  [SMALL_STATE(72)] = 3758,
  [SMALL_STATE(73)] = 3765,
  [SMALL_STATE(74)] = 3772,
  [SMALL_STATE(75)] = 3779,
  [SMALL_STATE(76)] = 3786,
  [SMALL_STATE(77)] = 3793,
  [SMALL_STATE(78)] = 3800,
  [SMALL_STATE(79)] = 3805,
  [SMALL_STATE(80)] = 3812,
  [SMALL_STATE(81)] = 3819,
  [SMALL_STATE(82)] = 3826,
  [SMALL_STATE(83)] = 3833,
  [SMALL_STATE(84)] = 3840,
  [SMALL_STATE(85)] = 3847,
  [SMALL_STATE(86)] = 3854,
  [SMALL_STATE(87)] = 3861,
  [SMALL_STATE(88)] = 3868,
  [SMALL_STATE(89)] = 3875,
  [SMALL_STATE(90)] = 3882,
  [SMALL_STATE(91)] = 3889,
  [SMALL_STATE(92)] = 3896,
  [SMALL_STATE(93)] = 3903,
  [SMALL_STATE(94)] = 3910,
  [SMALL_STATE(95)] = 3917,
  [SMALL_STATE(96)] = 3924,
  [SMALL_STATE(97)] = 3931,
  [SMALL_STATE(98)] = 3938,
  [SMALL_STATE(99)] = 3945,
  [SMALL_STATE(100)] = 3950,
  [SMALL_STATE(101)] = 3957,
  [SMALL_STATE(102)] = 3964,
  [SMALL_STATE(103)] = 3971,
  [SMALL_STATE(104)] = 3978,
  [SMALL_STATE(105)] = 3985,
  [SMALL_STATE(106)] = 3992,
  [SMALL_STATE(107)] = 3999,
  [SMALL_STATE(108)] = 4006,
  [SMALL_STATE(109)] = 4013,
  [SMALL_STATE(110)] = 4020,
  [SMALL_STATE(111)] = 4027,
  [SMALL_STATE(112)] = 4032,
  [SMALL_STATE(113)] = 4039,
  [SMALL_STATE(114)] = 4046,
  [SMALL_STATE(115)] = 4053,
  [SMALL_STATE(116)] = 4057,
  [SMALL_STATE(117)] = 4061,
  [SMALL_STATE(118)] = 4065,
  [SMALL_STATE(119)] = 4069,
  [SMALL_STATE(120)] = 4073,
  [SMALL_STATE(121)] = 4077,
  [SMALL_STATE(122)] = 4081,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(75),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(121),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(121),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(91),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(86),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(74),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(101),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(103),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(104),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(109),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(114),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(113),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(112),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(110),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(108),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(107),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(106),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(105),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(117),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(102),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(100),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(98),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(71),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(96),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(95),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(94),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(93),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(92),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(90),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(89),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(88),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(87),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(70),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(73),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(85),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(84),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(83),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(82),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(81),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(80),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(79),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(72),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptreq, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptreq, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygrpc, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygrpc, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authoauth2, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authoauth2, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authoauth1, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authoauth1, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authawsv4, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authawsv4, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authwsse, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authwsse, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authntlm, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authntlm, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authdigest, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authdigest, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authoauth2_additional, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authoauth2_additional, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_example, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tests, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tests, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptres, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptres, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authapikey, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authapikey, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsres, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsres, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsreq, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsreq, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_secret, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_secret, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auth, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auth, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbearer, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbearer, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyws, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyws, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyjson, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyjson, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyfile, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyfile, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformmultipart, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformmultipart, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformurlencoded, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformurlencoded, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphqlvars, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphqlvars, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbasic, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbasic, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphql, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphql, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodysparql, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodysparql, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auths, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auths, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyxml, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyxml, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodies, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodies, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyforms, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyforms, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsandassert, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsandassert, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodytext, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodytext, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params_query, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params_query, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params_path, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params_path, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(120),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2), SHIFT_REPEAT(116),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(67),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary_pair, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_pair, 3),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authoauth2_additional_keyword, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_verb, 1),
  [510] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bruno_external_scanner_create(void);
void tree_sitter_bruno_external_scanner_destroy(void *);
bool tree_sitter_bruno_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bruno_external_scanner_serialize(void *, char *);
void tree_sitter_bruno_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bruno(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_bruno_external_scanner_create,
      tree_sitter_bruno_external_scanner_destroy,
      tree_sitter_bruno_external_scanner_scan,
      tree_sitter_bruno_external_scanner_serialize,
      tree_sitter_bruno_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

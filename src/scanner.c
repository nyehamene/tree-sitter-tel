/* #include "tree_sitter/alloc.h" */
/* #include "tree_sitter/array.h" */
#include "scanner.h"
#include "tree_sitter/parser.h"
#include <stdio.h>

enum TokenType {
  ESCAPE_CHAR,
  _STR_TEXT,
};

void *tree_sitter_tel_external_scanner_create(void) { return NULL; }

void tree_sitter_tel_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_tel_external_scanner_serialize(void *payload,
                                                    char *buffer) {
  return 0;
}

void tree_sitter_tel_external_scanner_deserialize(void *payload,
                                                  const char *buffer,
                                                  unsigned length) {}

bool tree_sitter_tel_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  lexer->log(lexer, "external: tel\n");

  if (valid_symbols[ESCAPE_CHAR] && parse_escape_char(lexer)) {
    return true;
  }

  if (valid_symbols[_STR_TEXT] && parse_escape_str_text(lexer)) {
    return true;
  }
  return false;
}

bool parse_escape_char(TSLexer *lexer) {
  lexer->log(lexer, "external: parse_escape_char");

  if (lexer->lookahead != '\\') {
    lexer->log(lexer, "no escape\n");
    return false;
  }

  // consume '\'
  lexer->advance(lexer, false);

  // do not consume ( or [
  if (lexer->lookahead == '(' || lexer->lookahead == '[') {
    lexer->log(lexer, "no escape char\n");
    return false;
  }

  // consume char
  lexer->advance(lexer, false);
  lexer->mark_end(lexer);
  lexer->result_symbol = ESCAPE_CHAR;
  return true;
}

bool parse_escape_str_text(TSLexer *lexer) {
  lexer->log(lexer, "external: parse_escape_str_text");

  if (lexer->lookahead == '\\') {
    lexer->log(lexer, "no text\n");
    return false;
  }

  while (lexer->lookahead != '"' && lexer->lookahead != '\\') {
    lexer->advance(lexer, false);
  }
  lexer->log(lexer, "external: end of str text\n");
  lexer->mark_end(lexer);
  lexer->result_symbol = _STR_TEXT;
  return true;
}

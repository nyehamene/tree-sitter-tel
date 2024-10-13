/* #include "tree_sitter/alloc.h" */
/* #include "tree_sitter/array.h" */
#include "tree_sitter/parser.h"
#include <stdio.h>

enum TokenType {
  STR_LIT,
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

bool parse_str(TSLexer *lexer);

bool tree_sitter_tel_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  lexer->log(lexer, "external: tel\n");

  if (valid_symbols[STR_LIT] && parse_str(lexer)) {
    return true;
  }
  return false;
}

bool parse_str(TSLexer *lexer) {
  lexer->log(lexer, "external: parse_str\n");

  if (lexer->eof(lexer)) {
    lexer->log(lexer, "external: eof\n");
    return false;
  }

  // open marker
  int32_t marker = lexer->lookahead;

  // the marker is either a single or double quote
  if (marker != '"' && marker != '\'') {
    lexer->log(lexer, "external: no marker %c\n", marker);
    return false;
  }

  // consume open marker
  lexer->log(lexer, "external: open %c\n", marker);
  lexer->advance(lexer, false);

  // consume chars
  while (!(lexer->eof(lexer)) && lexer->lookahead != marker) {
    lexer->log(lexer, "external: consume %c\n", lexer->lookahead);
    lexer->advance(lexer, false);
  }
  if (lexer->eof(lexer)) {
    lexer->log(lexer, "external: no close marker");
    return false;
  }
  // current char must be a close marker

  // consume close marker
  lexer->advance(lexer, false);
  lexer->mark_end(lexer);
  return true;
}

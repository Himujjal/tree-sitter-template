#include "tree-sitter/parser.h"
#include <stdbool.h>

void *tree_sitter_lang_external_scanner_create() {
  /**
   * TODO: create objects
   * */
  return NULL;
}

bool tree_sitter_lang_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  /**
   * TODO: scan tokens
   * */
  return true;
}

unsigned tree_sitter_lang_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  /**
   * TODO: serialize tokens
   * */
  return 0;
}

void tree_sitter_lang_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {
  /**
   * TODO: deserialize tokens
   * */
}

void tree_sitter_lang_external_scanner_destroy(void *payload) {
  /**
   * TODO: destroy created objects
   * */
}

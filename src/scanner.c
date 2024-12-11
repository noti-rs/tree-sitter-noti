#include "tree_sitter/parser.h"
#include <ctype.h>
#include <stdlib.h>

enum TokenType { TYPE_VALUE_IDENTIFIER };

void *tree_sitter_noti_external_scanner_create(void) { return NULL; }

void tree_sitter_noti_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_noti_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  return 0;
}

void tree_sitter_noti_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {}

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static inline void skip_advance(TSLexer *lexer) { lexer->advance(lexer, true); }

static inline bool skip_whitespace(TSLexer *lexer) {
  while (isspace(lexer->lookahead)) {
    skip_advance(lexer);
    if (lexer->eof(lexer)) {
      return true;
    }
  }

  return false;
}

static inline bool scan_type_value_identifier(TSLexer *lexer) {
  bool eof = skip_whitespace(lexer);
  if (eof) {
    return false;
  }

  size_t identifier_len = 0;
  while (true) {
    if (lexer->eof(lexer)) {
      return false;
    }

    if (lexer->lookahead == '(') {
      if (identifier_len > 0) {
        lexer->mark_end(lexer);
        lexer->result_symbol = TYPE_VALUE_IDENTIFIER;
        return true;
      } else {
        return false;
      }
    }

    if (!isalpha(lexer->lookahead) && lexer->lookahead != '_') {
      return false;
    }

    advance(lexer);
    identifier_len++;
  }

  lexer->mark_end(lexer);

  eof = skip_whitespace(lexer);
  if (eof) {
    return false;
  }

  if (lexer->lookahead == '(') {
    lexer->result_symbol = TYPE_VALUE_IDENTIFIER;
    return true;
  } else {
    return false;
  }
}

bool tree_sitter_noti_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  if (valid_symbols[TYPE_VALUE_IDENTIFIER]) {
    return scan_type_value_identifier(lexer);
  }

  return false;
}

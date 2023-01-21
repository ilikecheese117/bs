#include "include/token.h"
#include <stdlib.h>
#include <stdio.h>

token_t* init_token(int type, char* value) {
    token_t* token = calloc(1, sizeof(struct TOKEN_STRUCT));
    token->type = type;
    token->value = value;
    return token;
}
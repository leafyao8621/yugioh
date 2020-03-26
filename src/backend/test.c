#include "core.h"
#include <stdio.h>

int main(void) {
    printf("%llu\n", sizeof(struct Card));
    printf("%llu\n", sizeof(struct Field));
    struct Field field;
    deck_init(field.deck[0], 0);
    deck_print(field.deck[0], 1);
}

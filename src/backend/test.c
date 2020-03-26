#include "core.h"
#include <stdio.h>

int main(void) {
    printf("%llu\n", sizeof(struct Card));
    printf("%llu\n", sizeof(struct Game));
    struct Game game;
    deck_init(game.deck[0], 0);
    deck_print(game.deck[0], 1);
    putchar(10);
    deck_init(game.deck[1], 1);
    deck_print(game.deck[1], 1);
}

#include <stdio.h>
#include "core.h"
#include "../../resource/decks/all_decks.h"

int deck_init(struct Card *deck, int deck_code) {
    switch (deck_code) {
    case 0:
        yugi_1_init(deck);
        break;
    case 1:
        kaiba_1_init(deck);
        break;
    }
    return 0;
}

int deck_print(struct Card *deck, char verbose) {
    struct Card *ii = deck;
    for (int i = 0; i < 60 && ii->basic_type; ++i, card_print(ii++, verbose));
    return 0;
}

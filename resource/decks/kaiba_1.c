#include "kaiba_1.h"

int kaiba_1_init(struct Card *deck) {
    static int codes[] = {
        89631139,
        0
    };
    int i, *ii;
    struct Card *iii = deck;
    for (i = 0, ii = codes; i < 60 && *ii; ++i, card_init(iii++, *(ii++)));
    for (; i < 60; ++i, card_init(iii++, 0));
}

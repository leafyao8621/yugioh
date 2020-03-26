#include "yugi_1.h"

int yugi_1_init(struct Card *deck) {
    static int codes[] = {
        99785935,
        39256679,
        11549357,
        46986414,
        46986414,
        13039848,
        13039848,
        72892473,
        0
    };
    int i, *ii;
    struct Card *iii = deck;
    for (i = 0, ii = codes; i < 60 && *ii; ++i, card_init(iii++, *(ii++)));
    for (; i < 60; ++i, card_init(iii++, 0));
}

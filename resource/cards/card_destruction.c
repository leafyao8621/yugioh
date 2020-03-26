#include "card_destruction.h"

int card_destruction_init(struct Card *card) {
    card->basic_type = BASIC_TYPE_SPELL;
    card->extra_type.spell_type = EXTRA_TYPE_SPELL_NORMAL;
    card->card_code = 72892473;
    card->name = "Card Destruction";
    card->description =
    "Both players discard as many cards as possible from their hands, then "
    "each player draws the same number of cards they discarded.";
    return 0;
}

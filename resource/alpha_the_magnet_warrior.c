#include "alpha_the_magnet_warrior.h"

int alpha_the_magnet_warrior_init(struct Card *card) {
    card->basic_type = BASIC_TYPE_MONSTER;
    card->extra_type.monster_type = EXTRA_TYPE_MONSTER_NORMAL;
    card->card_code = 99785935;
    card->state.monster_state.orig_attribute = MONSTER_ATTRIBUTE_EARTH;
    card->state.monster_state.orig_type = MONSTER_TYPE_ROCK;
    card->state.monster_state.cur_attribute = MONSTER_ATTRIBUTE_EARTH;
    card->state.monster_state.cur_type = MONSTER_TYPE_ROCK;
    card->state.monster_state.orig_atk = 1400;
    card->state.monster_state.orig_def = 1700;
    card->state.monster_state.cur_orig_atk = 1400;
    card->state.monster_state.cur_orig_def = 1700;
    card->state.monster_state.cur_atk = 1400;
    card->state.monster_state.cur_def = 1700;
    card->name = "Alpha The Magnet Warrior";
    card->description =
    "Alpha, Beta, and Gamma meld as one to form a powerful monster.";
    return 0;
}

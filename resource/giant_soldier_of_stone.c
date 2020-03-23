#include "giant_soldier_of_stone.h"

int giant_soldier_of_stone_init(struct Card *card) {
    card->basic_type = BASIC_TYPE_MONSTER;
    card->extra_type.monster_type = EXTRA_TYPE_MONSTER_NORMAL;
    card->card_code = 13039848;
    card->state.monster_state.orig_attribute = MONSTER_ATTRIBUTE_EARTH;
    card->state.monster_state.orig_type = MONSTER_TYPE_ROCK;
    card->state.monster_state.cur_attribute = MONSTER_ATTRIBUTE_EARTH;
    card->state.monster_state.cur_type = MONSTER_TYPE_ROCK;
    card->state.monster_state.orig_atk = 1300;
    card->state.monster_state.orig_def = 2000;
    card->state.monster_state.cur_orig_atk = 1300;
    card->state.monster_state.cur_orig_def = 2000;
    card->state.monster_state.cur_atk = 1300;
    card->state.monster_state.cur_def = 2000;
    card->name = "Giant Soldier of Stone";
    card->description =
    "A giant warrior made of stone. A punch from this creature has "
    "earth-shaking results.";
    return 0;
}

#include "dark_magician.h"

int dark_magician_init(struct Card *card) {
    card->basic_type = BASIC_TYPE_MONSTER;
    card->extra_type.monster_type = EXTRA_TYPE_MONSTER_NORMAL;
    card->card_code = 46986414;
    card->state.monster_state.orig_attribute = MONSTER_ATTRIBUTE_DARK;
    card->state.monster_state.orig_type = MONSTER_TYPE_SPELLCASTER;
    card->state.monster_state.cur_attribute = MONSTER_ATTRIBUTE_DARK;
    card->state.monster_state.cur_type = MONSTER_TYPE_SPELLCASTER;
    card->state.monster_state.orig_atk = 2500;
    card->state.monster_state.orig_def = 2100;
    card->state.monster_state.cur_orig_atk = 2500;
    card->state.monster_state.cur_orig_def = 2100;
    card->state.monster_state.cur_atk = 2500;
    card->state.monster_state.cur_def = 2100;
    card->state.monster_state.orig_level = 7;
    card->state.monster_state.cur_level = 7;
    card->name = "Dark Magician";
    card->description =
    "The ultimate wizard in terms of attack and defense.";
    return 0;
}

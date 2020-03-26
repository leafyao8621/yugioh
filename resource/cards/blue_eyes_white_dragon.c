#include "blue_eyes_white_dragon.h"

int blue_eyes_white_dragon_init(struct Card *card) {
    card->basic_type = BASIC_TYPE_MONSTER;
    card->extra_type.monster_type = EXTRA_TYPE_MONSTER_NORMAL;
    card->card_code = 46986414;
    card->state.monster_state.orig_attribute = MONSTER_ATTRIBUTE_LIGHT;
    card->state.monster_state.orig_type = MONSTER_TYPE_DRAGON;
    card->state.monster_state.cur_attribute = MONSTER_ATTRIBUTE_LIGHT;
    card->state.monster_state.cur_type = MONSTER_TYPE_DRAGON;
    card->state.monster_state.orig_atk = 3000;
    card->state.monster_state.orig_def = 2500;
    card->state.monster_state.cur_orig_atk = 3000;
    card->state.monster_state.cur_orig_def = 2500;
    card->state.monster_state.cur_atk = 3000;
    card->state.monster_state.cur_def = 2500;
    card->state.monster_state.orig_level = 8;
    card->state.monster_state.cur_level = 8;
    card->name = "Blue-Eyes White Dragon";
    card->description =
    "This legendary dragon is a powerful engine of destruction. Virtually "
    "invincible, very few have faced this awesome creature and lived to tell "
    "the tale.";
    return 0;
}

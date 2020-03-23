#include <stdio.h>
#include "core.h"

const char *extra_type_monster_lookup[12] = {
    "Normal",
    "Effect",
    "Ritual",
    "Fusion",
    "Synchro",
    "XYZ",
    "Pendulum",
    "Tuner",
    "Union",
    "Spirit",
    "Flip",
    "Gemini"
};

const char *extra_type_spell_lookup[5] = {
    "Normal",
    "Continuous",
    "Equip",
    "Quick",
    "Ritual"
};

const char *attribute_lookup[7] = {
    "Dark",
    "Divine",
    "Earth",
    "Fire",
    "Light",     
    "Water",
    "Wind",
};

const char *type_lookup[25] = {
    "Aqua",
    "Beast",
    "Beast Warrior",
    "Creator God",
    "Cyberse",
    "Dinosaur",
    "Divine Beast",
    "Dragon",
    "Fairy",
    "Fiend",
    "Fish",
    "Insect",
    "Machine",
    "Plant",
    "Psychic",
    "Pyro",
    "Reptile",
    "Rock",
    "Sea Serpent",
    "Spell Caster",
    "Thunder",
    "Warrior",
    "Winged Beast",
    "Wyrm",
    "Zombie"
};

int card_init(struct Card* card, int card_code) {
    switch (card_code) {
    case 46986414:
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
        card->name = "Dark Magician";
        card->description =
        "The ultimate wizard in terms of attack and defense.";
        break;
    case 99785935:
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
        break;
    case 39256679:
        card->basic_type = BASIC_TYPE_MONSTER;
        card->extra_type.monster_type = EXTRA_TYPE_MONSTER_NORMAL;
        card->card_code = 39256679;
        card->state.monster_state.orig_attribute = MONSTER_ATTRIBUTE_EARTH;
        card->state.monster_state.orig_type = MONSTER_TYPE_ROCK;
        card->state.monster_state.cur_attribute = MONSTER_ATTRIBUTE_EARTH;
        card->state.monster_state.cur_type = MONSTER_TYPE_ROCK;
        card->state.monster_state.orig_atk = 1700;
        card->state.monster_state.orig_def = 1600;
        card->state.monster_state.cur_orig_atk = 1700;
        card->state.monster_state.cur_orig_def = 1600;
        card->state.monster_state.cur_atk = 1700;
        card->state.monster_state.cur_def = 1600;
        card->name = "Beta The Magnet Warrior";
        card->description =
        "Alpha, Beta, and Gamma meld as one to form a powerful monster.";
        break;
    case 11549357:
        card->basic_type = BASIC_TYPE_MONSTER;
        card->extra_type.monster_type = EXTRA_TYPE_MONSTER_NORMAL;
        card->card_code = 11549357;
        card->state.monster_state.orig_attribute = MONSTER_ATTRIBUTE_EARTH;
        card->state.monster_state.orig_type = MONSTER_TYPE_ROCK;
        card->state.monster_state.cur_attribute = MONSTER_ATTRIBUTE_EARTH;
        card->state.monster_state.cur_type = MONSTER_TYPE_ROCK;
        card->state.monster_state.orig_atk = 1500;
        card->state.monster_state.orig_def = 1800;
        card->state.monster_state.cur_orig_atk = 1500;
        card->state.monster_state.cur_orig_def = 1800;
        card->state.monster_state.cur_atk = 1500;
        card->state.monster_state.cur_def = 1800;
        card->name = "Gamma The Magnet Warrior";
        card->description =
        "Alpha, Beta, and Gamma meld as one to form a powerful monster.";
        break;
    case 13039848:
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
        break;
    case 72892473:
        card->basic_type = BASIC_TYPE_SPELL;
        card->extra_type.spell_type = EXTRA_TYPE_SPELL_NORMAL;
        card->card_code = 72892473;
        card->name = "Card Destruction";
        card->description =
        "Both players discard as many cards as possible from their hands, then "
        "each player draws the same number of cards they discarded.";
    }
    return 0;
}

int card_print(struct Card *card, char verbose) {
    puts(card->name);
    if (card->basic_type & BASIC_TYPE_MONSTER) {
        printf("%s", "Monster");
        for (int i = 0, ii = 1; i < 12; ++i, ii <<= 1) {
            if (card->extra_type.monster_type & ii) {
                printf(" %s", extra_type_monster_lookup[i]);
            }
        }
        putchar(10);
        printf("ATK: %d DEF: %d\n",
               card->state.monster_state.cur_atk,
               card->state.monster_state.cur_def);
        printf("%s", "Attribute:");
        for (int i = 0, ii = 1; i < 7; ++i, ii <<= 1) {
            if (card->state.monster_state.cur_attribute & ii) {
                printf(" %s", attribute_lookup[i]);
            }
        }
        printf("%s", " Type:");
        for (int i = 0, ii = 1; i < 24; ++i, ii <<= 1) {
            if (card->state.monster_state.cur_type & ii) {
                printf(" %s", type_lookup[i]);
            }
        }
        putchar(10);
    }
    if (card->basic_type & BASIC_TYPE_SPELL) {
        printf("%s", "Spell");
        for (int i = 0, ii = 1; i < 5; ++i, ii <<= 1) {
            if (card->extra_type.spell_type & ii) {
                printf(" %s", extra_type_spell_lookup[i]);
            }
        }
        putchar(10);
    }
    if (verbose) {
        puts("Description:");
        puts(card->description);
    }
}

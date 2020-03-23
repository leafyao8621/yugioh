#include <stdio.h>
#include "core.h"
#include "../../resource/all_cards.h"

static const char *extra_type_monster_lookup[12] = {
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

static const char *extra_type_spell_lookup[5] = {
    "Normal",
    "Continuous",
    "Equip",
    "Quick",
    "Ritual"
};

static const char *attribute_lookup[7] = {
    "Dark",
    "Divine",
    "Earth",
    "Fire",
    "Light",     
    "Water",
    "Wind",
};

static const char *type_lookup[25] = {
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
        dark_magician_init(card);
        break;
    case 99785935:
        alpha_the_magnet_warrior_init(card);
        break;
    case 39256679:
        beta_the_magnet_warrior_init(card);
        break;
    case 11549357:
        gamma_the_magnet_warrior_init(card);
        break;
    case 13039848:
        giant_soldier_of_stone_init(card);
        break;
    case 72892473:
        card_destruction_init(card);
        break;
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

#ifndef _CORE_H_
#define _CORE_H_

#define BASIC_TYPE_NULL             0x0
#define BASIC_TYPE_MONSTER          0x1
#define BASIC_TYPE_SPELL            0x2
#define BASIC_TYPE_TRAP             0x4

#define EXTRA_TYPE_MONSTER_NORMAL   0x1
#define EXTRA_TYPE_MONSTER_EFFECT   0x2
#define EXTRA_TYPE_MONSTER_RITUAL   0x4
#define EXTRA_TYPE_MONSTER_FUSION   0x8
#define EXTRA_TYPE_MONSTER_SYNCHRO  0x10
#define EXTRA_TYPE_MONSTER_XYZ      0x20
#define EXTRA_TYPE_MONSTER_PENDULUM 0x40
#define EXTRA_TYPE_MONSTER_TUNER    0x80
#define EXTRA_TYPE_MONSTER_UNION    0x100
#define EXTRA_TYPE_MONSTER_SPIRIT   0X200
#define EXTRA_TYPE_MONSTER_FLIP     0x400
#define EXTRA_TYPE_MONSTER_GEMINI   0x800

#define EXTRA_TYPE_SPELL_NORMAL     0x1
#define EXTRA_TYPE_SPELL_CONTINUOUS 0x2
#define EXTRA_TYPE_SPELL_EQUIP      0x4
#define EXTRA_TYPE_SPELL_QUICK      0x8
#define EXTRA_TYPE_SPELL_RITUAL     0x10

#define EXTRA_TYPE_TRAP_NORMAL     0x1
#define EXTRA_TYPE_TRAP_CONTINUOUS 0x2
#define EXTRA_TYPE_TRAP_COUNTER    0x4

#define MONSTER_ATTRIBUTE_DARK      0x1
#define MONSTER_ATTRIBUTE_DIVINE    0x2
#define MONSTER_ATTRIBUTE_EARTH     0x4
#define MONSTER_ATTRIBUTE_FIRE      0x8
#define MONSTER_ATTRIBUTE_LIGHT     0x10
#define MONSTER_ATTRIBUTE_WATER     0x20
#define MONSTER_ATTRIBUTE_WIND      0x40

#define MONSTER_TYPE_AQUA           0x1
#define MONSTER_TYPE_BEAST          0x2
#define MONSTER_TYPE_BEAST_WARRIOR  0x4
#define MONSTER_TYPE_CREATOR_GOD    0x8
#define MONSTER_TYPE_CYBERSE        0x10
#define MONSTER_TYPE_DINOSAUR       0x20
#define MONSTER_TYPE_DIVINE_BEAST   0x40
#define MONSTER_TYPE_DRAGON         0x80
#define MONSTER_TYPE_FAIRY          0x100
#define MONSTER_TYPE_FIEND          0x200
#define MONSTER_TYPE_FISH           0x400
#define MONSTER_TYPE_INSECT         0x800
#define MONSTER_TYPE_MACHINE        0x1000
#define MONSTER_TYPE_PLANT          0x2000
#define MONSTER_TYPE_PSYCHIC        0x4000
#define MONSTER_TYPE_PYRO           0x8000
#define MONSTER_TYPE_REPTILE        0x10000
#define MONSTER_TYPE_ROCK           0x20000
#define MONSTER_TYPE_SEA_SERPENT    0x40000
#define MONSTER_TYPE_SPELLCASTER    0x80000
#define MONSTER_TYPE_THUNDER        0x100000
#define MONSTER_TYPE_WARRIOR        0x200000
#define MONSTER_TYPE_WINGED_BEAST   0x400000
#define MONSTER_TYPE_WYRM           0x800000
#define MONSTER_TYPE_ZOMBIE         0x1000000

#define STATE_POSITION_UP           0x1
#define STATE_POSITION_DOWN         0x2
#define STATE_POSITION_ATK          0x4
#define STATE_POSITION_DEF          0x8

#define STATE_EFFECT_ACTIVATE       0x1
#define STATE_EFFECT_EFFECT         0x2
#define STATE_EFFECT_NEGATE         0x4
#define STATE_EFFECT_TARGET         0X8
#define STATE_EFFECT_AFFECTED       0x10

#define PHASE_DRAW                  0x1
#define PHASE_STANDBY               0x2
#define PHASE_MAIN1                 0x4
#define PHASE_BATTLE                0x8
#define PHASE_MAIN2                 0x10
#define PHASE_END                   0x20

struct Field;
struct Card {
    int card_code;
    char basic_type;
    union {
        int monster_type;
        int spell_type;
        int trap_type;
    } extra_type;
    char spell_speed;
    int archetype[5];
    union {
        struct {
            char orig_attribute, cur_attribute;
            int orig_type, cur_type;
            int orig_atk;
            int orig_def;
            int cur_orig_atk;
            int cur_orig_def;
            int cur_atk;
            int cur_def;
            char orig_level;
            char cur_level;
            char position;
            char effect;
            int cur_card_code;
        } monster_state;
        struct {
            char position;
            char effect;
            int cur_card_code;
        } spell_state;
        struct {
            char position;
            char effect;
            int cur_card_code;
        } trap_state;
    } state;
    int (*can_activate)(struct Field*, struct Card*);
    int (*effect)(struct Field*, struct Card*, void *args);
    const char *name, *description;
};

struct Game {
    int turn;
    char turn_player, phase, sub_phase;
    struct Card *main_field[2][10];
    struct Card deck[2][60];
    struct Card *deck_ptr[2];
    struct Card extra_deck[2][15];
    struct Card token[2][60];
    struct Card *field_spell[2];
    struct Card *grave_yard[2][60];
    struct Card *removal[2][60];
    struct Card *pendulum[2][2];
    struct Card *hand[2][60];
    struct {
        struct Card *card;
        int cost_type;
        union {
            int cost_lp;
            struct {
                int len;
                int cost_action;
                struct Card *costs[10];
            } cost_card;
        } cost;
        int effect_type;
        union {
            int effect_lp;
            struct Card *targets[10];
        } effect;
    } chain[10], cur_event;
};

int card_init(struct Card *card, int card_code);
int card_print(struct Card *card, char verbose);
int deck_init(struct Card *deck, int deck_code);
int deck_print(struct Card *deck, char verbose);
int game_summon(struct Game *game, int hand, int field, int *tributes);
#endif

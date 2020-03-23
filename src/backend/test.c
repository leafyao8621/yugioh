#include "core.h"
#include <stdio.h>

int main(void) {
    printf("%llu\n", sizeof(struct Card));
    printf("%llu\n", sizeof(struct Field));
    struct Card card;
    card_init(&card, 72892473);
    card_print(&card, 1);
}

/* Exercise 5 from Chapter 1.
 * Just a bit more functions practice. */

#include <stdio.h>

void br(void);
void ic(void);

int main(void) {
        br();
        printf(", ");
        ic();
        printf("\n");
        ic();
        printf(",\n");
        br();
        printf("\n");
        return 0;
}

void br(void) {
        printf("Бразилия, Россия");
}

void ic(void) {
        printf("Индия, Китай");
}


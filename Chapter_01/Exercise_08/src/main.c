/* Exercise 8 from Chapter I.
 * A function calls another function. 
 * Not tough, it's ok. */

#include <stdio.h>

void one_three(void);
void two();

int main(void) {
        printf("начинаем:\n");
        one_three();
        printf("порядок!\n");
        return 0;
}

void one_three(void) {
        printf("один\n");
        two();
        printf("три\n");
}

void two(void) {
        printf("два\n");
}


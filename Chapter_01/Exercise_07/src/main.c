/* Exercise 8 from Chapter I.
 * No comment, just a function and some \n's. */

#include <stdio.h>

void smile(void);

int main(void) {
        smile();
        smile();
        smile();
        printf("\n");
        smile();
        smile();
        printf("\n");
        smile();
        printf("\n");

        /* OR:
         * for(int i = 0; i < 6; i++) {
         *         smile();
         *         if(i == 2 || i == 4 || i = 5) printf("\n");
         * } */
                                                              
        return 0;
}

void smile(void) {
        printf("Улыбайся!");
}


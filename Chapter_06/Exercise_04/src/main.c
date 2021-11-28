/* Exercise 4 from Chapter VI.
 * Much more loops practice.
 */

#include <stdio.h>

#define ROWS 6 

int main(void) {
        
        char ch = 65;

        for(int i = 0; i < ROWS; i++) {
                for(int j = 0; j <= i; j++) {
                        printf("%c", ch++);
                }
                printf("\n");
        }

        return 0;
}


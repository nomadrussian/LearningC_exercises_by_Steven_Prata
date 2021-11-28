/* Exercise 5 from Chapter VI.
 * Building a pyramid.
 */

#include <stdio.h>
#include <stdlib.h>

void clearInputBuffer();

int main(void) {

        char max_letter;

        request:
        printf("Please, give me a CAPITAL LETTER: ");
        scanf("%c", &max_letter);
        if(max_letter < 65 || max_letter > 90) {
                clearInputBuffer();
                goto request;
        }

        int rows = max_letter - 64;

        for(int i = 1; i <= rows; i++) {

                for(int j = 0; j < rows - i; j++) {
                        printf(" ");
                }

                for(int j = 0; j < i * 2 - 1; j++) {
                        printf("%c", (64 + i) - (abs(i - j - 1))); // That was a bit harder than I thought :D
                }

                printf("\n");
        }

        return 0;
}

void clearInputBuffer() {
        static char buff;
        while((buff = getchar()) != '\n' && buff != EOF);
}


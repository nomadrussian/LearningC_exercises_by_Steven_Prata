/* Exercise 6 from Chapter VI.
 * Number, its square and cube.
 */

#include <stdio.h>

void clearInputBuffer(void);

int main(void) {

        int check, l_limit, h_limit;

        printf("Hello! This program makes a table of numbers, their squares and cubes.\n");
        printf("********************************************************************************");

        do {    
                printf("\nPlease, give me the lower limit: ");
                check = scanf("%d", &l_limit);
                clearInputBuffer();
        } while(check != 1);
        
        do {
                printf("\nPlease, give me the higher limit: ");
                check = scanf("%d", &h_limit);
                clearInputBuffer();
        } while(check != 1 || h_limit <= l_limit);
        
        printf("\n********************************************************************************\n");

        for(int i = l_limit; i <= h_limit; i++) {
                long sqr = (long)i * i;
                printf("| NUM: %10d | SQR: %19ld | CUB: ", i, sqr);
                if(i < 2097152) // The cubic root of maximum of long int.
                        printf("%19ld |\n", sqr * i);
                else                        
                        printf("%19Lg |\n", (long double)sqr * i);
        }

        return 0;
}

void clearInputBuffer(void) {
        static char buff;
        while((buff = getchar()) != '\n' && buff != EOF);
}


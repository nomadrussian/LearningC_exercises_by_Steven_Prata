/* Exercise 9 from Chapter VI.
 * Calculating with floats practice: little improvement.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void printAsterisks(uint8_t);
void cancelTheProgram(void);
void clearInputBuffer(void);
long double ratioOfDifferenceAndProduct(long double, long double);

int main(void) {

        int check;
        long double floats[2], result;

        printAsterisks(86);
        printf("Calculating with floats (a - b) / (a * b). To exit give me any not-a-number character.\n");
        printAsterisks(86);

        while(1) {
                for(uint8_t i = 0; i < 2; i++) {
                        printf("Please, give me the %s number: ", i == 0 ? "first" : "second");
                        check = scanf("%Lf", &floats[i]);
                        if(check != 1) cancelTheProgram();
                        clearInputBuffer();
                }
                printf("Result: %Lg\n", ratioOfDifferenceAndProduct(floats[0], floats[1]));
        }
}

void printAsterisks(uint8_t count) {
        for(uint8_t i = 0; i < count; i++) printf("*");
        printf("\n");
}

void cancelTheProgram(void) {
        printAsterisks(39);
        printf("The program has been cancelled by User.\n");
        printAsterisks(39);
        exit(0);
}

void clearInputBuffer(void) {
        static int buff;
        while((buff = getchar()) != '\n' && buff != EOF);
}

long double ratioOfDifferenceAndProduct(long double a, long double b) {
        return (a - b) / (a * b);
}


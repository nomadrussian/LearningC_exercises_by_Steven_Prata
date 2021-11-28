/* Exercise 8 from Chapter VI.
 * Calculating with floats practice.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void printAsterisks(uint8_t);
void cancelTheProgram(void);
void clearInputBuffer(void);

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

                result = (floats[0] - floats[1]) / (floats[0] * floats[1]);
                
                printf("Result: %Lg\n", result);
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


/* Exercise 10 from Chapter 6.
 * Calculating the sum of squares.
 * I changed it a little bit I didn't like how it was suggested to implement the termination of the program.
 */

#include <stdio.h>
#include <stdint.h>

void printAsterisks(uint8_t);
void clearInputBuffer(void);

int main(void) {

        int lower_limit, higher_limit;
        unsigned long sum;
        
        printAsterisks(71);
        printf("Calculating the sum of squares of natural numbers. To exit give me any not-a-number symbol.\n");
        printAsterisks(71);

        while(1) {
                printf("Please, type in the the lower and the higher limits: ");
                if(scanf("%d %d", &lower_limit, &higher_limit) != 2) {
                        printAsterisks(39);
                        printf("The program has been cancelled by User.\n");
                        printAsterisks(39);
                        break;
                }
                clearInputBuffer();
                if(lower_limit < 1 || higher_limit < 1) {
                        printf("Please, use only natural numbers.\n");
                        continue;
                }
                if(lower_limit >= higher_limit) {
                        printf("The higher limit has to be greater than the lower.\n");
                        continue;
                }

                sum = 0;
                for(int i = lower_limit; i <= higher_limit; i++) {
                        sum += (long)i * i;
                }
                
                printf("The sum of squares (from %d to %d) is equal to %lu\n\n", 
                                lower_limit * lower_limit, higher_limit * higher_limit, sum);
        }

        return 0;
}

void printAsterisks(uint8_t count) {
        for(uint8_t i = 0; i < count; i++) printf("*");
        printf("\n");
}

void clearInputBuffer(void) {
        static char buff;
        while((buff = getchar()) != '\n' && buff != EOF);
}


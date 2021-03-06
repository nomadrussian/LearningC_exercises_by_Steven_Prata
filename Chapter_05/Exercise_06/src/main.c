/* Exercise 6 from Chapter V.
 * Calculating the sum of squares of numbers from 1 to N. 
 */

#include <stdio.h>

void clearInputBuffer();

int main(void) {

        int count, i, check;
        unsigned long long sum;

        while(1) {
                count = 0;
                sum   = 0;
        
                printf("Please, type in the number of iterations you want. Give me negative or zero to exit: ");
                check = scanf("%d", &i);

                if(check == 0) {
                        clearInputBuffer();
                        continue;
                }

                if(i <= 0) {
                        printf("The program has been cancelled by user. (input:%d)\n", i);
                        break;
                }
                
                printf("Calculating...\n");

                while(count++ < i) sum += count * count;
                
                printf("sum = %llu\n", sum);
                clearInputBuffer();
        }

        return 0;
}

void clearInputBuffer() {
        static char buffer;
        while((buffer = getchar()) != '\n' && buffer != EOF);
}


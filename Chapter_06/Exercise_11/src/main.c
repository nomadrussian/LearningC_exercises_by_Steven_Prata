/* Exercise 11 from Chapter 6.
 * Writing and reading an array.
 */

#include <stdio.h>

#define SIZE 8

int main(void) {

        int nums[SIZE];

        printf("Please, type in %d numbers: ", SIZE);

        for(int i = 0; i < SIZE; i++) {
                if(scanf("%d", &nums[i]) != 1) {
                        printf("***************************************************************************");
                        printf("\nERROR: FAILED TO READ THE INPUT. Please, check if you type in only numbers.\n");
                        printf("***************************************************************************\n");
                        return 1;
                }
        }

        printf("The reversed output: ");
        for(int i = SIZE - 1; i > -1; i--) {
                printf("%d ", nums[i]);
        }
        printf("\n");

        return 0;
}


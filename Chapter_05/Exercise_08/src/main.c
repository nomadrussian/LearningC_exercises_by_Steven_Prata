/* Exercise 8 from Chapter V.
 * Calculating the remainder of division.
 */

#include <stdio.h>

void clearInputBuffer();
void warn();

int main(void) {

        int check, input, result, divider, dividend;
        warn();

        request:
        printf("Please, type in the divider. Give me zero to exit: ");
        if((check = scanf("%d", &divider)) == 0) {
                clearInputBuffer();
                goto request;
        }

        if(divider == 0) {
                printf("The program has been cancelled by user\n");
                return 0;
        }

        do {
                printf("Please, type in the dividend. Give me zero to exit: ");
                if((check = scanf("%d", &dividend)) == 0) {
                        clearInputBuffer();
                        continue;
                }

                if(dividend == 0) {
                        printf("The program has been cancelled by user.\n");
                        break;
                }

                result = dividend % divider;
                printf("%d %% %d equals %d\n", dividend, divider, result);
                
                clearInputBuffer();

        } while(input != 0);

        return 0;
}

void clearInputBuffer() {
        static char buff;
        while((buff = getchar()) != '\n' && buff != EOF);
}

void warn() {
        printf("**********************************\n");
        printf("* All values have to be integer. *\n");
        printf("**********************************\n");
}


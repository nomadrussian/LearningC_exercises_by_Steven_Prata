/* Exercise 3 from Chapter V.
 * Days to weeks&days converting.
 */

#include <stdio.h>

void clearInputBuffer(void);

int main(void) {

        int total_days, days, weeks;

        do {
                printf("\nPlease, type in the amount of days. Give me negative or zero to exit: ");
                int check = scanf("%d", &total_days);

                if(check == 0) {
                        clearInputBuffer();
                        continue;
                }

                weeks = total_days / 7;
                days  = total_days % 7;

                printf("%dd = %dw %dd\n", total_days, weeks, days);
                clearInputBuffer();

        } while(total_days > 0);

        return 0;
}

void clearInputBuffer(void) {
        char buffer;
        while((buffer = getchar()) != '\n' && buffer != EOF);
}


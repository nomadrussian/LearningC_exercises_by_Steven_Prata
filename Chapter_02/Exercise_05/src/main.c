/* Exercise 5 from Chapter II.
 * Just calculating full years to seconds. Nothing complicated.
 */

#include <stdio.h>

#define SECS_IN_YEAR 3.156e7

int main(void) {
        
        unsigned int    years;
        double          seconds;
        
        printf("Please, type in years: ");
        scanf("%u", &years);
        seconds = years * SECS_IN_YEAR;
        printf("It's equal to %g seconds. (or %.0f)\n", seconds, seconds);

        return 0;
}


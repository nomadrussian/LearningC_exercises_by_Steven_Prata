/* Exercise 4 form Chapter III.
 * This program asks you to type in a number with floating point
 * and then prints it in different formats.
 */

#include <stdio.h>

int main(void) {

        double x;

        printf("Please, type in a number with floating point: ");
        scanf("%lf", &x);
        printf("Decimal format                 : %f\n", x);
        printf("Exponential format             : %e\n", x);
        printf("Hexadecimal exponential format : %a\n", x); //Binary exponential doesn't work on my system.

        return 0;
}


/* Exercise 7 from Chapter V.
 * Calculating the cube of a number.
 */

#include <stdio.h>

long double cube(double);

int main(void) {
        
        int     check;
        double  num;
        char    buffer;

        request:
        printf("Please, give me a number: ");
        check = scanf("%lf", &num);
        if(check == 0) {
                while((buffer = getchar()) != '\n' && buffer != EOF);
                goto request;
        }

        printf("%g^3 = %Lg\n", num, cube(num));

        return 0;
}

long double cube(double p) {
        return p * p * p;
}


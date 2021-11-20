/* Exercise 7 from Chapter III.
 * Converting inches to centimetres.
 */

#include <stdio.h>

#define INCH_SIZE 2.54f

int main(void) {

        float inches;

        printf("Please, type in inches amount: ");
        scanf("%f", &inches);
        printf("%g\" = %gcm\n", inches, inches * INCH_SIZE);

        return 0;
}


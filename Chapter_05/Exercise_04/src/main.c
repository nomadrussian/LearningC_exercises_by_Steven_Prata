/* Exercise 4 from Chapter V.
 * Converting centimetres to feet and inches.
 */

#include <stdio.h>
#include <math.h>

#define INCH 2.54
#define FOOT 30.48

void clearInputBuffer(void);

int main() {

        double inches, centimetres;
        int    feet;

        while(1) {
                printf("Please, type in the amount of centimetres. Give me negative or zero to exit: ");
                int check = scanf("%lf", &centimetres);

                if(check == 0) {
                        clearInputBuffer();
                        continue;             
                }

                if(centimetres <= 0) {
                        printf("The program has been stopped.\n");
                        return 0;
                }
                
                centimetres = roundf(centimetres * 1000) / 1000.0; //Capping precision at .3

                feet = (int)(centimetres / FOOT);
                inches = (centimetres - feet * FOOT) / INCH;

                printf("%g cm = %d\' %g\"\n", centimetres, feet, inches);

                clearInputBuffer();
        }

        return 0;
}

void clearInputBuffer(void) {
        static char buffer;
        while((buffer = getchar()) != '\n' && buffer != EOF);
}

/* In the previous version low precision formatting such as %.2f led to delirious stuff like:
 * 30.48 cm = 1' 0.00" but
 * 30.47 cm = 0' 12.00" ????? :=/ looks weird. It took me a while to figure out how to fix it. 
 * Actually e.g 30.47999999 is converted to inches, but due to the floats precision loss I had 0 feet
 * and 12.0 inches.
 * I used roundf() from math.h to cap centimetres variable's precision at 3 decimals after the point.
 * That solved the problem. Now 30.47999999 turns into 30.479 and the rest works correctly.
 */


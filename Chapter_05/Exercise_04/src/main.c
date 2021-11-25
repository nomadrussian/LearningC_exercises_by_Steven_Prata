/* Exercise 4 from Chapter V.
 * Converting centimetres to feet and inches.
 */

#include <stdio.h>

#define INCH 2.54
#define FEET 12

void clearInputBuffer(void);

int main() {

        double inches, centimetres;
        int    feet;

        do {
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
                
                inches = centimetres / 2.54;
                feet = (int)inches / 12.0;
                inches -= feet * 12.0;

                printf("%.2f cm = %d feet %.2f inches.\n", centimetres, feet, inches);
                clearInputBuffer();
        
        } while(centimetres > 0);

        return 0;
}

void clearInputBuffer(void) {
        static char buffer;
        while((buffer = getchar()) != '\n' && buffer != EOF);
}


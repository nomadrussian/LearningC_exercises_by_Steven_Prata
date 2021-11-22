/* Exercise 4 from Chapter IV.
 * Converting cantimetres to metres, feet and inches.
 *
 *      1 metre  =  100   centimetres
 *      1 inch   =  2.52  centimetres
 *      1 foot   =  12    inches
 */

#include <stdio.h>

double cm_toInches(double num);
double cm_toFeet(double num);
double cm_toMetres(double num);

int main(void) {

        double height_cm;
        char   name[17];

        printf("Please, type in your name: ");
        scanf("%16s", name);
        printf("Please, type in your height in cm: ");
        scanf("%lf", &height_cm);
        printf("%s, your height in metres  :  %g\n", name, cm_toMetres(height_cm));
        printf("%s, your height in inches  :  %g\n", name, cm_toInches(height_cm));
        printf("%s, your height in feet    :  %g\n", name, cm_toFeet(height_cm));        

        return 0;
}

double cm_toInches(double num) {
        return num / 2.54;
}

double cm_toFeet(double num) {
        return num / (2.54 * 12.0);
}

double cm_toMetres(double num) {
        return num / 1.0e2;             //Just to show off :)
}


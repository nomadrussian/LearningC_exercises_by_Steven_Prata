/* Exercise 8 from Chapter IV.
 * Calculating fuel consumption.
 */

#include <stdio.h>

#define GAtoLI 3.785
#define MLtoKM 1.609

int main(void) {

        double fuelCons_MtoGAL, fuelCons_LtoKM, miles, gallons, litres, kilometres; 

        printf("Please, type in miles: ");
        scanf("%lf", &miles);
        printf("Please, type in gallons: ");
        scanf("%lf", &gallons);

        litres      =  gallons * GAtoLI;
        kilometres  =  miles   * MLtoKM;

        fuelCons_MtoGAL = miles  / gallons;
        fuelCons_LtoKM  = litres / kilometres * 1.0e2;
        
        printf("Fuel Consumption in miles/gallon : %.2lf\n", fuelCons_MtoGAL);
        printf("Fuel Consumption in liter/100km  : %.2lf\n", fuelCons_LtoKM);

        return 0;
}


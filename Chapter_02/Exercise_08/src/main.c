/* Exercise 8 from Chapter II.
 * It's much harder to realise than to implement :)
 * I'm just not familiar with the American volume system.
 *
 *      1 pint        =    2 cups;
 *      1 cup         =    8 ounces;
 *      1 ounce       =    2 tablespoons;
 *      1 tablespoon  =    3 teaspoons;
 *
 * The program asks for cups amound and displays the same amount in pints, ounces, etc..
 */

#include <stdio.h>

int main(void) {

        double pints, cups, ounces, tablespoons, teaspoons;

        printf("Please, type in the amount of cups: ");
        scanf("%lf", &cups);
        
        pints        =           cups / 2.0;
        ounces       =           cups * 8.0;
        tablespoons  =         ounces * 2.0;
        teaspoons    =    tablespoons * 3.0;

        printf("%g pints;\n", pints);
        printf("%g ounces;\n", ounces);
        printf("%g tablespoons;\n", tablespoons);
        printf("%g teaspoons;\n", teaspoons);
    
        return 0;
}


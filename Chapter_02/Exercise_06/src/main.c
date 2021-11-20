/* Exercise 6 from Chapter II.
 * This one is the same as the previous.
 * Here we calcilating the amount of water molecules.
 * 1 Quart = ~0.950 kg.
 */

#include <stdio.h>

#define WM_MASS 2.9905e-26 //Mass of 1 water molecule in kg.
#define QU_MASS 0.95

double count_molecules(double);

int main(void) {
        
        double volume, molecules;
        
        printf("Please, type in amount of water in quarts: ");
        scanf("%lf", &volume);
        molecules = count_molecules(volume);
        printf("%f quarts contain %e molecules of water. (~%.0f)\n", volume, molecules, molecules);

        return 0;
}

double count_molecules(double quarts) {
        return quarts * QU_MASS / WM_MASS;
}


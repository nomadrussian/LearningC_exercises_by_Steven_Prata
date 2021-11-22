/* Exercise 3 from Chapter IV.
 * Reading and displaying a number with floating point.
 */

#include <stdio.h>

int main(void) {
        
        double num;

        printf("Please, type in a nubmer: ");
        scanf("%lf", &num);
        printf("\n%.1lf       %.1e\n%+.3lf    %.3E\n\n", num, num, num, num);

        return 0;
}


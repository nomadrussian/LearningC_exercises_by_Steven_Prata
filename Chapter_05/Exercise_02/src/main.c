/* Exercise 2 from Chapter II.
 * Displaying all numbers from n to n+10.
 */

#include <stdio.h>

int main(void) {

        int n;

        printf("Please, type in an integer number: ");
        scanf("%d", &n);
        
        for(int i = 0; i < 11; i++) {
                printf("%d\t", n + i);
        }
        printf("\n");

        return 0;
}


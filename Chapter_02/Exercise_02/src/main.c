/* Exercise 2 from Chapter II.
 * Here the user inputs a number and the program prints a character
 * corresponding to the ASCII number.
 */

#include <stdio.h>
#include <stdint.h>

int main(void) {
        int ch;
        printf("Please, type in an number: ");
        scanf("%d", &ch);
        printf("%d is %c in ASCII.\n", ch, ch);
        return 0;
}


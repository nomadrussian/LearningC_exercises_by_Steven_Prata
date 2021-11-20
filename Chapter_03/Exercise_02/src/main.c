/* Exercise 2 from Chapter III.
 * Here the user inputs a number and the program prints a character
 * corresponding to the ASCII code.
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


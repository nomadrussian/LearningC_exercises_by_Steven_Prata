/* Exercise 1 from Chapter VI.
 * Array practice.
 */

#include <stdio.h>

int main(void) {

        char letters[26];

        for(int i = 0; i < 26; i++) letters[i] = i + 97;

        for(int i = 0; i < 26; i++) printf("%c ", letters[i]);
        printf("\n");

        return 0;
}


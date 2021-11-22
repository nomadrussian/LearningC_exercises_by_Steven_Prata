/* Exercise 2 from Chapter IV.
 * Little manipulations with string fromatting.
 */

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 16

int main(void) {
        
        char name[MAX_NAME_LENGTH + 1];
        
        printf("Please, type in your name: ");
        scanf("%16s", name);

        printf("\n\"%s\"\n", name);
        printf("\"%20s\"\n", name);
        printf("\"%-20s\"\n", name);
        printf("%*s\n\n", (int)strlen(name) + 3, name);
        printf("String length: (int)strlen(name) = %d\n", (int)strlen(name));
        printf("                    strlen(name) = %zu\n", strlen(name));

        return 0;
}


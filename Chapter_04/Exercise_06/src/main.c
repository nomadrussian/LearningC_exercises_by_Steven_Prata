/* Exercise 6 from Chapter IV.
 * Just more string formatting practice.
 */

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 16

int main(void) {

        char first_name[MAX_NAME_LENGTH + 1], last_name[MAX_NAME_LENGTH + 1], ch;

        printf("Please, type in your first name: ");
        scanf("%16s", first_name);
        while((ch = getchar()) != '\n' && ch != EOF); //Clearing the input buffer to avoid bugs.
        printf("Please, type in your last name: ");
        scanf("%16s", last_name);

        int fn_l = (int)strlen(first_name);
        int ln_l = (int)strlen(last_name);

        printf("\n%s %s\n", first_name, last_name);
        printf("%*d %*d\n", fn_l, fn_l, ln_l, ln_l);
        printf("\n%s %s\n", first_name, last_name);
        printf("%-*d %-*d\n\n", fn_l, fn_l, ln_l, ln_l);

        return 0;
}


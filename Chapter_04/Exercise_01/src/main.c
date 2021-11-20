/* Exercise 1 from Chapter IV.
 * In this exercise we are working with two strings.
 * We want to scan and print them.
 */

#include <stdio.h>
#define MAX_LENGTH 12

int main(void) {

        char first_name[MAX_LENGTH + 1], last_name[MAX_LENGTH + 1];

        printf("Пожалуйста, введите ваше имя:  ");
        scanf("%12s", first_name);
        
        char ch;                                      // Clearing the buffer to fix a bug when the input
        while((ch = getchar()) != '\n' && ch != EOF); // string lenght is greater than MAX_LENGTH.

        printf("Пожалуйста, введите фамилию:   ");    // So, I made it 12 just to show that in case of string length > 12
        scanf("%12s", last_name);                     // the program doesn't crash but just cuts the string.

        printf("Ваши данные: %s %s\n", last_name, first_name);

        return 0;
}


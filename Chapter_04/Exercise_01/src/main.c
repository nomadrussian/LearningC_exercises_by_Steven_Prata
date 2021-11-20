/* Exercise 1 from Chapter IV.
 * In this exercise we are working with two strings.
 * We want to scan and print them.
 */

#include <stdio.h>
#define MAX_SIZE 24

int main(void) {

        char first_name[MAX_SIZE], last_name[MAX_SIZE];

        printf("Пожалуйста, введите ваше имя:  ");
        scanf("%s", first_name);
        printf("Пожалуйста, введите фамилию:   ");
        scanf("%s", last_name);

        printf("Ваши данные: %s %s\n", last_name, first_name);

        return 0;
}


/* Exercise 4 from Chapter II.
 * This task is to have some functions practice (just the basics):
 *
 *      Вдобавок к функции main() в программе должны использоваться две определенные
 *      пользователем функции: jolly(), которая выводит сообщение “Он веселый
 *      молодец!" один раз, и deny(), выводящая сообщение в последней строке.
 *
 * So...yeah, nothing tough. Just to figure out how it works.                         */

#include <stdio.h>

void jolly();
void deny();

int main(void) {
        jolly();
        jolly();
        jolly();
        deny();
        return 0;
}

void jolly() {
        printf("Он весёлый молодец!\n");
}

void deny() {
        printf("Никто не может это отрицать!\n");
}


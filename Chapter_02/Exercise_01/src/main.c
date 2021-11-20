/* Exercise 1 from Chapter II.
 * The task is: 
 *     
 *     Напишите программу, которая использует первый вызов функции printf() для
 *     вывода своего имени и фамилии в одной строке, второй вызов printf(), чтобы
 *     вывести имя и фамилию в двух строках, и еще два вызова printf() для вывода
 *     имени и фамилии в одной строке. Выходные данные должны иметь следующий
 *     вид (но с указанием ваших персональных данных).
 *
 * So, if you don't understand Russian just use Google or Yandex Translate. 
 * Or you can buy the original English version of the book.                       */

#include <stdio.h>

int main(void) {
        printf("George Glebov\n");
        printf("George\nGlebov\n");
        printf("George ");
        printf("Glebov\n");
        return 0;
}


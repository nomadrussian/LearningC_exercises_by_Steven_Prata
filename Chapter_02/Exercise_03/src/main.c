/* Exercise 3 from Chapter II.
 * The task is simple - convert years to days.
 * So you don't care about leap years and we consider only FULL years that you have lived: 
 *
 *      Напишите программу, которая преобразует ваш возраст в полных годах в количество
 *      дней и отображает на экране оба значения. Не обращайте внимания на високосные годы. 
 * 
 * But a part of me wants to do it in a much more complicated way...I must learn to stop.
 * At the right moment. So, I'm not going to do it.                                         */

#include <stdio.h>

int main(void) {
        int my_age = 22; //My age in 2021.
        printf("I'm %d full years old or %d days.\n", my_age, my_age * 365);
        return 0;
}


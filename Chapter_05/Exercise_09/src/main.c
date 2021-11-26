/* Exercise 9 from Chapter V.
 * Converting temperatures.
 */

#include <stdio.h>

void clearInputBuffer();

const double KELVIN_CELSIUS_DIFF    = 273.16;
const double CELSIUS_SHIFT_FACTOR    = 32.0;
const double CELSIUS_SCALE_FACTOR    = 5.0 / 9.0;

int main(void) {

        int check;
        double temp_fahr, temp_cels, temp_kelv;

        printf("To exit give me Q or another not-a-number character.\n");

        while(1) {
                printf("Please, type in the temperature in Fahrenheit degrees: ");
                check = scanf("%lf", &temp_fahr);

                if(check == 0) {
                        printf("The program has been cancelled by user.\n");
                        break;
                }

                temp_cels = CELSIUS_SCALE_FACTOR * (temp_fahr - CELSIUS_SHIFT_FACTOR);
                temp_kelv = temp_cels + KELVIN_CELSIUS_DIFF;

                printf("%.2f°F is equal to %.2f°C or %.2f K\n", temp_fahr, temp_cels, temp_kelv);      
        }
        return 0;
}

void clearInputBuffer() {
        static char buff;
        while((buff = getchar()) != '\n' && buff != EOF);
}


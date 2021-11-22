/* Exercise 5 from Chapter IV
 * Calculatind download/upload time.
 */

#include <stdio.h>

double calcLoadingTime(double, double);

int main(void) {

        double speed_Mb;
        double size_MB;
        double time_s;

        printf("Please, type in the file size in MegaBytes: ");
        scanf("%lf", &size_MB);
        printf("Please, type in loading speed in Megabits/sec: ");
        scanf("%lf", &speed_Mb);

        time_s = calcLoadingTime(size_MB, speed_Mb);

        printf("At loading speed %.2f Mb/s it will take %.2f seconds to load a %.2f MB file.\n", speed_Mb, time_s, size_MB);

        return 0;
}

double calcLoadingTime(double _size_MB, double _speed_Mb) {
        return _size_MB * 8 / _speed_Mb;
}


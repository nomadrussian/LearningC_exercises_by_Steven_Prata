/* Exercise 7 from Chapter IV.
 * Comparing floats with single, double, and quadruple precision.
 */

#include <stdio.h>
#include <float.h>

#define THIRD "0.33333333333333333333333333333..."

int main(void) {

        long double ld  =  1.0L / 3.0L;
             double  d  =  1.0 / 3.0;
              float  f  =  1.0 / 3.0;

        printf("Precision .4  | f : %-34.4f d : %-34.4f ld : %-34.4Lf\n", f, d, ld);
        printf("Precision .12 | f : %-34.12f d : %-34.12f ld : %-34.12Lf\n", f, d, ld);
        printf("Precision .16 | f : %-34.16f d : %-34.16f ld : %-34.16Lf\n", f, d, ld);
        printf("Precision .24 | f : %-34.24f d : %-34.24f ld : %-34.24Lf\n", f, d, ld);
        printf("Precision .32 | f : %-34.32f d : %-34.32f ld : %-34.36Lf\n", f, d, ld);
        printf("1.0 / 3.0 = %s\n", THIRD);
        printf("FLT_DIG  : %d\n", FLT_DIG);
        printf("DBL_DIG  : %d\n", DBL_DIG);
        printf("LDBL_DIG : %d\n", LDBL_DIG);

        return 0;
}


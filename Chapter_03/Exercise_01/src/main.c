/* Exercise 1 form Chapter III.
 * In this program I'm trying to:
 *      1. Get sizes of data types;
 *      2. Test how integer overflow behaves;
 *      3. Test how float/double types work:
 *              a) loss of presicion;
 *              b) getting infinity and -infinity;
 *              c) getting NaN(Not A Number);
 * I'm going to write down what result I have, so you can compare it to your coumputer.
 * My configuration:
 *      CPU :  AMD Phenom II x6 1100t
 *      RAM :  12GB
 *      OS  :  Linux Mint 20.2 Cinnamon (Kernel: 5.4.0-90-generic)
 */

#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <float.h>

//*********************************************************************

void printSizesOfTypes(void);
void printAsterisks(int);

void testSIntegerOverflow(int, int); //signed integer
void testUIntegerOverflow(unsigned int, unsigned int); //unsigned integer

void testFloatPrecisionLoss(double, double); //I also convert them to float.
void gettingInfinity(double, double); //Positive and negative.
void gettingNaN(void); //NaN - Not A Number.

//*********************************************************************

int main(void) {
        
        printAsterisks(48);
        printSizesOfTypes();
        printAsterisks(48);
        
        testSIntegerOverflow(2147483647, 64);
        printAsterisks(48);
        testUIntegerOverflow(4294967290, 16);
        printAsterisks(48);

        testFloatPrecisionLoss(3.141592653589, 2.718281828459);
        printAsterisks(48);

        gettingInfinity(DBL_MAX, 1.000001);
        printAsterisks(48);
        gettingNaN();
        printAsterisks(48);
        

        return 0;
}

void printSizesOfTypes(void) {

        size_t imax = sizeof(intmax_t);
        size_t c    = sizeof(char);
        size_t h    = sizeof(short);
        size_t i    = sizeof(int);
        size_t l    = sizeof(long);
        size_t ll   = sizeof(long long);

        size_t f    = sizeof(float);
        size_t d    = sizeof(double);
        size_t ld   = sizeof(long double);

        printf("INTEGER:\n");
        printf("Size of char          :    %2zu byte(s) = %3zu bits\n", c, c * 8);
        printf("Size of short         :    %2zu byte(s) = %3zu bits\n", h, h * 8);
        printf("Size of int           :    %2zu byte(s) = %3zu bits\n", i, i * 8);
        printf("Size of long          :    %2zu byte(s) = %3zu bits\n", l, l * 8);
        printf("Size of long long     :    %2zu byte(s) = %3zu bits\n", ll, ll * 8);
        printf("Size of intmax_t      :    %2zu byte(s) = %3zu bits\n", imax, imax * 8);
        printf("FLOATING POINT:\n");
        printf("Size of float         :    %2zu byte(s) = %3zu bits\n", f, f * 8);
        printf("Size of double        :    %2zu byte(s) = %3zu bits\n", d, d * 8);
        printf("Size of long double   :    %2zu byte(s) = %3zu bits\n", ld, ld * 8);
}

void printAsterisks(int count) {
        for(int i = 0; i < count; i++) {
                printf("*");
        }
        printf("\n");
}

void testSIntegerOverflow(int p1, int p2) {

        signed int summ = p1 + p2;
        signed int diff = -p1 - p2;

        printf("signed int MAX : %d, MIN : %d\n", INT_MAX, INT_MIN);
        printf("Overflow  : %+d + %d = %+d\n", p1, p2, summ);
        printf("Underflow : %+d - %d = %+d\n", -p1, p2, diff);
}

void testUIntegerOverflow(unsigned int p1, unsigned int p2) {

        unsigned int summ = p1 + p2;
        unsigned int diff = -p1 - p2;

        printf("unsigned int MAX : %u, MIN : 0\n", UINT_MAX);
        printf("Overflow  : %u + %u = %u\n", p1, p2, summ);
        printf("Underflow : %u - %u = %u\n", p2 / 2, p2, p2 / 2 - p2);
}

void testFloatPrecisionLoss(double p1, double p2) {

        float  f1    =  (float)p1;
        float  f2    =  (float)p2;

        double  d_diff   =  p1 - p2; 
        float   f_diff0  =  p1 - p2;  
        float   f_diff1  =  f1 - f2;
        double df_diff0  =  d_diff - (double)f_diff0; //calculating inaccuracy (double vs float)
        double df_diff1  =  d_diff - (double)f_diff1; 

        printf("double MIN : %e, anything lower is a denormalized (or subnormal) number\n", DBL_MIN);
        printf("PRECISION LOSS —— double : %.12f  - %.12f  = %.12f \n", p1, p2, d_diff);
        printf("Difference then to float : %.12f  - %.12f  = %.12ff, inaccuracy: %+e\n", p1, p2, f_diff0, df_diff0);
        printf("To float then difference : %.12ff - %.12ff = %.12ff, inaccuracy: %+e\n", f1, f2, f_diff1, df_diff1);
        printf("df_diff1 / df_diff0 = %f\n", df_diff1 / df_diff0);
}

void gettingInfinity(double p1, double p2) {

        double result_pos = p1 * p2;
        double result_neg = -p1 * p2;

        printf("double MAX : %e, anything higher is infinity\n", DBL_MAX);
        printf("Getting positive infinity: %+e * %.6f = %+e\n", p1, p2, result_pos);
        printf("                         : %+.1f / %+.1f = %+f\n", 1.0, 0.0, 1.0 / 0.0);
        printf("                         : %+.1f / %+.1f = %+f\n", -1.0, -0.0, -1.0 / -0.0);
        printf("Getting negative infinity: %+e * %.6f = %+e\n", -p1, p2, result_neg);
        printf("                         : %+.1f / %+.1f = %+f\n", -1.0, 0.0, -1.0 / 0.0);
        printf("                         : %+.1f / %+.1f = %+f\n", 1.0, -0.0, 1.0 / -0.0);
}

void gettingNaN(void) {

        float  fzero_pos = 0.0f;
        float  fzero_neg = -0.0f;
        double dzero_pos = 0.0;
        double dzero_neg = -0.0;
        double infinity  = 1.0 / 0.0;

        float  fNaN0 = fzero_pos / fzero_pos;
        float  fNaN1 = fzero_neg / fzero_pos;
        float  fNaN2 = fzero_pos / fzero_neg;
        float  fNaN3 = fzero_neg / fzero_neg;
        double dNaN0 = dzero_pos / dzero_pos;
        double dNaN1 = dzero_neg / dzero_pos;
        double dNaN2 = dzero_pos / dzero_neg;
        double dNaN3 = dzero_neg / dzero_neg;

        printf("Getting NaN (Not A Number):\n");
        printf("%+1.1ff / %+1.1ff = %+f\n", fzero_pos, fzero_pos, fNaN0);
        printf("%+1.1ff / %+1.1ff = %+f\n", fzero_neg, fzero_pos, fNaN1);
        printf("%+1.1ff / %+1.1ff = %+f\n", fzero_pos, fzero_neg, fNaN2);
        printf("%+1.1ff / %+1.1ff = %+f\n", fzero_neg, fzero_neg, fNaN3);
        printf("%+1.1f  / %+1.1f  = %+f\n", dzero_pos, dzero_pos, dNaN0);
        printf("%+1.1f  / %+1.1f  = %+f\n", dzero_neg, dzero_pos, dNaN1);
        printf("%+1.1f  / %+1.1f  = %+f\n", dzero_pos, dzero_neg, dNaN2);
        printf("%+1.1f  / %+1.1f  = %+f\n", dzero_neg, dzero_neg, dNaN3);
        
        printf("%+f  + %+f  = %+f\n", infinity, -infinity, infinity - infinity);
        printf("%+f  + %+f  = %+f\n", -infinity, infinity, -infinity + infinity);
}

/* So, the output on my computer is: 
  
************************************************
INTEGER:
Size of char          :     1 byte(s) =   8 bits
Size of short         :     2 byte(s) =  16 bits
Size of int           :     4 byte(s) =  32 bits
Size of long          :     8 byte(s) =  64 bits
Size of long long     :     8 byte(s) =  64 bits
Size of intmax_t      :     8 byte(s) =  64 bits
FLOATING POINT:
Size of float         :     4 byte(s) =  32 bits
Size of double        :     8 byte(s) =  64 bits
Size of long double   :    16 byte(s) = 128 bits
************************************************
signed int MAX : 2147483647, MIN : -2147483648
Overflow  : +2147483647 + 64 = -2147483585
Underflow : -2147483647 - 64 = +2147483585
************************************************
unsigned int MAX : 4294967295, MIN : 0
Overflow  : 4294967290 + 16 = 10
Underflow : 8 - 16 = 4294967288
************************************************
double MIN : 2.225074e-308, anything lower is a denormalized (or subnormal) number
PRECISION LOSS —— double : 3.141592653589  - 2.718281828459  = 0.423310825130 
Difference then to float : 3.141592653589  - 2.718281828459  = 0.423310816288f, inaccuracy: +8.842006e-09
To float then difference : 3.141592741013f - 2.718281745911f = 0.423310995102f, inaccuracy: -1.699719e-07
df_diff1 / df_diff0 = -19.223232
************************************************
double MAX : 1.797693e+308, anything higher is infinity
Getting positive infinity: +1.797693e+308 * 1.000001 = +inf
                         : +1.0 / +0.0 = +inf
                         : -1.0 / -0.0 = +inf
Getting negative infinity: -1.797693e+308 * 1.000001 = -inf
                         : -1.0 / +0.0 = -inf
                         : +1.0 / -0.0 = -inf
************************************************
Getting NaN (Not A Number):
+0.0f / +0.0f = -nan
-0.0f / +0.0f = -nan
+0.0f / -0.0f = -nan
-0.0f / -0.0f = -nan
+0.0  / +0.0  = -nan
-0.0  / +0.0  = -nan
+0.0  / -0.0  = -nan
-0.0  / -0.0  = -nan
+inf  + -inf  = -nan
-inf  + +inf  = -nan
************************************************

The interesting thing is that NaN behaviour is undefined in C/C++, 
so it depends on the CPU architecture. 
The result on my computer is always negative NaN.
You can run the program on yours and compare the result. 

*/


// sqrt calculates square the root of the given number.

// But we cannot square root negative number because a negative number multiplied by another negative number gives a positive number,
// and a positive number multiplied by another positive number also gives a positive number.

#include <math.h>
#include <stdio.h>

int main()
{
    int n = 100;
    double res = sqrt(100);
    printf("sqrt of %d is %.2lf", n, res); // sqrt of 100 is 10.00
    return 0;
}



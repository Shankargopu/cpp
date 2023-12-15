#include <stdio.h>

int main()
{
    float x = 123.12345677;
    double y = 123.12345677;
    printf("%f\n", x);   // 123.123459 (floats rounded upto first 6 digits of decimal. so, here 123.123459 (5 digits after rounded to 9)).
    printf("%.8f\n", x); // 123.12345886 (float can rounds upto only first 6 digits, but here we have given .8, so after 6 it will attach 2 gibbrish values)
    printf("%.2f\n", x); // 123.12  (.2 indicates before f is only want 2 digits after decimal).
    printf("%.8lf", y);   // 123.12345677
    return 0;
}

// precision (float : 6, double: generally 10 or more depends on platfrom, long double)
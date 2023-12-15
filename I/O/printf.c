#include <stdio.h>

int main()
{
    int x = 11, y = 120, z = 1998;
    printf("my birth date is %d-%d-%d\n", x, y, z); // my birth date is 11-120-1998

    for (int i = 1; i <= 10; i++)
    {
        printf("2 x %d = %d\n", i, 2*i);
    }
    return 0;
}

// format specifier : %d(int), %f(float), %c(char), %ld(long), %lld(long long), %S(string), %lf(double)S
#include <stdio.h>

int main()
{
    // dataTypes : types of data. 'c' (char), 100(int), "bcvdfd"(string), 100.34(float)

    int x1 = 10, y1 = 20, z3 = 30; // we can declare like this in one line if having same dataType.
    float a;
    a = 99.0056;
    char z = 'x';
    float y = 67.00000;
    printf("%d %d %d %f %c %.2f", x1, y1, z3, a, z, y);
    printf("\n"); // for new line
    return 0;
}
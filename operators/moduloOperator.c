#include <stdio.h>

void z(int x, int y);
int main()
{
    int x, y; // 7 9
    scanf("%d %d", &x, &y);
    int quotient = x / y;
    int remainder = x - (y * quotient);
    printf("remainder : %d\n", remainder);
    z(x, y);

    return 0;
}

void z(int x, int y)
{
    // modulo only works with pure integrers. negative intergers result depends on platform
    printf("the same thing with modulo operator : %d\n", x % y); // 7
}
// to print the adress of a variable we use &varaiable.
#include <stdio.h>

int main()
{
    // int z=10, y=20;
    // printf("%lld %lld\n", &z, &y);

    int x = 10;
    int *y = &x;  // y is a pointer which points to the address of x. y stores adress of x, to derefernce i.e, value inside that address we need use y*
    printf("%d", *y);  // prints the value of x i.e, 10
}
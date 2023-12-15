
// we can change the value of x, without reassigning value to the x.

#include <stdio.h>

int main()
{
    int x = 9;
    int *y = &x;
    // printf("%p", y); // 0061FF18 (address of x) (p is used becuase adrress prints in hexa decimal)
    // printf("%lld", y); //27583808989691672   // to have address in number.
    // printf("%d", *y); //9

    *y = 11;
    // printf("%d", x);  //11  (here we changed the value, which y pointer is pointing to. i.e, x memory addess. so, we are changing the value which present in the memory address of x. i.e, x value);

    int a = 10;
    int *b = &a;
    int *c = &a;
    int *d = &a;

    *d = 21;
    printf("%d %d %d %d", a, *b, *c, *d); // 21 21 21 21 (d changed the value that is present in the memory of a. as all the pointers are pointing towards same memory, they prints same value).

    return 0;
}
#include <stdio.h>

int main()
{
    int x = 10;

    int y = x + 9;

    // relational operators used for comparisons. x>y, x<y, x>=y, x<=y, x==y etc. returns 0(false), true(non-zero mostly 1)

    printf("%d\n", x == y); // 0 (false)

    printf("%d\n", x < y); // 1  (true)

    // assignment operator has very lower priortiy in evaluation context

    int a = x == 10; // here x==10 evaluates first which yields 1 and 1 assgined to a;

    printf("%d\n", a); //1
}
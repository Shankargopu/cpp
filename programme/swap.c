#include <stdio.h>
#include <math.h>

// using third varibale
void swap(int x, int y);
int main(void)
{
    // your code goes here
    int a, b, c, x, y;
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("%d %d\n", a, b);
    scanf("%d %d", &x, &y);
    swap(x, y);
    // printf("hello");
}

// without using third varaible
void swap(int x, int y)
{

    //  x +=  y; // gives total of two varaibles
    //  y = x - y; // assigns the (total-y == x) (so, here y=x);
    //  x -=  y; // assigns the (total-x(since y becomes x in above step) == y)(so, here x=y);
    // printf("%d %d", x, y);

    // using * and /

    x *= y;
    y = x / y;
    x /= y;
    printf("%d %d", x, y);
}
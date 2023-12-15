// unary operator : ++, --
#include <stdio.h>

int main()
{

    int x = 5;
    int y = 8;
    // printf("x post-increment : %d",x++); //x : 5
    // printf("x post-decrement: %d\n", y--); // 8
    // printf("%d",y); //7
    printf("x pre-increment: %d\n", ++x);  // x : 6
    printf("y pre-decrement : %d\n", --y); // 7

    int a = 10;
    int result = ++a * a++;
    printf("%d", result); // 132

    // return 0;
    return 0;
}

// pre-increment : ++x, --x   (first it is incremented than returned)
// post-increment : x++, x--  (first it is returned than incremented)
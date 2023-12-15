// we need to use math.h to have multiple math functions to use liek ceil, floor, sqrt etc.

#include <stdio.h>
#include <math.h>

// int main(){
//     double n=7.5;
//     int result = ceil(n);
//     printf("%d", result);
//     return 0;
// }

// handling without math

int main()
{
    double n;
    scanf("%lf", &n);
    int y = n;
    if (n - y == 0)
    {
        printf("ceil value %d\n", (int)(n));
        printf("floor value %d\n", (int)(n));
    }
    else
    {
        if (n < 0)
        {
            printf("floor value %d\n", (int)(n - 1));
            printf("ceil value %d\n", (int)(n));
        }
        else
        {
            printf("floor value %d\n", (int)(n));
            printf("ceil value %d\n", (int)(n+1));
        }
    }

    return 0;
}






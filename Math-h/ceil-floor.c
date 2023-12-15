// we need to use math.h to have multiple math functions to use liek ceil, floor.

// ceil returns the nearest integer greater than n.
//floor returns the nearest integer smaller than n.
// if n=5.2 ceil is 6, floor will be 5. if n=5 than floor will be 5 and also ceil will be 5. 
// if n=-5.2 ceil is -5, floor will be -6. if n=-5 than floor will be -5 and also ceil will be -5. 
#include <stdio.h>
#include <math.h>

int main()
{
    double n = 7.5;
    int result = ceil(n);
    printf("%d", result);
    return 0;
}

// handling without math

// int main()
// {
//     double n;
//     scanf("%lf", &n);
//     int y = n;
//     if (n - y == 0)
//     {
//         printf("ceil value %d\n", (int)(n));
//         printf("floor value %d\n", (int)(n));
//     }
//     else
//     {
//         if (n < 0)
//         {
//             printf("floor value %d\n", (int)(n - 1));
//             printf("ceil value %d\n", (int)(n));
//         }
//         else
//         {
//             printf("floor value %d\n", (int)(n + 1));
//             printf("ceil value %d\n", (int)(n));
//         }
//     }

//     return 0;
// }

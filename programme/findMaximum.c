#include <stdio.h>

// find maximum in 3 numbers given.
// int main()
// {
//     int x, y, z;
//     scanf("%d %d %d", &x, &y, &z);
//     if (x >= y && x >= z)
//     {
//         printf("%d\n", x);
//     }
//     else if (y >= x && y >= z)
//     {
//         printf("%d\n", y);
//     }
//     else
//     {
//         printf("%d\n", z);
//     }
//     return 0;
// }

// count the occurences of maximum number.
int main()
{
    int x, y, z, count = 0;
    scanf("%d %d %d", &x, &y, &z);
    printf("The minimum value is  ");
    if (x >= y && x >= z)
    {
        printf("%d\n", x);
        count++;
    }
    if (y >= x && y >= z)
    {
        printf("%d\n", y);
        count++;
    }
    if (z >= x && z >= y)
    {
        printf("%d\n", y);
        count++;
    }
    printf("total occurences of maximum number :%d\n", count);
    return 0;
}

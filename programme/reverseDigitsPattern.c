#include <stdio.h>

// int main()
// {
//     int n, count = 0, temp, divisor = 1, x;
//     scanf("%d", &n);
//     temp = n;
//     while (temp > 9)
//     {
//         temp /= 10;
//         count++;
//     }

//     while (count)
//     {
//         divisor *= 10;
//         count--;
//     }
//     // printf("%d", divisor);
//     while (divisor)
//     {
//         x = n / divisor;
//         printf("%d\n", x);
//         divisor /= 10;
//     }

//     return 0;
// }

// approach -2

int main()
{
    int n, x = 1;
    scanf("%d", &n);
    // checking if there is more than 1 digit
    while (n / x > 9)
    {
        x *= 10;
    }

    while (x)
    {
        printf("%d\n", n / x);
        x /= 10;
    }

    return 0;
}
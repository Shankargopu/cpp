

#include <stdio.h>
#include <math.h>

// int main()
// {
//     int n, i, numberOfDigits = 0, remainder, sum = 0, temp, temp2, prod;
//     scanf("%d", &n);
//     temp = n;

//     while (n > 9)
//     {
//         n = n / 10;
//         numberOfDigits++;
//     }

//     printf("No of digits %d\n", numberOfDigits);
//     // int temp2 = numberOfDigits;
//     for (i = 0; i < numberOfDigits;)
//     {
//         prod = 1;
//         remainder = temp % 10;
//         temp2 = numberOfDigits;
//         while (temp2)
//         {
//             remainder = remainder * 10;
//             temp2--;
//         }
//         sum += remainder;
//         temp = temp / 10;
//         numberOfDigits--;
//     }

//     while (temp)
//     {
//         sum += temp % 10;
//         temp = temp / 10;
//     }

//     printf("reverse of a number %d", sum);
// }

// another way
//  int main()
//  {

//     int n = 1000000, reaminder;
//     while (n)
//     {
//         reaminder = n % 10;
//         printf("%d", reaminder);
//         n = n / 10;
//     }
// }

// reverse a number using pow

// int main()
// {
//     int n, rem, sum = 0, numberOfDigits = 0, highestPowerValue = 1;
//     ;
//     scanf("%d", &n);
//     int temp = n;
//     while (n)
//     {
//         n = n / 10;
//         numberOfDigits++;
//         highestPowerValue = highestPowerValue * 10;
//     }

//     printf("number of digits %d\n", numberOfDigits);
//     highestPowerValue = highestPowerValue / 10;
//     for (int i = numberOfDigits - 1; i >= 0; i--)
//     {
//         rem = temp % 10;
//         sum = sum + rem * highestPowerValue;
//         temp = temp / 10;
//        highestPowerValue = highestPowerValue/10;
//     }

//     printf("reverse of a number %d", sum);
// }

// further optimization

int main()
{
    int N, sum = 0, rem;
    scanf("%d", &N);
    while (N)
    {
        rem = N % 10;
        sum *= 10 + rem;
        N = N / 10;
    }

    printf("revrese of a number is %d\n", sum);

    return 0;
}
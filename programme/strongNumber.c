// check wether number is strong or not

// #include <stdio.h>

// // int factorial(int number);

// int main()
// {
//     int n, remainder, sum = 0, temp;
//     scanf("%d", &n);
//     temp = n;
//     if (n == 0)
//     {
//         printf("%d is not a strong number", n);
//         return 0;
//     }
//     while (n)
//     {
//         remainder = n % 10;
//         int product = 1;
//         while (remainder)
//         {
//             product = product * remainder;
//             remainder--;
//         }
//         sum = sum + product;
//         n = n / 10;
//     }
//     printf("sum : %d\n", sum);
//     if (sum == temp)
//     {
//         printf("%d is a strong number", temp);
//     }
//     else
//     {
//         printf("%d is not a strong number", temp);
//     }
// }

// int factorial(int number)
// {
//     int product = 1;
//     while (number)
//     {
//         product = product * number;
//         number--;
//     }

//     return product;
// }

// print all the strong number in a given range (if n=1000 , i is 1 to 1000)

#include <stdio.h>

int main()
{

    int n, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        int j = i, sum = 0;
        while (j)
        {
            int remainder = j % 10;
            int product = 1;
            while (remainder)
            {

                product *= remainder;
                remainder--;
            }
            sum += product;
            j = j / 10;
        }
        if (i == sum)
        {
            printf("%d\n", i);
        }
        i++;
    }
}
// series is 1 + x + x^2/2! + x^3/3! + x^4/4!.......
// obeservation : t(i) = x^i/i! => x^0/0! = 1, x^1/1! = x => 1 + x + x^2/2! + x^3/3! + x^4/4!.......

#include <stdio.h>

// int factorial(int num);
// int main()
// {
//     int x, n, j, i;
//     float sum = 0;
//     scanf("%d %d", &x, &n);
//     for (i = 0; i <= n; i++)
//     {
//         double res = 1;
//         for (j = 1; j <= i; j++)
//         {
//             res = res * x;
//
//         }
//         double fact = 1;
//         for (j = 1; j <= i; j++)
//         {
//             fact = fact * j;
//         }

//         sum += res / fact;
//         // printf("sum %f ", sum);
//     }

//     printf("sum is %lf", sum);
//     return 0;
// }

// int factorial(int num)
// {
//     // printf("number %d ", num);
//     double result = 1;
//     for (int i = 1; i <= num; i++)
//     {
//         result = result * i;
//         // printf(" fact result %f ", result);
//     }
//     return result;
// }

// optimization

// basically in every i+1 iteration x^(i+1)  => x^i*x (so x is multiplied with previous product value).
// in every  in every i+1 iteration factorial is (i+1)! => which can also be written as i! * (i+1)  (6! => 5! * 6) (so fact mulitiplied with i+1)
int main()
{

    int n, x, i;
    scanf("%d %d", &n, &x);
    double product = 1, fact = 1, sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum += product / fact;
        product *= x;
        fact *= (i + 1);
    }

    printf("sum is %lf", sum);
}
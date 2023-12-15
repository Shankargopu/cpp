#include <stdio.h>

int main()
{
    // print first n natural numbers.
    int n, c = 1, sum = 0;
    scanf("%d", &n);
    while (c <= n)
    {
        if (c == n)
        {
            printf("%d\n", c);
        }
        else
        {
            printf("%d -> ", c);
        }

        sum += c;
        c++;
    }

    printf("Sum of %d natural number is :%d\n", n, sum);

    // sum of n natural numbers : n(n+1)/2

    printf("Sum of %d natural number with formual :%d\n", n, n*(n + 1) / 2);
    return 0;
}
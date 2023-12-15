#include <stdio.h>

int main()
{
    int n, c = 1, i = 0;
    scanf("%d", &n);
    printf("factors are : ");
    while (c <= n)
    {
        if (n % c == 0)
        {
            printf("%d ", c);
            i++;
            if (n == c)
            {
                printf("\n");
            }
        }

        c++;
    }
    if (i == 2)
    {
        printf("It is a prime number and total no of factors are : %d\n", i);
    }
    else
    {
        printf("It not a prime number and total no of factors are : %d\n", i);
    }

    return 0;
}
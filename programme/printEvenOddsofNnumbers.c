#include <stdio.h>

int main()
{
    int n, c = 1, i = 1;
    scanf("%d", &n);
    printf("first %d odd numbers\n", n);
    while (c <= n)
    {
        printf("%d ", i);
        i += 2;
        c++;
    }

    i = 2;
    c = 1;
    printf("\nfirst %d even numbers\n", n);
    while (c <= n)
    {
        printf("%d ", i);
        i += 2;
        c++;
    }

    return 0;
}
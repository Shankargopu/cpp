#include <stdio.h>

int main()
{
    long long n, product = 1, c;

    scanf("%lld", &n);
    c = n;
    while (n > 0)
    {
        product *=  n;
        n--;
    }
    printf("factorial of %lld is: %lld\n", c, product);
    return 0;
}
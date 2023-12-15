// printing special series : 1 11 111 1111 .............

#include <stdio.h>

int main()
{
    int n, i;
    long long sum = 0, res = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        printf("%lld ", res);
        sum = sum + res;
        res = res * 10 + 1;
    }
    printf("%lld", sum);
    // j will be the nth series number

    return 0;
}
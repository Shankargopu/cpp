
#include <stdio.h>

int main()
{
    int a, b, min, ans;

    scanf("%d %d", &a, &b);
    if (a > b)
        min = b;
    else
        min = a;
    int i = 1;
    while (i <= min)
    {
        if (a % i == 0 && b % i == 0)
        {
            ans = i;
        }
        i++;
    }
    printf("GCD IS %d", ans);
}
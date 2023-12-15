
#include <stdio.h>

int main()
{
    int a, b, max, ans;

    scanf("%d %d", &a, &b);
    if (a > b)
    {
        max = a;
    }

    else
    {
        max = b;
    }

    int limit = a * b;
    // printf("%d %d", limit, max);
    while (max <= limit)
    {
        // printf("%d %d", a, b);
        if (limit % a == 0 && limit % b == 0)
        {
            ans = limit;
        }
        limit--;
    }
    printf("LCM IS %d", ans);
}
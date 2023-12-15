
#include <stdio.h>

int func1(int x)
{
    return func2(x) + 5;
}

int func2(int x)
{
    return 9;
}

int func(int x)
{
    return func1(x) + 5;
}

int main()
{
    int res = func(5);
    printf("%d", res); // 19
    return 0;
}

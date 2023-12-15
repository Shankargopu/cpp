// find the lcm of a two numbers.
// break terminates the loop. so, when we get lcm here we can terminate the loop instead of going through uncerssaty loop.
// it will save time complexity and cpu performance.
#include <stdio.h>

int main()
{

    int a, b, maxm, ans=-1;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        maxm = a;
    }
    else
    {
        maxm = b;
    }

    while (maxm <= a * b)
    {
        if (maxm % a == 0 && maxm % b == 0 && ans==-1)
        {
            ans = maxm;
            break;
        }
        maxm++;
    }
    
    printf("LCM IS %d", maxm);
}



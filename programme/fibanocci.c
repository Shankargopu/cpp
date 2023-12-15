// fibanocci series : 0,1,1,2,3,5,8.... ( type series where each number is the sum of the two that precede it)

// print the nth fibanocci number.

#include <stdio.h>

int main()
{

    int prev = 0, curr = 1, n, res;
    scanf("%d", &n);
    // printf("%d %d ", prev, curr);
    if (n == 0)
    {
        printf("%d fibanocci number is 0", n);
    }

    else
    {
        for (int i = 2; i <= n; i++)
        {
            res = prev + curr;
            prev = curr;
            curr = res;
        }

        printf("%d fibanocci number is %d", n, curr);
    }

    // I starts at 2 because 0 and 1 st elements are already printed. I indicates here term number.

    return 0;
}
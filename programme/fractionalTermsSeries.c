// in a series 1,1/2,1/3,1/4,1/5......
// find the sum of n terms. ex : if(n=2) than sum of 1+1/2= 1+0.5 = 1.5
#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // convert 1/i to float becuase 1/i result will be in fractions. if we use int only than fractions will  be ignored.
        sum += (float)1 / i;
    }

    printf("sum of fractionals till %d is %.2f", n, sum);

    return 0;
}
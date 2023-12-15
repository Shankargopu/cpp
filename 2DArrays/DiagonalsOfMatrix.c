// printing and finding the sum of  diagonals.

#include <stdio.h>

int main()
{
    int n, m, i, j, sum = 0;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < m; j++)
    //     {
    //         if (i == j)
    //         {
    //             printf("%d ", a[i][j]);
    //             sum = sum + a[i][j];
    //         }
    //     }
    // }

    // instead of traversing whole matrix we can directly add 1 to i and 1 to j. So, that at each (0,0 | 1,1 | 2,2 ....,n-1,n-1) we will get RD elements.
    // for RD
    // i = 0;
    // j = 0;
    // while (i < n)
    // {
    //     printf("%d ", a[i][j]);
    //     sum = sum + a[i][j];
    //     i++;
    //     j++;
    // }

    // instead of traversing whole matrix we can directly add 1 to i and substract 1 from j. So, that at each (3,0 | 1,1 | 2,0.....) we will get LD elements.
    // for LD
    i = 0;
    j = n - 1;
    while (i < n)
    {
        printf("%d ", a[i][j]);
        sum = sum + a[i][j];
        i++;
        j--;
        }

    printf("\nThe sum is : %d", sum);

    return 0;
}
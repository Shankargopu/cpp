
// 2d array : int arr[n][m] => which indicates the n rows and m columns.

#include <stdio.h>

int main()
{
    int n, m, i, j,sum=0;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    // it reads input from row to row.

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("\n");
    }

    printf("sum is : %d", sum);

    //  i/ p : 0 1 2 3 4 5 6 7 8
        // o/p  : 0 1 2
        //        3 4 5
        //        6 7 8

    return 0;
}
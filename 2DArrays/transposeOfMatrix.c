#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N][N], i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", arr[i][j]);
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++) // traverse either upper or lower triangle. so, that elements will not be swapped twice.
        {

            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
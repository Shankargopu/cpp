#include <stdio.h>

int main()
{
    int N, M, i, j;
    scanf("%d %d", &N, &M);
    int A[N][M], B[N][M], C[N][M];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d ", &B[i][j]);
        }
    }


     for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }



     for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
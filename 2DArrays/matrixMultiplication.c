

#include <stdio.h>

int main()
{
    int N, M, O, i, j;
    scanf("%d %d %d", &N, &M,&O);
    int A[N][M];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("******************");

    int B[M][O]; // because to multiply A and B we need Ath array columns must be equal to Bth array rows.
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < O; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    int C[N][O];
    for (i = 0; i < N; i++)
    {

        for (j = 0; j < O; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < M; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("*****************\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < O; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
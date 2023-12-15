
// Lower Triangle

// #include <stdio.h>

// int main()
// {

//     int N, i, j;
//     scanf("%d %d", &N);
//     int A[N][N];
//     for (i = 0; i < N; i++)
//     {
//         for (j = 0; j < N; j++)
//         {
//             scanf("%d", &A[i][j]);
//         }
//     }

//      for (i = 0; i < N; i++)
//     {
//         for (j = 0; j <= i; j++)
//         {
//             printf("%d ", A[i][j]);
//         }
//         printf("\n");

//     }

//     return 0;
// }

// upper triangle.

#include <stdio.h>

int main()
{

    int N, i, j;
    scanf("%d", &N);
    int A[N][N];
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
            if (j < i)
            {
                printf("  ");
            }
            else
            {
                printf("%d ", A[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
// bubble sort : compare adjacent elements and swap if the left bubble is greater than  right bubble.
#include <stdio.h>

int main()
{
    int N, i, j;
    scanf("%d", &N);
    int num[N];
    for(i=0; i<N; i++){
        scanf("%d", &num[i]);
    }
    //outer loop : this loop used to run over the adjacent pairs that's why need to loop from 0 to N-1 (because we will have N-1 ajacent pairs for N elements).
    // ex : 1 2 5 6 7 (adjacent pairs : 12,25,56,67 (4 pairs for 5 elements))
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}


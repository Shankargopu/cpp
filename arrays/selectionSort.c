// selection : sorting the elements by finding min and swap with the corresponding index.

#include <stdio.h>
#include <limits.h>
int main()
{
    int N, i, j;
    scanf("%d", &N);
    int num[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < N; i++)
    {
        int min = INT_MAX, idx; // idx to maintian the current Jth index;
        for (j = i; j < N; j++)
        {

            if (num[j] < min)
            {
                min = num[j];
                idx = j;
            }
        }

        int temp = num[i];
        num[i] = min;
        num[idx] = temp;
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", num[i]);
    }
    // printf("%d", min);
}

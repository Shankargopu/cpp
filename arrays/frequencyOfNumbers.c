// find the frequency of each number of array.

#include <stdio.h>

int main()
{
    int N, i, j;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < N; j++)
    {
        int element = arr[j];
        int count = 0;
        for (i = 0; i < N; i++)
        {
            if (arr[i] == element)
            {
                count++;
            }
        }

        printf("frequency of %d : %d\n", element, count);
    }

    return 0;
}
#include <stdio.h>
#include <limits.h>
int main()
{
    int N, sum = 0, min;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = INT_MAX;
    for (int i = 0; i < N; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("Min : %d", min);
    return 0;
}
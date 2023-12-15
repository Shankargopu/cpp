#include <stdio.h>
#include <limits.h>
int main()
{
    int N, sum = 0, max;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = INT_MIN;
    for (int i = 0; i < N; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("Max : %d", max);
    return 0;
}
#include <stdio.h>

int main()
{
    int N, i;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index;
    scanf("%d", &index); // at index to be deleted element from.
    for (i = index; i < N; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
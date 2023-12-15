
// find how many times the number appears in an array.

#include <stdio.h>

int main()
{
    int N, i, count = 0;
    scanf("%d", &N);
    int arr[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int element;
    scanf("%d", &element);
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }

    printf("count : %d", count);
    return 0;
}
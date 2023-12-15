#include <stdio.h>

int main()
{

    // Take the size of an array.
    int N, i;
    scanf("%d", &N);
    // Take how many elements should be initially.
    int k;
    scanf("%d", &k);
    int arr[k];
    for (i = 0; i < k; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, index; // x is the elment to be inserted and index is the index to be inserted.
    scanf("%d %d", &x, &index);

    // first we need to right shift the elements. we need to empty the index 2 so that we can insert 6.
    // So, starting from last right till index 2 right shifting all the elements.
    // The array should be free do this operations. ie, the size should be enough.

    for (int j = k - 1; j >= index; j--)
    {

        arr[j + 1] = arr[j];
    }

    arr[index] = x;

    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}
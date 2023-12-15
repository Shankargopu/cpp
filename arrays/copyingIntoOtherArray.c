#include <stdio.h>

int main()
{
    int a[5] = {1, 3, 4, 5, 6};
    int b[5];
    // int b[5] = a[5];  // we can't do like this
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}




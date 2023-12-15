#include <stdio.h>

int main()
{
    int i = 3;
    while (i)
    {
        int j = 0;
        while (j <= 3)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i--;
    }

    return 0;
}
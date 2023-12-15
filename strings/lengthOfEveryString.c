
// take N strings and o/p length of each string.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char names[n][100];
    int i, j;
    for (i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }
    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; names[i][j] != '\0'; j++)
        {
            count++;
        }

        printf("len of %d string is %d\n", i + 1, count);
    }
    return 0;
}
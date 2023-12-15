// how can we take names of group of people? - use char array.

#include <stdio.h>

int main()
{
    // 5 names and each name size.

    // char names[5][100] = {"bhavani", "shankar", "vivek", "bharath", {'m', 'i', 'k', 'e'}};  // initialization
    char names[5][100];
    int i, j;
    // for (i = 0; i < 5; i++)
    // {
    //     // printf("%s\n", names[i]);
    //     // without %s
    //     for (j = 0; names[i][j] != '\0'; j++)
    //     {
    //         printf("%c", names[i][j]);
    //     }
    //     printf("\n");
    // }

    for (i = 0; i < 5; i++)
    {
        scanf("%s", names[i]);   //scannig
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]); //priniting
    }

    return 0;
}

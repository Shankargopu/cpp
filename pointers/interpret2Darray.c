// interpreting the 2D array.

#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // 140722744876896 140722744876900 140722744876904
            // 140722744876908 140722744876912 140722744876916
            // 140722744876920 140722744876924 140722744876928
            //  The address are contigious.
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        printf("%lld ", a[i]);

        // 140722744876896 140722744876908 140722744876920
    }

    return 0;
}

// a[0] - {1,2,3} , a[1] - {4,5,6} , a[2] - {7,8,9}
// Here, a[0] points to the adress of a[0][0]
// Here, a[1] points to the adress of a[1][0]
// Here, a[2] points to the adress of a[2][0]
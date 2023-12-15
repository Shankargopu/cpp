// n = 7
// *
// **
// ***
// ****
// *****
// ******
// *******

#include <stdio.h>

// int main()
// {
//     int n, j = 1;
//     scanf("%d", &n);
//     // j=n;
//     while (j <= n)  // loop till j<n which is (1st row to nth row)
//     {
//         int i = 1; // Here we need to loop i from 1 to j(j is current row number). so, 1 st row print 1star, 2nd print 2 stars....;
//         while (i <= j)
//         {
//             printf("*");
//             i++;
//         }
//         printf("\n");
//         j++;
//     }

//     return 0;
// }

// n=3

// 1
// *******
// 1
// 1 2
// *******
// 1
// 1 2
// 1 2 3
// *******

int main()
{

    int n, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            int k = 1;

            while (k <= j)
            {
                printf("%d ", k);
                k++;
            }
            printf("\n");
            j++;
        }
        printf("*******\n");
        i++;
    }
}
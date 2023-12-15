
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1,k;
    while (i <= n)
    {
        k = 1;
        while (k <= n)
        {
            if (k <= n - i)
            {
                printf(" ");

            }
            else
            {
                printf("* ");
            
            }
            k++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
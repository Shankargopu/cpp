#include <stdio.h>
int main(void)
{
    int N, i, j = 0;
    scanf("%d", &N);
    float bill = 0;
    for (i = 1; i <= N; i++)
    {
        if (i <= 50)
        {
            bill = 0.50 * i;
            //   printf("%f ", bill);
        }
        else if (i <= 150)
        {
            bill = (0.50 * 50) + 0.75 * (N - 50);
            printf("%f ", bill);
        }
        else if (i <= 250)
        {
            bill = (0.50 * 50) + (0.75 * 100) + 1.20 * (N - 150);
        }
        else
        {
            bill = (0.50 * 50) + (0.75 * 100) + (1.20 * 100) + 1.50 * (N - 250);
        }
    }

    bill += bill * 20 / 100;
    printf("%.2f", bill);
    return 0;
}
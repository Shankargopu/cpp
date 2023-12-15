#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int num[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    int i = 0;
    int j = N - 1;
    while (i <= j)
    {

        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
        i++;
        j--;

        // num[i] = num[i] + num[j];

        // num[j] = num[i] - num[j];

        // num[i] = num[i] - num[j];
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}
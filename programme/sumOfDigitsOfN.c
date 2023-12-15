#include <stdio.h>

int main()
{
    int n, sum = 0, temp;
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        sum += temp % 10; // we are moduling with 10 to get last digit, becuase modulus with 10 always gives last digit as reminder. dividing with 10 of given number reminder lasts in 0 to 9, which can be the last digit as 1 digit can range b/w 0 to 9.
        temp /= 10;
    }

    printf("sum of digits of %d is %d", n, sum);

    return 0;
}
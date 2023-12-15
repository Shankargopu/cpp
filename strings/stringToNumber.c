// convert string to a number.

#include <stdio.h>

int main()
{
    char s[100] = "12348";
    printf("%s\n", s);
    long long x, powerOfTen;
    int i, len = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    printf("%d\n", len);
    i = len - 1;
    powerOfTen = 1; // 10^0 = 1
    while (i >= 0)
    {
        x += (s[i] - '0') * powerOfTen;
        powerOfTen *= 10;
        i--;
    }

    printf("%lld", x);

    return 0;
}

// ascii codes '0' : 48, '1' : 49, '2' : 50..............
// now '2' - '0' = 50-48 = 2(number of equivalent of 2 char). So, to get number of equavlent of number char use 'number char' - '0'
// "12345" = 5*10^0 + 4* 10^1 + 3 * 10^2 + 2*10^3 + 1 * 10^4 = 12345.
// first find the length of the char arr, then from len-1(as index starts from 0) extract char by char, than extract number euivalent and multiply with equivalent powuer of 10.
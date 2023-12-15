#include <stdio.h>

int main()
{
    int x = 100;
    printf("%d\n", &x); // 6422300 (& prints the address of x);
    // int y;
    // scanf("%d", &y);
    // printf("value of y: %d", y);
    int a;
    char c;
    double b;
    float z;
    // printf("enter the values of a,c,b,z\n");
    // scanf("%d %c %lf %f", &a, &c, &b, &z);
    // printf("values are %d\t %c\t %lf\t %f\t", a, c, b, z); //  23    4       56.000000       78.000000
    int num1, num2;
    printf("enter the two values num1 and num2 to I will provide it's sum\nnum1 : ");

    scanf("%d", &num1);
    printf("num2 :");
    scanf("%d", &num2);

    printf("it's sum is : %d", num1 + num2);
}
#include <stdio.h>

int main()
{
    int x, y; // 4 6
    scanf("%d %d", &x, &y);
    printf("sum : %d\n", x + y);         // sum : 10
    printf("substaction : %d\n", x - y); // substaction : -2
    printf("prodcution : %d\n", x * y);  // prodcution : 24
    printf("division : %d\n", x / y);    // division : 0

    // in the division cases we get only integral part if we are operating on two intergers. ex: 6.78 gives only 6
    // to overcome this we need to use float conversion here.

    printf("division: %f\n", ((float)x) / y); // division: 0.666667  (make x as float with explicit typecasting. so, result will be float)

    printf("division: %f\n", (x * 1.0) / y); //  0.666667 (make x as float by mutlplying with 1.0 so, result will be float)

    printf("division: %f\n",   (float) (x / y)); // 0.00000, here first we are getting result of x/y to 0 and then we are copmuting that result to float and it gives 0.000000

    return 0;
}

#include <stdio.h>

int main()
{
    int x = 5.8;
    float y = 9;
    int z = (int)9.80;                 // explicit conversion
    printf("%d %f\n", x, y);           // 5  9.000000  (implicit type casting)
    printf("%d\n", z);                 // 9
    printf("%d\n", sizeof(long));      // can be 4 0r 8 bytes depends on the system ( Here 4)
    printf("%d\n", sizeof(long long)); // 8

    printf("%f\n", (float)5); // 5.000000

    int num1 = 100000000;
    int num2 = 100000000;
    int product = num1 * num2;
    printf("%d %d\n", num1, num2); // 100000000 100000000
    printf("%d\n", product);       // 1874919424 (interger overflows)

    long long product2 = (long long)num1 * num2; // first we need to type cast it to long long, so that compiler knows that result will be long long mostly or else it will consider it as int before assigning it to the varaible. becasue we are operating on ints;
    printf("%lld\n", product2);                  // 10000000000000000

    long long product3 = (long long)num1 * (int)num2; // considers the large size data type so here it is long long and result will be not overflows.

    printf("%lld", product3); // 10000000000000000

    return 0;
}

// integer overflows. int takes 4 bytes which is 32 bits (1 byte = 8 bit)
// bit is the smallest unit in size. one bit can be either 0 or 1. so it can hold either 0 to 2^1-1 ( 0 to 1).
// as integer is 4 bytes which is 32 bits, So, an 32-bit binary number can hold values from 0 to 4294967295(2^32-1).
// half part is divdied to negative (-2147483648) and half is to postive (2147483647). 
// The values are stored in circular fashion. if we give -2147483648 - 1 to int than 2147483647 will get printed. because the least 
//  value than can be holded is -2147483648 so again sbstracting -1 from it will take the max value 2147483647 becuase of it's anti-clock wise direction
// if we give 2147483647 + 1 to int than -2147483648(int_min) will be printed due to it's clock wise direction.
// to get 0 we need to traverse further (2147483647 + 1) gives -2147483648 and adding + 1 again gives -2147483647... so to get 0 we need
// add 2147483648  steps to (2147483647 + 1), so total 2147483648 + ((2147483647 + 1) = 4294967296


#include <stdio.h>
#include <limits.h>

int main()
{
    int num = 2147483647 + 1 ; //2147483647
    int zero = 4294967296;  //0
    int int_min = INT_MIN;  //-2147483648
    int int_max = INT_MAX;  // 2147483647
    printf("%d\n", zero);
    printf("%d %d\n", int_min, int_max);
    printf("%d\n", num);
    printf("%d",sizeof(int)); // 4 (bytes)
    return 0;
}
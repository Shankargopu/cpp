// if we do 1+pointer, than the result will be pointer + 1* size of pointer data type.
// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int x = 5;
    int *y = &x;
    printf("%lld %lld %lld\n", y, y - 2, y + 2); // 140728235196212 140728235196204 140728235196220
    // as integrer is 4 bytes. y-2 gives (y - 2*4) and y+2 gives (y+2*4)
    return 0;
}
// constant pointer : this pointer is not allowed to incremennt or decrement (modify)

#include <stdio.h>

int main()
{
    const int x = 4;
    // x++;  // throws error because x is constant
    int arr[6] = {1, 4, 5, 3, 2, 1}, i;
    for (i = 0; i < 6; i++)
    {
        printf("%d ", *(arr + i));   // 1 4 5 3 2 1
        // arr++; // throws error becuase the adress of arr is constant.(adress is not allowed to change because it will impatact the results and array traversing).
    }
    return 0;
}
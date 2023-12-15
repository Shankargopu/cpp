// we can also print the elements of the array using addresses.

#include <stdio.h>

int main()
{
    int a[3] = {6, 9, 3};

    printf("%lld %lld %lld", &a, &a[1], &a[2]);         // 140735525429840 140735525429844 140735525429848.(each memory increased by 4 as it is int data type and array stores data in contiguos memory locations) &a same as &a[0].
    printf("%lld %lld %lld\n", *a, *(a + 1), *(a + 2)); // 6 9 3 (* prints the variable in that memory addess).
    int num[8] = {1, 5, 6, 7, 8, 2, 3, 9};
    int i;
    for (i = 0; i < 8; i++)
    {
        // *num points to the base address of the num array.
        // *num = &num[0];
        printf("%d ", *(num + i)); // 1 5 6 7 8 2 3 9
    }

    return 0;
}
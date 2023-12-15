
#include <stdio.h>

int main()
{
    int x = 5, y = 6, z = 7;
    int *pointers[3];
    pointers[0] = &x;
    pointers[1] = &y;
    pointers[2] = &z;
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *pointers[i]); // 5 6 7
    }
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%lld ", pointers[i]); // 1932758904 1932758900 1932758896
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%lld ", *(pointers + i)); // 1932758904 1932758900 1932758896
    }
    return 0;

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%lld ", **(pointers + i)); // 5 6 7
    }
}

// pointers will point to the address of pointers[0]. *pointers will have the value stored in pointers[0], which is address of x variable here.
// pointers+1 will point to the next consecutive address of an array. i.e, a[1], so *(pointers+1) will output the value stored in a[1] which is address of y here.

// again **pointers will get the value in the address of x. *pointers -> &x, **pointers (get's the value stored in x).


#include <stdio.h>

int main()
{
    int a[3] = {1,2,3};
    int *p = a;
    printf("%d %d %d\n", *(p), *(p+1), *(p+2)); // 1 2 3
    printf("%d %d %d\n", p[0], p[1], p[2]);  // 1 2 3 
    return 0;
}


// How p[0] is printing 1, p[1] is printing 2, p[2] is printing 3 ? if P is only storing the starting address of a.
// We can also use [] with pointers.
// p[0]  will be interprted as - *[p+0] which is 1 here, 
// p[1]  will be interprted as - *[p+1] which is 2 here,...... 

// To print the array normally compiler will be treated in the fashion.
// a[3] = {1,2,3}. printf("%d", a[0]) => This line compiler interprets and  prints the a[0] as *[a+0], a[1] as *[a+1]..... which prints the respective values.


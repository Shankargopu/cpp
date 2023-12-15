// we can also print the elements of the array using addresses.

#include <stdio.h>

int main()
{
    int x=5;
    int *y = &x;
    // pointers will also be stored at some memory. to point to that memory we will use **. so, int ** can be pointed to int *, int *** can be pointed to int ** etc.,
    int **z = &y;  // pointer to pointer variable. (Here y is pointer to address of x and z is pointer to the address of y pointer)
    printf("%d %d %d\n",x,*y, **z);  // 5 5 5
    printf("%lld %lld\n",z,*z); // 140736814757416 140736814757428
    printf("%lld %lld", &y, &x); // 140736814757416 140736814757428
    return 0;
}

// x : 5 | m1  (at 'm1' x has 5 ).
// y : m1 | m2 (at 'm2' y has value of m1 (i.e address of x)).
// z : m2 | m3  (at 'm3' z has value of m2(i.e, address of y)).

// x : 5, y : 140736814757428 (adress of x)  *y=5
// z : 140736814757416 (add of y), *z(value of y => (140736814757428)=> add of x) , **z ==> value of x ==> 5.
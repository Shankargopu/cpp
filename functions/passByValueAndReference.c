// pass by value and pass by reference.

// #include<stdio.h>

// int func(int a){
//     a=6;
//     printf("a inside func : %d\n", a);
// }

// int main(){
//     int a=5;
//     func(a);
//     printf("a inside main : %d", a);
//     return 0;
// }

// o/p :    a inside func : 6
//          a inside main : 5
// Here each function has it's own copies of a. when a is passed to the func it creates it's own copy of a i.e, new memory address is created for that a and if change value than the value get changed in the memory address only. that's why "a inide func : 6" logged. and the "a inside main: 5" logged.

// main :  a : M1 | 5
// func :  a : M2 | 6


// pass by reference

// what if pass the adress of main function a and change the value of that memory?

#include <stdio.h>

int func(int *a)
{
    *a = 6;
    printf("a inside func : %d\n", *a);
}

int main()
{
    int a = 5;
    func(&a);
    printf("a inside main : %d", a);
    return 0;
}

// a inside func : 6
// a inside main : 6
// because as we passed the memory address of a, than whatever we change the value in that memory, 6 will be printed in both the functions as we are holding the same memory address of a in both functions.

// main a: m1|5
// func a : m1| 5 -> 6
// main a : m1 | 6

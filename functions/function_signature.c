

#include <stdio.h>

// if function does not return anything use void.

// void printSum(int a, int b){

//     printf("%d", a+b); //11
// }

// if function does return something use datatype of that return value

// int printSum(int a, int b)
// {

//     return a + b;
// }

// function without params.

int generateRandomInt()
{
    return 10;
}

int main()
{
    int a = 5, b = 6;
    // int res = printSum(a, b);
    // printf("%d ", res); // 11
    int x = generateRandomInt();
    printf("%d", x); //10
    return 0;
}

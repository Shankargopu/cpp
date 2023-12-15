// returning an array.

// #include <stdio.h>

// int* getFirstSevenEvens(){  // it is int* because we are here returning the arr which is base address of arr.
//     int arr[7];
//     int i, x=2;
//     for(i=0; i<7; i++){
//         arr[i] = x;
//         x = x+2;
//     }
//     return arr;
// }

// int main(){
//   int *p = getFirstSevenEvens(); // receives the base address of arr.
//   int j;
//   for(j=0; j<7; j++){
//     printf("%d ", p[j]);
//     // Segmentation fault : why?
//     // when we try to access p[i], their memory address will be not present in the memory because as soon as getFirstSevenEvens() returns the arr, the conents and memory address will be destroyed .
//     // so, it throws an error when try to access the unpresent address in memory.
//   }

//   return 0;
// }

// how to return array then?

// 1) Use static keyword while declaring the array in the function scope. ex: `static int arr[7]`, So, the array and address will not be removed from memory after function execution completes and removed from call stack.
// 2) Delcare array globally so the address of elements will not be removed as the array will not be removed once function execution completes as it is not locally created.
// 3) delcare the function in the main() function and pass that address to the function where manipulation occurs and perform the manipulation. So, even after that function execution completes the address of array will be in the memory only and there will be no problem.

#include <stdio.h>

void getFirstSevenEvens(int a[], int size)
{
    int i, x = 2;
    for (i = 0; i < size; i++)
    {
        a[i] = x;
        x = x + 2;
    }
}

int main()
{
    int arr[7];
    getFirstSevenEvens(arr, 7);
    int j;
    for (j = 0; j < 7; j++)
    {
        printf("%d ", arr[j]); // 2 4 6 8 10 12 14
    }
    return 0;
}

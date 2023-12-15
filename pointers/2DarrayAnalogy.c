// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};
    int z[3] = {7, 8, 9};
    int i, j;
    int *pointers[3];
    pointers[0] = x;
    pointers[1] = y;
    pointers[2] = z;
    // for(i=0; i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d ", pointers[i][j]);
    //         1 2 3
    //       4 5 6
    //       7 8 9
    //     }
    //     printf("\n");
    // }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%lld ", *(*(pointers + i) + j));
            // 1 2 3
            // 4 5 6
            // 7 8 9
        }
        printf("\n");
    }

    return 0;
}

// pointers[0][0] interprets as *(pointers[0]+0) by compiler. so, the pointers[0] will be points to the x[0] address and adding 0 hops will be refrenced to same address. When derefrence usingn * than we will get the value of it.(1)

// pointers[1][0] interprets as *(pointers[1]+0) by compiler. so, the pointers[1] will be points to the y[0] address and adding 0 hops will be refrenced to same address. When derefrence usingn * than we will get the value of it (4) ..... and so on

// pointers [0] is int* which is pointing to the address of x.
// pointers is int** which is pointing tho the int* i.e, base address pointers[0][0].

//  x: M1 | {1,2,3}
//  y: M2 | {4,5,6}
//  z: M3 | {7,8,9}
// pointers(int**) => M1 M2 M3
//                    A  B  C

// printf("%lld ", *(*(pointers+i)+j));

// (pointers+i) -> pointers points to the base adress of pointers array adding i to it in every iteration will add 0 in the 1st ith iteration, 1 for the 2nd ith iteration....so on.
// so it will point to the address of each pointers array rows. we need to dereference to get the adrress of memory location of x,y,z (*(pointers+i)).
// add j it to hop by the j, in each iteration j will be 0,1,2..... so it's like it traverse column wise. (*(pointers+i)+j) - will give the address of m1[0][0], m1[0][1]....
// further derefernce it  *(*(pointers+i)+j), we will get the values stored in those address which are 1,2,3,4,5,6,7,8,9 here.

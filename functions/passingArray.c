

// passing an array

// void traverse(int *p, int size)
// {
//     int i;
//     // for(i=0; i<size; i++){
//     //     printf("%d ", p[i]);  // 1 2 3 4 5  (best one to remember)
//     // }

//     // or

//     //   for(i=0; i<size; i++){
//     //     printf("%d ", *(p+i));  // 1 2 3 4 5
//     // }

//     // or

//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", *(p)); // 1 2 3 4 5
//         p++;
//     }
//     printf("\n");
//   }



// best way to pass an array


void traverse(int p[], int size){ // int p[] - p captures base address of array a here and then traverse.it is same like pass by refernce. where [] represents that p will be pointer to array. same like doing int* p and p[i] while traversing.
    int i;
    for(i=0; i<size; i++){
        printf("%d ", p[i]);
    }
    printf("\n");  // 1 2 3 4 5
}





    
int main(){
    int a[5] = {1,2,3,4,5};
    traverse(a, 5);  // passing a which is similiar to passing &a[0] as array always points to the base address of an array.
    return 0;
}


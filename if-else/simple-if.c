#include <stdio.h>

// simple-if

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n % 2 == 0)
//         printf("even number");
//     if (n % 2 != 0)
//         printf("odd number");
//     return 0;
// }

// multiple if

// int main()
// {
//     int a, n1 = 2, n2 = 3, n3 = 5, count = 0;
//     scanf("%d", &a);
//     if (a % n1 == 0)
//     {
//         count++;
//         printf("div by %d\n", n1);
//     }

//     if (a % n2 == 0)
//     {
//         count++;
//         printf("div by %d\n", n2);
//     }

//     if (a % n3 == 0)
//     {
//         count++;
//         printf("div by %d\n", n3);
//     }

//     printf("The total no of divisor's are : %d\n", count);
//     return 0;
// }

int main()
{
    int x;
    scanf("%d", &x);
    char grade;

    if (x >= 70)
    {
        grade = 'A';
    }
    if (x >= 40 && x < 70)
    {
        grade = 'B';
    }
    if (x >= 0 && x < 40)
    {
        grade = 'C';
    }

    printf("The grade of student is %c", grade);
}
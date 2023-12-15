// To find the x^y then we can use pow(x,y);

// 4^5.5

// i.e, 4^(5+0.5)

// i.e, (4^5)*(4^0.5)

// =1024*2  (since 4^0.5 = sqrt(4) = 2)

// =2048

#include <math.h>
#include <stdio.h>

int main()
{
    // alwyas perfer to use long or long long with the pow function.
    long long res = pow(4, 5.5); // 2048
    printf("%lld\n", res);
    return 0;
}

// using without pow

// int main()
// {

//     int n, x;
//     scanf("%d %d", &n, &x);
//     long long res = 1;
//     while (x)
//     {
//         res *= n;
//         x--;
//     }

//     printf("%lld\n", res);
// }
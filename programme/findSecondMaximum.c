#include <stdio.h>

int main()
{
    int x, y, z, a;
    scanf("%d %d %d %d", &x, &y, &z, &a);
    if (x >= y && x >= z && x >= a)
    {
        printf("maximum : %d\n", x);
        if (y >= z && y >= a)
        {
            printf("second maximum : %d\n", y);
            if (z >= a)
            {
                printf("Third maximum : %d\n", z);
            }
            else
            {
                printf("Third maximum : %d\n", a);
            }
        }
        else if (z >= y && z >= a)
        {
            printf("second maximum : %d\n", z);
            if (a >= y)
            {
                printf("Third maximum : %d\n", a);
            }
            else
            {
                printf("Third maximum : %d\n", a);
            }
        }
        else
        {
            printf("second maximum : %d\n", a);
            if (z >= y)
            {
                printf("Third maximum : %d\n", z);
            }
            else
            {
                printf("Third maximum : %d\n", y);
            }
        }
    }
    else if (y >= x && y >= z && y >= a)
    {
        printf("maximum : %d\n", y);
        if (x >= z && x >= a)
        {
            printf("second maximum : %d\n", x);
            if (z >= a)
            {
                printf("Third maximum : %d\n", z);
            }
            else
            {
                printf("Third maximum : %d\n", a);
            }
        }
        else if (z >= x && z >= a)
        {
            printf("second maximum : %d\n", z);
            if (x >= a)
            {
                printf("Third maximum : %d\n", x);
            }
            else
            {
                printf("Third maximum : %d\n", a);
            }
        }
        else
        {
            printf("second maximum : %d\n", a);
            if (x >= z)
            {
                printf("Third maximum : %d\n", x);
            }
            else
            {
                printf("Third maximum : %d\n", z);
            }
        }
    }
    else
    {
        printf("maximum : %d\n", z);
        if (x >= y && x >= a)
        {
            printf("second maximum : %d\n", x);
            if (y >= a)
            {
                printf("Third maximum : %d\n", y);
            }
            else
            {
                printf("Third maximum : %d\n", a);
            }
        }
        else if (y >= x && y >= a)
        {
            printf("second maximum : %d\n", y);
            if (x >= a)
            {
                printf("Third maximum : %d\n", x);
            }
            else
            {
                printf("Third maximum : %d\n", a);
            }
        }
        else
        {
            printf("second maximum : %d\n", a);
            if (x >= y)
            {
                printf("Third maximum : %d\n", x);
            }
            else
            {
                printf("Third maximum : %d\n", y);
            }
        }
    }
    return 0;
}
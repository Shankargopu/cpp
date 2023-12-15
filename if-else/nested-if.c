#include <stdio.h>

int main()
{

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x > 0)
    {
        printf("Hi\n");

        if (y > 0)
        {
            printf("Hello\n");

            if (z > 0)
            {
                printf("Hello I am from z block\n");
            }
            else
            {
                printf("Z is negative\n");
            }
        }
        printf("Bye\n");
    }
    else
    {
        printf("x is negative\n");
        if (y > z)
        {
            printf("Cow\n");
        }
        else if (x > y)
        {
            printf("Deer\n");
        }
        else
        {
            printf("Dog\n");
        }
    }
}
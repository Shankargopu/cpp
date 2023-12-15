// find the length of a string.

#include <stdio.h>

// int main()
// {
//     char word[100] = "This is awesome!!!";
//     int i, len = 0;
//     for (i = 0; word[i] != '\0'; i++)
//     {
//         len++;
//     }

//     printf("Length of the string is :%d chars", len);
//     return 0;
// }

// reverse a string

int main()
{
    char word[100] = "This is awesome!!!";
    int i, len = 0;
    for (i = 0; word[i] != '\0'; i++)
    {
        len++;
    }

    for (i = len-1; i >= 0; i--)   // i starts with len-1 because indexing starts from 1.
    {
        printf("%c", word[i]);   // prints in a revers order.
    }

    printf("\nLength of the string is :%d chars", len);
    return 0;
}
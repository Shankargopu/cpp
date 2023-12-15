// upper casing the string : we can use ascii codes to do this.

// A : 65....Z:90 , a:97....z:122. (for everyy small to bigger letter there is gap of 32).

#include <stdio.h>

int main()
{
    char word[100] = "This IS awEsomE"; // upper case it
    int i;
    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] > 96)
        { // a:97, here greater than 96 means small letter will be in the above 96.
            word[i] -= 32;
        }
    }

    printf("%s", word); // THIS IS AWESOME

    //     return 0;
}

// Array of characters.
#include <stdio.h>

int main()
{
    // different ways of initialization.
    char word[11];
    // char word[7]  = {'a','b','c','d'};
    // char word[7] ="abcdefg"   //recommended way.
    int i;
    for (i = 0; i < 11; i++) {
        scanf("%c", &word[i]);
    }

//    word[i]!='\0' : it is a null character. It is always better to terminate on null character. always mention 1 size more,so that the last 1 contains null character and we can terminate that on that condition.
    for (i = 0; word[i]!='\0'; i++) {
        printf("%c\n", word[i]);
    }
    return 0;
}
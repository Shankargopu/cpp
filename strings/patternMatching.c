#include <stdio.h>

int main()
{
    char s1[100] = "abcdefbca";
    char s2[100] = "bcad";
    // check if s1 contains s2.
    int i, j, len1 = 0, len2 = 0, count = 0,  match;
    for (i = 0; s1[i] != '\0'; i++)
    {
        len1++;
    }
    for (j = 0; s2[j] != '\0' ; j++)
    {
        len2++;
    }
    for (i = 0; i <= len1 - len2; i++)
    {
        match = 1;
        for (j = i; j < (i + len2); j++)
        {
            if (s1[j] != s2[j - i])
            {
                match = 0;
                break;
            }
        }
        if (match == 1)
        {
            break;
        }
    }
    printf("%d\n", match);
    if(match == 1){
        printf("YES");
    } else{
        printf("NO");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    char sentence1[100], sentence2[100];
    scanf("%s %s", sentence1, sentence2);
    int i;

    for (i = 0; sentence1[i] != '\0' && sentence2[i] != '\0'; i++)
    {
        if (sentence1[i] != sentence2[i])
        {
            // determines which string is greater (alphabetical wise (ascii code of characters compare)).
            // if(sentence1[i] > sentence2[i]){
            //     printf("%d", sentence1)
            // } else{
            //      printf("%d", sentence2)
            // }
            break;
        }
    }

    if (sentence1[i] == '\0' && sentence2[i] == '\0') // if both strings are reached at the end means there is no break happened in between which indicates all the characters at same indices in both character arrays are equal.
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
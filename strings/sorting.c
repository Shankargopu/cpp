

#include <stdio.h>
#include <limits.h>
int main()
{

    char word[100] = "This is awesome";
    int i, j;
    for (i = 0; word[i] != '\0'; i++)
    {
        // bubble

        for (j = 0; word[j] != '\0'; j++)
        {
            if (word[j] < word[j - 1])
            {
                char temp = word[j];
                word[j] = word[j - 1];
                word[j - 1] = temp;
            }
        }

        // insertion
        // for (j = i; word[j] < word[j - 1] && j > 0; j--)
        // {
        //     char temp = word[j];
        //     word[j] = word[j - 1];
        //     word[j - 1] = temp;
        // }

        // selection
        //     int min = INT_MAX;
        //     int idx;
        //     for (j = i; word[j] != '\0'; j++)
        //     {
        //         if (min > word[j])
        //         {
        //             min = word[j];
        //             idx = j;
        //         }
        //     }
        //     char temp = word[i];
        //     word[i] = min;
        //     word[idx] = temp;
    }
    printf("%s", word);
}
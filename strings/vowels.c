// find the no of ovwels in the string

#include <stdio.h>

int main()
{
    char name[100] = "thIs is awesOmeE!!!";
    int count = 0, i, j;
    char vowels[100] = "aeiouAEIOU";

    for (i = 0; name[i] != '\0'; i++)
    {
        // if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        // {
        //     count++;
        // }

        // better idea instead of so many condtions in if for upper case also.
        
        for (j = 0; vowels[j] != '\0'; j++)
        {
            // compare each character of name with all the characters of vowels, if it is present in the vowels array.
            if (name[i] == vowels[j])
            {
                count++;
                break;
            }
        }
    }

   
    printf("no of vowels : %d", count);
    return 0;
}
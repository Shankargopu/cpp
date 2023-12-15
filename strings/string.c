// we can use %s format specifier instead of looping the charatcer array and scanning and printing the content.

#include <stdio.h>

int main()
{
    char name[100];
    // scanf("%s", name);  // it stop scanning if there is space in between. for example : 'bhavani shankar' scans upto 'bhavani' only.
    char name2[100];
    scanf("%s %s", name, name2);
    printf("%s %s", name, name2);

    return 0;
}

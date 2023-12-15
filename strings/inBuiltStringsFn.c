#include <stdio.h>
#include <string.h> // this header file contains the inbuilt string functions.

int main()
{
    char s1[100] = "I love to code";
    int len = strlen(s1); // gives the length of the string.
    printf("%d\n", len);  // 14

    char s2[100];
    strcpy(s2, s1); // s1 will be copied to s2.

    printf("%s\n", s2); // I love to code

    char s3[100] = " in C.";
    strcat(s1, s3);  // s3 will be concatenated to s1 at the end.
    printf("%s %s\n", s1, s3); // I love to code in C. in c.

    return 0;
}
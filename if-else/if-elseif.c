#include <stdio.h>

int main()
{
    int marks;
    char grade;
    scanf("%d", &marks);
    if (marks >= 70)
    {
        grade = 'A';
    }
    else if (marks >= 40)
    {
        grade = 'B';
    }
    else if (marks >= 20)
    {
        grade = 'C';
    }
    else
    {
        grade = 'D';
    }

    printf("The grade of the student is : %c\n", grade);
    return 0;
}
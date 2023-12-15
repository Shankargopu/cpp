// Takes the 4 marks find thier sum and average.

#include <stdio.h>

int main()
{
    int marks[4], sum = 0;
    float avg;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    avg = sum / 4.0;
    printf("%d\n", sum);
    printf("%.2f\n", avg);
}

// we can initialize the array in the same line of declaration as well
// int marks[3]={35,67,89} or int marks[]={35,67,89}
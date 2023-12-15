
#include <stdio.h>
// we can define struct like this with multiple properties.

struct person
{
    char name[50];
    int age;
    char gender;
};

int main()
{
    // create struct.
    // struct person p1={"bhavanishankar", 22,'M'};
    int N, i;
    scanf("%d", &N);
    struct person p[N];

    for (i = 0; i < N; i++)
    {
        scanf("%s %d %c", p[i].name, &p[i].age, &p[i].gender);
    }
    printf("******************************\n");

    // sort the structure based on age

    for (i = 1; i < N; i++)
    {
        int j = i;
        while (j > 0 && p[j - 1].age > p[j].age)
        {
            struct person temp = p[j - 1];
            p[j - 1] = p[j];
            p[j] = temp;
            j--;
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%s %d %c\n", p[i].name, p[i].age, p[i].gender);
    }

    return 0;
}
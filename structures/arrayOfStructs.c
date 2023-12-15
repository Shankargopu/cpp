
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
    int MAX = -1, j;
    for (i = 0; i < N; i++)
    {
        if (p[i].age > MAX)
        {
            MAX = p[i].age;
            j = i;
        }
        printf("%s %d %c\n", p[i].name, p[i].age, p[i].gender);
    }
    printf("person with max age : %s", p[j].name);
    return 0;
}
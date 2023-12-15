
// we can have nested structs also

#include <stdio.h>

struct education
{
    char degree[10];
    double grade;
    char college[50];
};

struct person
{
    char name[20];
    int age;
    char gender;
    struct education edu; // we can define one struct inside another struct like this.
};

int main()
{
    struct education e = {"BTECH", 7.45, "LPU"};
    // struct person p = {"bhavani_shankar",22,"M", e};
    // or
    struct person p = {"bhavani_shankar", 22, "M", {"BTECH", 7.45, "LPU"}};
    printf("%s", p.edu.degree); // BTECH
    return 0;
}
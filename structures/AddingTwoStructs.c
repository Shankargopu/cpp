#include <stdio.h>

struct numbers
{
    int x, y;
};

int main()
{
    struct numbers n1 = {5, 6};
    struct numbers n2 = {7, 8};
    // two add these two structs can we do (n1+n2) directly? No. because by doing like this it don't know wether to add n1.x + n2.x or n1.x+n2.y etc.
    // So, we need to explictly provide say which ones to add.
    struct numbers n3 = {n1.x + n2.x, n1.y + n2.y};
    printf("%d %d", n3.x, n3.y); // 12, 14
    return 0;
}
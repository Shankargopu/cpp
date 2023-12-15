// pointers with structures.
#include<stdio.h>
struct point{
    int x, y;
};

int main(){
    struct point a = {4,7};
    struct point *p =  &a; 
    // printf("%d %d", (*p).x, (*p).y); // 4 7
    printf("%d %d", p->x, p->y); // 4 7
    // we can also use p->x it is same as using (*p).x. compiler internally converts like that.
    return 0;
}
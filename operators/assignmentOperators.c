#include <stdio.h>

int main(){
    int x = 10;
    // x=x+10
    x +=10; //20 //short cut for x=x+10; like this we have x *=10, x -=10 etc
    x -=10;
    printf("%d", x); //10
    return 0;
}
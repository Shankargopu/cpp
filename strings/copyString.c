// copy one string into another string.


#include <stdio.h>

int main(){
    char name[100] =  "bhavani shankar", nameCopy[100];;
    int i;
    for(i=0; name[i] != '\0';  i++){
        nameCopy[i] = name[i];
    }
    nameCopy[i] = '\0' ; //it is always better to append null character at end.
    printf("%s", nameCopy);
    
    return 0;
}
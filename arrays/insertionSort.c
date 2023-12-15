

#include <stdio.h>

int main(){
    int N,i,j;
    scanf("%d", &N);
    int num[N];
    for(i=0; i<N; i++){
        scanf("%d", &num[i]);
    }
    for(i=1 ; i<N; i++){
        j=i;
        while(j > 0 && num[j-1] > num[j]){
            int temp = num[j];
            num[j] = num[j-1];
            num[j-1] = temp; 
            j--;
        }
    }
    for(i=0; i<N; i++){
        printf("%d ", num[i]);
    }
}
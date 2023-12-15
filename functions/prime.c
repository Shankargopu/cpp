
#include<stdio.h>

int isPrime(int x){
    int count=0,i;
    for(i=1; i<=x; i++){
        if(x%i==0){
          count++;        
        }
    }
    if(count==2){
        return 1;
    }
    return 0;
}

int main(){
    int a,b,res;
    scanf("%d %d",&a, &b);
    res = isPrime(a);
    if(res){
        printf("%d is a prime\n", a);
    }
    
    res = isPrime(b);
     if(res){
        printf("%d is a prime\n", b);
    }
    return 0;
}





//Use functions to remove code redundancy.
//function signature : provide : return_type function_name (data_type argument)
// ex : int isPrime(int x)
// we can this isPrime whenever we want to check if the number is prime. just pass that number to this function.

#include <stdio.h>

int main(){
 int N;
 
 scanf("%d", &N);
 char name[N][20];
 int i;
 for(i=0; i<N; i++){
  scanf("%s",name[i]);   // how does it works without &, becoz  name is pointing the base address i.e, name[0], so until space appread it will scan in contious memories.   
 }
  for(i=0; i<N; i++){
  printf("%s ",name[i]);   
 }
 
 for(i=0; i<N; i++){
  printf("%lld ",name+i );   
//   140730226279152 140730226279172 140730226279192 
// each character we dclared 20, so adding each i will increment by 20 hops.
 }
 
 for(i=0; i<N; i++){
     
  printf("%s ",*(name+i) );   
 // ram krishna  vishnu
 }
 
 
 
 
 return 0;   
}

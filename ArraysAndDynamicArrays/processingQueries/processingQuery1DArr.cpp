// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main() {
     int arr[5] = {1,5,6,7,9};
     int Q;
     cin >> Q;
     for(int i=1; i<5; i++){
         arr[i] = arr[i-1] + arr[i];
     }
     while(Q--){
         int i, j, ans;
         cin >> i >> j;
         if(i == 0){
             ans = arr[j];
         } else{
             ans = arr[j] - arr[i-1];
         }
         cout << ans;
     }
     
    return 0;
}
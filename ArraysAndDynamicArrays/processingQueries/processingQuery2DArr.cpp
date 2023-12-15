#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin >> m >> n;
    vector<vector<int>>arr(m, vector<int>(n));
    int i, j;
    for(i=0; i<m;i++){
        for(j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    
    // compute row-wise prefix sum.
    for(i=0;i<m;i++){
        for(j=1;j<n;j++){
            arr[i][j] = arr[i][j-1]+arr[i][j];
        }
    }
    
    // compute col-wise prefix sum.
    for(i=1;i<m;i++){
        for(j=0;j<n;j++){
            arr[i][j] = arr[i-1][j] + arr[i][j];
        }
    }   
    int Q;
    cin >> Q;
    while(Q--){
       int i1,j1,i2,j2; //i1,j1 - starting indices of subMatrix and i2,j2 ending indices of subMatrix till we nee that sum.
    cin >> i1 >> j1 >> i2 >> j2;
    int ans = arr[i2][j2];
    if(i1 >= 1){
        ans -= arr[i1-1][j2];
    } if(j1 >= 1){
        ans -= arr[i2][j1-1];
    } if(i1 >= 1 && j1 >= 1){
        ans += arr[i1-1][j1-1];
    }
    cout << ans << " "; 
    }
    
    return 0;
}
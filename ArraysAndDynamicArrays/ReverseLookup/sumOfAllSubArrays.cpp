#include <bits/stdc++.h>
using namespace std;
int main() {
    long long x = pow(10,9) + 7;
    int n;
    cin >> n;
    vector<int>arr(n);
    int i;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    long long ans=0;
    for(i=0;i<n;i++){
        int contribution = (arr[i]%x * (i+1)%x * (n-i)%x)%x;
        ans = (ans % x + contribution % x) % x;
    }
    cout << ans;
    return 0;
}
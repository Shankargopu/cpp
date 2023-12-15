// Online C++ compiler to run C++ program online

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write C++ code here
    // find max of (p.arr[i] + q.arr[j] + k.arr[k]) where (i <= j <= k)
    long long n, p, q, r, i;
    cin >> n >> p >> q >> r;
    long long arr[n], pMax[n], sMax[n], sMaxV = LONG_LONG_MIN;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // compute prefix max
    pMax[0] = p * arr[0];
    for (i = 1; i < n; i++)
    {
        pMax[i] = max(pMax[i - 1], p * arr[i]);
    }
    // compute suffix max
    // sMax[n-1] = r*arr[n-1];
    // for(i=n-2; i>=0 ; i--){
    //     sMax[i] = max(sMax[i+1], r*arr[i]);
    // }

    long long ans = LONG_LONG_MIN;
    for (i = n - 1; i >= 0; i--)
    {
        sMaxV = max(sMaxV, r * arr[i]);
        ans = max(ans, pMax[i] + q * arr[i] + sMaxV);
    }
    cout << ans << "\n";
    return 0;
}
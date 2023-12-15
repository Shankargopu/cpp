#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x = pow(10, 9) + 7;
    long long n, m;
    cin >> n >> m;
    vector<vector<long long>> arr(n, vector<long long>(m));
    long long i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    long long ans = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            int contribution = ((((arr[i][j] % x) * ((i + 1) % x)) % x) * ((((j + 1) % x) * ((n - i) % x)) % x) * ((m - j) % x)) % x;

            ans = (ans + contribution) % x;
        }
    }
    cout << ans;
    return 0;
}
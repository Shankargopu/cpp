// naive approach (worst case tc :  O(M.N))

#include <bits/stdc++.h>
using namespace std;

int addIndicesValues(int i, int j, int arr[])
{
    int k, sum = 0;
    for (k = i; k <= j; k++)
    {
        sum += arr[k];
    }
    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int i;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0, sum = 0;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        int res = addIndicesValues(l, r, arr);
        ans = max(ans, ans + res);
    }

    cout << ans;
    return 0;
}

// using precomputation_technique (tc: M, sc:O(N))

#include <iostream>

using namespace std;

int main()
{

    int n, t;

    cin >> n >> t;
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    int sum = 0, ans = 0;

    int Psum[n];
    Psum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {

        Psum[i] = (Psum[i - 1] + arr[i]);
    }

    for (int i = 0; i < t; i++)
    {

        int l, r;

        cin >> l >> r;
        if (l == 1)
            // because in pMax array the last element will be sum of all the elements starting from 0. but in the question the original array inidices are considered from the 1, than pMax[r-1] will be the last index.
            sum = Psum[r - 1];

        else
            // to get the sum from l to r(substract from the last element of the precomputed sum array till (l-1) ). but here original array index is from 1, so just decrease 1 index here.
            sum = Psum[r - 1] - Psum[l - 2];

        ans = max(ans, ans + sum);
    }

    cout << ans;

    return 0;
}
// Q) find the sum of all the subMatrices of 2D matrix.

// (naive approach). tc: o(n^6)

#include <bits/stdc++.h>
using namespace std;
// template <int n, int m>
int getSum(int i1, int j1, int i2, int j2, vector<vector<int>> &arr)
{
    int k, l, sum = 0;
    for (k = i1; k <= i2; k++)
    {
        for (l = j1; l <= j2; l++)
        {
            sum += arr[k][l];
        }
    }
    return sum;
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k, l, ans = 0;
    for (i = 0; i < m; i++) // O(n)
    {
        for (j = 0; j < n; j++) // O(n)
        {
            for (k = i; k < m; k++) // O(n)
            {
                for (l = j; l < n; l++) // O(n)
                {
                    ans += getSum(i, j, k, l, arr); // O(n^2)
                }
            }
        }
    }

    cout << ans;

    return 0;
}

// using revserse-lookup techmique. Time complexity : O(n^2)

#include <bits/stdc++.h>
using namespace std;
// template <int n, int m>
int getSum(int i1, int j1, int i2, int j2, vector<vector<int>> &arr)
{
    int k, l, sum = 0;
    for (k = i1; k <= i2; k++)
    {
        for (l = j1; l <= j2; l++)
        {
            sum += arr[k][l];
        }
    }
    return sum;
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k, l, ans = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            ans += arr[i][j] * (i + 1) * (j + 1) * (m - i) * (n - j);
        }
    }

    cout << ans;

    return 0;
}

// t.c : O(m^2 * n^2)
#include <bits/stdc++.h>
using namespace std;
int getSum(int i1, int i2, int j1, int j2, vector<vector<int>> &arr)
{
    int NoOfCols = arr[0].size();
    int NoOfRows = arr.size();
    int sum = 0;
    for (int i = i1; i <= i2; i++)
    {
        for (int j = j1; j <= j2; j++)
        {
            if ((i >= 0 && i < NoOfRows) && (j >= 0 && j < NoOfCols))
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<int>> arr(m, vector<int>(n));
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            int i1 = i - k, i2 = i + k, j1 = j - k, j2 = j + k;
            int ans = getSum(i1, i2, j1, j2, arr);
            cout << ans << " ";
        }
        cout << "\n";
    }
}

// tc : O(mn+mn+mn)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<int>> a(m, vector<int>(n));
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // compute row wise prefix sum

    for (i = 0; i < m; i++)
    {
        for (j = 1; j < n; j++)
        {
            a[i][j] = a[i][j - 1] + a[i][j];
        }
    }

    for (i = 1; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = a[i - 1][j] + a[i][j];
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            int i1, j1, i2, j2;
            i1 = max(0, i - k);
            j1 = max(0, j - k);
            i2 = min(i + k, m - 1);
            j2 = min(j + k, n - 1);
            int ans = a[i2][j2];
            if (i1 >= 1)
            {
                ans -= a[i1 - 1][j2];
            }
            if (j1 >= 1)
            {
                ans -= a[i2][j1 - 1];
            }
            if (i1 >= 1 && j1 >= 1)
            {
                ans += a[i1 - 1][j1 - 1];
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}
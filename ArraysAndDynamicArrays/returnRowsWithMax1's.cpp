// naive approach O(n^2)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write C++ code here
    int n, m;
    cin >> n >> m;
    // vector<int>arr(n, vector<int>(m));
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> f(n, 0);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    // int ans = INT_MIN;
    for (i = 0; i < n; i++)
    {
        // int count=0;
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                //  count ++;
                f[i]++;
            }
        }
    }
    int ans = f[0], idx = -1;
    for (i = 1; i < n; i++)
    {
        if (ans < f[i])
        {
            ans = f[i];
            idx = i;
        }
    }

    cout << idx;
    return 0;
}

// using special searching concept.

int main()
{
    int n, m;
    cin >> n >> m;
    // vector<int>arr(n, vector<int>(m));
    vector<vector<int>> a(n, vector<int>(m));
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    // since the question says, we will have sorted form in rows which is 0's comes before 1's

    int i = 0, j = m - 1, ans = -1;
    while(i < n && j>=0){
        if(a[i][j] == 1){
            j--;
            ans = i;
        } else{
            i++;
        }
    }
    return ans;
}

// In naive approach t.c is O(m*n)

// search in the 2D array when the each row is sotred and each column is sorted.  tc : O(M+N)

#include <bits/stdc++.h>
using namespace std;
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
    int key;
    i = 0, j = n - 1;
    cin >> key;
    while (i < m && j >= 0)
    {
        if (arr[i][j] == key)
        {
            cout << i << " " << j;
            break;
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    if (j == -1 || i == m)
    {
        cout << -1 << " " << -1;
    }
    return 0;
}
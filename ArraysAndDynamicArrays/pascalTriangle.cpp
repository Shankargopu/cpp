// Online C compiler to run C program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                a[i][j] = 1;
                cout << a[i][j] << " ";
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                cout << a[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // declaring the vectors of size
    vector<pair<int, int>> p(n);
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // it means we are skipping the loop becuase it can't play with itself.
            if (i == j)
            {
                continue;
            }
            // if home team uniform of host team is equal to guest uniform of guest team than here host team will play match with it's guest unifrom (as both jersys can't be same in the match).
            if (p[i].first == p[j].second)
            {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxLength = INT_MIN;
    for (i = 0; i < n; i++)
    {
        int count = 0;
        int idx = i;
        while (arr[idx] != -1)
        {
            int currValue = arr[idx];
            arr[idx] = -1;
            idx = currValue;
            count++;
        }
        maxLength = max(count, maxLength);
    }

    cout << maxLength;
    return 0;
}
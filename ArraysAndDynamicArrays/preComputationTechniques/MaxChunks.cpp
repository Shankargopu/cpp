#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N], pMax[N], i;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    pMax[0] = arr[0];
    for (i = 1; i < N; i++)
    {
        pMax[i] = max(pMax[i - 1], arr[i]);
    }
    int count = 0;
    for (i = 0; i < N; i++)
    {
        if (pMax[i] == i)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
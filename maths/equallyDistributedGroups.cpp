#include <bits/stdc++.h>
using namespace std;

int findGCD(int num1, int num2)
{
    int minm = min(num1, num2);
    int maxm = max(num1, num2);
    if (minm == 0)
    {
        return maxm;
    }
    int res = maxm % minm;
    while (res != 0)
    {
        maxm = minm;
        minm = res;
        res = maxm % minm;
    }

    return minm;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        int i, count = 0;
        vector<int> freq(10001, 0);
        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int gcd = freq[arr[0]];
        for (i = 1; i < N; i++)
        {
            gcd = findGCD(gcd, freq[arr[i]]);
        }

        if (gcd != 1)
        {
            cout << "true"
                 << "\n";
        }
        else
        {
            cout << "false"
                 << "\n";
        }
    }
    return 0;
}
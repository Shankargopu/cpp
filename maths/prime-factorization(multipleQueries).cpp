#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int T;
    cin >> T;
    long long x = 1000000;
    vector<int> primes(x + 1, 1);
    vector<int> spf(x + 1, -1);

    long long i, j;
    // int num=N;
    primes[1] = 0;
    for (i = 1; i <= x; i++)
    {
        if (primes[i] == 1)
        {
            spf[i] = i;
            for (j = i; i * j <= x; j++)
            {
                if (primes[i * j] == 1)
                {
                    spf[i * j] = i;
                    primes[i * j] = 0;
                }
                        }
        }
    }
    while (T--)
    {
        // vector<int>powers(x+1,0);
        int N;
        cin >> N;
        int num = N;
        // int count=0;
        while (spf[num] != -1)
        {
            int count = 0;
            int prime = spf[num];
            // cout << prime << " ";
            while (num % prime == 0)
            {
                count++;
                num /= prime;
            }
            cout << prime << " " << count << "\n";
        }
        if (num != 1)
        {
            cout << num << " " << 1 << "\n";
        }
    }
    return 0;
}
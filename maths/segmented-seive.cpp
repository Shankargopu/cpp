// find the primes between 10^10 to 10^10+500

#include <bits/stdc++.h>
using namespace std;

vector<int> getPrimes()
{
    int i, j;
    int x = 1000000;
    vector<int> isPrime(x + 1, 1);
    isPrime[1] = isPrime[0] = 0;
    for (i = 2; i * i <= x; i++)
    {
        if (isPrime[i] == 1)
        {
            for (j = i; j * i <= x; j++)
            {
                if (isPrime[i * j] == 1)
                {
                    isPrime[i * j] = 0;
                }
            }
        }
    }
    vector<int> primes;
    for (i = 0; i <= x; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }

    return primes;
}

int main()
{
    vector<int> primes = getPrimes();
    int i, j;
    int L, R;
    cin >> L >> R;
    vector<int> isPrime((R - L) + 1, 1);
    for (i = 0; i < primes.size(); i++)
    {
        int k = ceil((L * 1.0) / primes[i]);
        // some times the k may yield 1 in that case prime will be multiplied itself so,to aovid that use max(k,2)
        for (j = max(k, 2); j * primes[i] <= R; j++)
        {
            isPrime[(primes[i] * j) - L] = 0;
        }
    }

    for (i = 0; i < isPrime.size(); i++)
    {
        if (isPrime[i])
        {
            cout << i + L << " ";
        }
    }
}

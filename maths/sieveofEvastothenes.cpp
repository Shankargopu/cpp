// find all the primes till N.   tc: O(N.sqrt(N))

// narive approach

#include <bits/stdc++.h>
using namespace std;

int isPrime(int num)
{
    int count = 0;
    for (int i = 2; i * i <= num; i++)
    { // i <= sqrt(num) is similiar to i*i <= num
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        return num;
    }
    return -1;
}

int main()
{
    int N;
    cin >> N;
    int i;
    for (i = 2; i <= N; i++)
    {
        int prime = isPrime(i);
        if (prime != -1)
        {
            cout << prime << " ";
        }
    }
}

// using seive evastothenes approach.

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> primes(N + 1, 1);
    primes[1] = 0;
    int i, j;
    for (i = 1; i <= N; i++)
    {
        if (primes[i] == 1)
        {
            for (j = i; j * i <= N; j++)
            {
                primes[i * j] = 0;
            }
        }
    }
    for (i = 1; i <= N; i++)
    {
        if (primes[i] == 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}

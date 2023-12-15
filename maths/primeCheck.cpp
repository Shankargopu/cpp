#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    int count = 0;
    if (num == 1 || num == 0)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int N;
    cin >> N;
    bool prime = isPrime(N);
    if (prime == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}




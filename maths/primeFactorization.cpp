// Online C++ compiler to run C++ program online
// finding prime factors of a Number.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i;
    int num=N;
    for (i = 2; i * i <= num; i++)
    {
        while (N % i == 0)
        {
            cout << i << " ";
            N = N / i;
        }
    }
    if (N != 1)
    {
        cout << N;
    }

    return 0;
}
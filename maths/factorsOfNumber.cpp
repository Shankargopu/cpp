// Online C++ compiler to run C++ program online
// naive approach : O(N)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i;
    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}

// t.c : O(N/2) -> The idea here is we get the factors of N till N/2 only after N/2 'N' will be the only factor OF N.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i;
    for (i = 1; i <= N / 2; i++)
    {
        if (N % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << N;
    return 0;
}

// t.c : O(sqrt(N)) -> The idea used here is the factors of N are symmetric about sqrt(N). i-> N/i
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i;
    for (i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            if (i * i == N)
            {
                cout << i << " ";
            }
            else
            {
                cout << i << " " << N / i << " ";
            }
        }
    }
    return 0;
}
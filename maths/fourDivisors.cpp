#include <bits/stdc++.h>
using namespace std;

int computeFactorsSum(int num)
{
    int sum = 0;
    int i;
    for (i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            sum += i;
            sum += num / i;
        }
    }

    return sum;
}

int findNoOfFactors(int num)
{
    int i, count = 0;
    for (i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    return 2 * count;
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
        int i;
        for (i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < N; i++)
        {
            int ans = sqrt(arr[i]);
            if (ans * ans == arr[i])
            {
                continue;
            }
            int res = findNoOfFactors(arr[i]);
            if (res == 4)
            {
                int sum = computeFactorsSum(arr[i]);
                cout << sum << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
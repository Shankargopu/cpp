#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
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
        if (arr[i] >= 0)
        {
            int idx = arr[i], val = i;
            while (idx != i)
            {
                int temp = arr[idx];
                arr[idx] = -(val + 1);
                val = idx;
                idx = temp;
            }
            arr[idx] = -(val + 1);
        }
    }
    for (i = 0; i < N; i++)
    {
        arr[i] = -1 * arr[i] - 1;
    }

    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// alternate technique (but it only work if N value is smaller let's day 10^3)
// as if we are multiplying N*i , so it may lead to overflow.
b
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
    for (i = 0; i < n; i++)
    {

        int idx = arr[i] % n, oldValue = arr[idx], newValue = i;
        arr[idx] = n * newValue + oldValue;
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = arr[i] / n;
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
// naive approach (time limit exceeded for bigger input k=11,939).  (tc : O (K.N), sc:O(1))

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    while (k--)
    {
        int temp = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// using another array time-complexity is reduced but space_complexity is O(N).  ( tc: O(N), sc: O(N));
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, i;
    cin >> n;
    int arr[n];
    int temp[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for (i = 0; i < n; i++)
    {
        temp[(k + i) % n] = arr[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

// optimal solution which can be solved in tc: O(n) and sc:O(1). ?

#include <bits/stdc++.h>
using namespace std;
void reverse(int i, int j, int arr[])
{
    while (i <= j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    reverse(0, (n - k - 1), arr);
    reverse((n - k), n - 1, arr);
    reverse(0, n - 1, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

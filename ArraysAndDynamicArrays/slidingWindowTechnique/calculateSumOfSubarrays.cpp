

// add elements of given k sub-array and print them

// tc : O((n-k+1).k), in worst case if k=n/2 than O(n/2 * n/2) which is almost O(n^2);

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for (i = 0; i < n - k + 1; i++)
    {
        int sum = 0;
        for (j = i; j < k + i; j++)
        {
            sum += arr[j];
        }
        cout << sum << " ";
    }

    return 0;
}

//

// Online C++ compiler to run C++ program online

// tc : O(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int sum = 0;
    for (i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    for (j = k; j < n; j++)
    {
        cout << sum << " ";
        sum += arr[j];
        sum -= arr[j - k];
    }

    cout << sum << " ";

    return 0;
}


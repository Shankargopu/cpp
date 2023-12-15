// to find the sum of sub-arry (from l to r)

// Online C++ compiler to run C++ program online
// Time complexity in worst case (assuming l is 0 and r is n-1) for Q pairs:  O(Q.N)
#include <bits/stdc++.h>
using namespace std;

int sumOfSubArray(int arr[], int i, int j)
{
    int k, sum = 0;
    for (k = i; k <= j; k++)
    {
        sum += arr[k];
    }
    return sum;
}

int main()
{
    // Write C++ code here
    int Q;
    cin >> Q;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        int sum = sumOfSubArray(arr, l, r);
        cout << sum << "\n";
    }

    return 0;
}

// how can we reduce the time complexity? :

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write C++ code here
    int Q;
    cin >> Q;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 1; i < 10; i++)
    { // takes O(n)
        arr[i] += arr[i - 1];
    }

    while (Q--)
    {
        int l, r, sum;
        cin >> l >> r;
        if (l == 0)
        {
            sum = arr[r]; // takes O(1)
        }
        else
        {
            sum = arr[r] - arr[l - 1]; // takes O(1)
        }
        cout << sum << " ";
    }

    return 0;
}

// so, in this code the total time complexity will be : O(Q + N)  which is way better than (Q.N)
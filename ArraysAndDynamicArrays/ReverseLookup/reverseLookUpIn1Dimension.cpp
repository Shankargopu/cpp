// Q) find the sum of all the subarrays of an array. ex: [1,2,3] => subarrays : [1],[1,2],[1,2,3],[2],[2,3],[3] = sum => 20

// Brute force approach. Time complexity : O(N^3), space complexity : O(1)
#include <iostream>
using namespace std;
int getSum(int i, int j, int arr[])
{
    //   cout << i << " " << j <<"\n";
    int sum = 0;
    for (int k = i; k <= j; k++)
    {
        sum += arr[k];
    }
    return sum;
}

int main()
{
    int arr[3] = {1, 2, 3};
    int i, j;
    int ans = 0;
    for (i = 0; i < 3; i++)
    { // O(N)
        for (j = i; j < 3; j++)
        {                             // O(N)
            ans += getSum(i, j, arr); // O(N)
        }
    }
    cout << ans;
    return 0;
}

// using preComputation array : time complexity : O(N^2), space Complexity : O(N)

#include <iostream>
using namespace std;
int getSum(int i, int j, int arr[])
{
    //   cout << i << " " << j <<"\n";
    int sum = arr[j] - arr[i - 1];
    return sum;
}

int main()
{
    int arr[3] = {1, 2, 3};
    //[1,3,6]
    int preArr[3];
    int i, j;
    preArr[0] = arr[0];
    for (i = 1; i < 3; i++)
    {
        preArr[i] = preArr[i - 1] + arr[i];
    }

    int ans = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            if (i == 0)
            {
                ans += preArr[j];
            }
            else
            {
                ans += getSum(i, j, preArr);
            }
        }
    }
    cout << ans;
    return 0;
}

//  by modifying existing logic without using precomputation technique we can solve this by using time:O(N^2) and space:O(1)

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    int ans = 0;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        int sum = 0;
        for (j = i; j < 3; j++)
        {
            sum += arr[j];
            ans += sum;
        }
    }
    cout << ans;
    return 0;
}

// Reverse Lookup technique : adding the current ith element contribution of all sub arrays to the sum.  tc: O(N), sc:O(1)

#include <iostream>
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

    int ans = 0;
    for (i = 0; i < n; i++)
    {
        // Here we are calculating the contribution of each element in all the subarrays.(i+1) indicates all the elements before the current element and (n-1) indicates all the elements that are next to the current element.
        int contribution = (i + 1) * (n - i) * arr[i];
        ans += contribution;
    }
    cout << ans;
    return 0;
}
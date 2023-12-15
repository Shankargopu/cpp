// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// suffix max : find the max from given index to N.

// optimization : can we reduce time complexity?

int main()
{
    int Q;
    cin >> Q;
    int arr[10] = {12, 2, 33, 24, 65, 16, 97, 8, 11, 10};
    int suffixMax[10];
    while (Q--)
    {
        int idx;
        cin >> idx;
        suffixMax[9] = arr[9]; // since for one element max will always be that element.
        for (int i = 8; i >= 0; i--)
        {
            suffixMax[i] = max(suffixMax[i + 1], arr[i]); // O(N)
        }

        cout << suffixMax[idx] << "\n"; // O(1)
    }

    // total time complexity is O(Q + N).
    return 0;
}

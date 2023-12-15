// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

//  find max ele till the given_index.

// int main() {
//     // Write C++ code here
//     int Q;
//     cin >> Q;
//     int arr[10] = {12,2,33,24,65,16,97,8,119,110};
//     while(Q--){
//         int idx;
//         cin >> idx;
//         int max = INT_MIN;
//         for(int i=0; i<=idx; i++){  // if idx is n-1 every time in the worstcase than time complexity is O(N). for total Q idx it will be O(Q.N)
//             if(arr[i] > max){
//                 max = arr[i];
//             }
//         }
//         cout << max << "\n";
//     }

//     return 0;

// }

// optimization : can we reduce time complexity? O(Q.N) => O(Q + N)

int main()
{
    int Q;
    cin >> Q;
    int arr[10] = {12, 2, 33, 24, 65, 16, 97, 8, 119, 110};
    int prefixMax[10];
    while (Q--)
    {
        int idx;
        cin >> idx;
        prefixMax[0] = arr[0]; // since for one element max will always be that element.
        for (int i = 1; i < 10; i++)
        {
            prefixMax[i] = max(prefixMax[i - 1], arr[i]); // O(N)
        }
        cout << prefixMax[idx] << "\n"; // O(1)
    }

    // total time complexity is O(Q + N).
    return 0;
}

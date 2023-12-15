// Online C++ compiler to run C++ program online
// using vector. we can also do using arrays if we reverse each row with loops
#include <bits/stdc++.h>
using namespace std;
void reverse(int i, int n, vector<vector<int>> &arr)
{
    int k = 0, j = n - 1;
    while (k <= j)
    {

        int temp = arr[i][j];
        arr[i][j] = arr[i][k];
        arr[i][k] = temp;
        k++;
        j--;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int value;
            cin >> value;
            arr[i].push_back(value);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout << "\n";

    for (i = 0; i < n; i++)
    {
        reverse(i, n, arr);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    // reverse each row individually

    // for(int i=0;i<n;i++){

    //     for(int j=0;j<ceil(n/2.0);j++){

    //         int temp = arr[i][j];

    //         arr[i][j]= arr[i][n-j-1];

    //         arr[i][n-j-1]=temp;

    //     }

    // }

    return 0;
}
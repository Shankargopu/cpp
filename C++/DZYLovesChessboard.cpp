// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Write C++ code here
    int n, m, i, j;
    cin >> n >> m;
    // to take n number of strings we declare the vector size as n.
    vector<string> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i]; // take n strings
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == '.')
            {
                if ((i + j) % 2 == 0)
                {
                    arr[i][j] = 'W';
                }
                else
                {
                    arr[i][j] = 'B';
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {

        cout << arr[i] << "\n";
    }

    return 0;
}
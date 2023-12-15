#include <iostream>

using namespace std;

int main()
{

    int m, n;

    cin >> m >> n;

    int a[m][n];

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {

            cin >> a[i][j];
        }
    }

    int left = 0, right = m - 1;

    int top = 0, bottom = n - 1;

    while (top <= bottom and left <= right)
    {

        for (int i = left; i <= right; i++)
        {

            cout << a[top][i] << " ";
        }

        top++;

        for (int i = top; i <= bottom; i++)
        {

            cout << a[i][right] << " ";
        }

        right--;

        if (top <= bottom)
        {

            for (int i = right; i >= left; i--)
            {

                cout << a[bottom][i] << " ";
            }

            bottom--;
        }

        if (left <= right)
        {

            for (int i = bottom; i >= top; i--)
            {

                cout << a[i][left] << " ";
            }

            left++;
        }
    }

    return 0;
}
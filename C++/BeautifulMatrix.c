// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // defining 2-d vectors which will be having 6 rows and 6 cols.
    // mat is the vector name size of (6,6).
    vector<vector<int>> mat(6, vector<int>(6));

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> mat[i][j];
        }
    }

    int rowth_index = 0, column_index = 0, count = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (mat[i][j] == 1)
            {
                rowth_index = i;
                column_index = j;
            }
        }
    }
    //abs is is similiar to | | . i.e, any - values will be converted to +. (-2 will be converted to 2).
    count = abs(rowth_index - 3) + abs(column_index - 3);
    cout << count;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// let arr[10] = {1,2,0,3,4,6,7,5,8,9};

bool canBeChuncked(int arr[], int i, int j)
{
    int k, count = 0;
    for (k = i; k <= j; k++)
    {
        if (arr[k] >= i && arr[k] <= j)
        {
            count++;
        }
    }
    if (count == (j - i) + 1)
    {
        return true;
    }
    return false;
}

int main()
{

    int N;
    cin >> N;
    int arr[N], amt = 0;
    int i;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    i = 0;
    while (i < N)
    {
        int j;
        for (j = i; j < N; j++)
        {
            if (canBeChuncked(arr, i, j))
            {
                break;
            }
        }
        i = j + 1;
        amt++;
    }

    cout << amt;
}
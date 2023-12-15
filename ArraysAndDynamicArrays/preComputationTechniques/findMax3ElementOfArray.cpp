// Online C++ compiler to run C++ program online

// how to find max 3 elements from array?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write C++ code here
    int arr[10] = {1, 5, 7, 8, 9, 2, 3, 4, 5, 67};
    int first, second, third;
    first = second = third = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }

    cout << first << " " << second << " " << third;
    return 0;
}
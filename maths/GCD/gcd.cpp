// niave approach.   t.c : O(minNumber)

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y;

    int minNumber = min(x, y); // since GCD can't exceed the min element.
    for (int i = minNumber; i >= 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            cout << i;
            break;
        }
    }
    return 0;
}

// eculid's GCD . t.c : O(log 2 maxNumber)

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int minNumber = min(x, y); // since GCD can't exceed the min element.
    int maxNumber = max(x, y);
    if (minNumber == 0)
    {
        cout << maxNumber;
        return 0;
    }
    int res = maxNumber % minNumber;
    while (res != 0)
    {
        maxNumber = minNumber;
        minNumber = res;
        res = maxNumber % minNumber;
    }
    cout << minNumber << " ";
    return 0;
}
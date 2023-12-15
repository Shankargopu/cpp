// naive approach : if two numbers are large numbers let's say 10^5 and 10^6 than our loop can go from 10^5 to 10^11 in worst case and which
// is very cost.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int maxm = max(x, y);
    int minm = min(x, y);
    int i;
    for (i = 1; i <= x * y; i++)
    {
        int res = maxm * i;
        if (res % minm == 0)
        {
            cout << res;
            break;
        }
    }
}

// lcm(a,b) * gcd(a,b) = a*b;
// lcm(a,b) = a*b/gcd(a,b);

// so, we can use this mechanism t find LCM.

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int findGCD(int num1, int num2)
{
    int maxm = max(num1, num2);
    int minm = min(num1, num2);
    int i;
    int res = maxm % minm;
    while (res != 0)
    {
        maxm = minm;
        minm = res;
        res = maxm % minm;
    }
    return minm;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int gcd = findGCD(x, y);
    int lcm = x * y / gcd;
    cout << lcm;
}

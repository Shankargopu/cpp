// Online C++ compiler to run C++ program online

// if any subsquence of array gcd is 1 than return 1 or else return 0
#include <bits/stdc++.h>
using namespace std;

int findGCD(int num1, int num2)
{
    // using eculid's method to find GCD.
    int maxm = max(num1, num2);
    int minm = min(num1, num2);
    if (minm == 0)
        return maxm;
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
    int n;
    cin >> n;

    vector<int> nums(n);
    int gcd = 1;

    // find gcd of all the numbers of array.
    // GCD of (a0,a1,a2,a3) => GCD(a0,a1) => c01 => GCD(C01,a2) => c012 =>GCD(c012,a3) => c0123
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    if (n == 1)
    {
        gcd = nums[0];
        cout << gcd << " ";
        return 0;
    }
    gcd = findGCD(nums[0], nums[1]);
    for (i = 2; i < n; i++)
    {
        gcd = findGCD(gcd, nums[i]);
        if (gcd == 1)
        {
            break;
        }
    }
    if (gcd == 1)
    {
        cout << gcd;
    }
    else
    {
        cout << 0;
    }
}
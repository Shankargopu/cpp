// Q : find the count of the numbers that are divisible by either A or B or A*B from 1 to N.

#include <bits/stdc++.h>
using namespace std;

int findGCD(int num1, int num2)
{
    int minm = min(num1, num2);
    int maxm = max(num1, num2);
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

    int N, A, B;
    cin >> N >> A >> B;
    int gcd = findGCD(A, B);
    int lcm = A * B / gcd;
    int res = N / A + N / B - N / lcm;
    cout << res;
}
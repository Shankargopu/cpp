// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p1 = {2, 3};
    cout << p1.first << " " << p1.second << "\n"; // 2 3
    p1.first = 4;                                 // updates to 4
    cout << p1.first;                             // 4

    // nested pairs

    pair<pair<int, int>, string> p2 = {{4, 5}, "abc"};

    cout << p2.second; // abc

    cout << p2.first.first << " " << p2.first.second; // 4 5

    // with make-pair

    pair<int, int> p3 = make_pair(8, 9);
    cout << p3.first; // 8

    return 0;
}
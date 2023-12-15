// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    // map which consists of string as key and string also value.
    unordered_map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        // take servers name and ip.
        cin >> name >> ip;
        // appends ; at the end of the ip. because later in commands ; will  be in the commands ip.
        ip += ";";
        // ip will be key and name will be it's value (ip's are unique).
        mp[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string name, ip;
        // take commands name and ip.
        cin >> name >> ip;
        // print in the mentioned formatt . block 192.168.0.1; #replica
        cout << name << " " << ip << " "
             << "#" << mp[ip] << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool checkIfPremutation(vector<int> &f1, vector<int> &f2)
{
    int i;
    for (i = 0; i < 26; i++)
    {
        if (f1[i] != f2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        vector<int> frequency1(26, 0);
        vector<int> frequency2(26, 0);
        string s1, s2;
        cin >> s1 >> s2;
        int i;
        // calculate frequncy of all the characters in s1.
        for (i = 0; i < s1.length(); i++)
        {
            frequency1[s1[i] - 'a']++;
        }
        int k = s1.length();
        int count = 0;
        bool flag = false;
        // for first window in s2.
        for (i = 0; i < k; i++)
        {
            frequency2[s2[i] - 'a']++;
            if (i + 1 == k)
            {
                if (checkIfPremutation(frequency1, frequency2))
                {
                    flag = true;
                    cout << "True"
                         << "\n";
                }
            }
        }
        // for reamining windows of string s2.
        for (i = k; i < s2.length(); i++)
        {
            frequency2[s2[i] - 'a']++;
            frequency2[s2[i - k] - 'a']--;
            if (checkIfPremutation(frequency1, frequency2))
            {
                flag = true;
                cout << "True"
                     << "\n";
                break;
            }
        }
        if (flag == false)
        {
            cout << "False"
                 << "\n";
        }
    }
}
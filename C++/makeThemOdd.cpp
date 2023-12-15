// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int val, n, count = 0;
        cin >> n;
        set<int> st;
        // insert all the values in the set.
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            st.insert(val);
        }

        while (!st.empty())
        {
            int maxValue = *st.rbegin(); // since rbegin() returns pointer which points to the last element and in the set the elements will be stored in the ascending order, so, The last value will be max.
            st.erase(maxValue);          // erase the max Value, we will be erasing all the values since we are here emptying the set.
            // if value even then divide by 2 and insert that value.
            if (maxValue % 2 == 0)
            {
                maxValue /= 2;
                st.insert(maxValue);
                count++;
            }
        }
        // output the min no of operations required to make them odd.
        cout << count << "\n";
    }
    return 0;
}
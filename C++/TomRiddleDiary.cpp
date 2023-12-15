// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // vector<string> names(n);
    // for(int i=0; i<n;i++){
    //     cin >> names[i];
    // }

    // for(int i=0; i<n;i++){
    //     int count=0;
    //     for(int j=0; j<i; j++){
    //         if(names[j] == names[i]){
    //           count++;
    //         }
    //     }
    //     if(count > 0){
    //         cout<<"YES"<<"\n";
    //     } else{
    //         cout<<"NO"<<"\n";
    //     }
    // }

    // with unordered sets

    int n;
    cin >> n;
    unordered_set<string> us;
    string name;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        if (us.find(name) != us.end())
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
            us.insert(name);
        }
    }

    return 0;
}
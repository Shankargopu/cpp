
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> arr(N + 1);
    int i;
    for (i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans(N + 1);
    for (i = 1; i <= N; i++)
    {
        ans[arr[i]] = i;
    }
    for (i = 1; i <= N; i++)
    {
        cout << ans[i] << " ";
    }
}
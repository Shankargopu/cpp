
// naive approach : O((n-k+1).k), if k=n/2 than tc : O(n^2)

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    int i,j;
    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    int k, x;
    cin >>k>>x;
    for(i=0; i<n-k+1;i++){
         int count=0;
        for(j=i; j<k+i;j++){
            if(arr[j] == x){
                count++;
            }
    }
    cout << count << " ";
    
    }
    
    return 0;
}





// optimim solution tc:o(n)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k, x;
    cin >> k >> x;
    int count = 0;
    for (i = 0; i < k; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    for (i = k; i < n; i++)
    {
        cout << count << " ";
        if (arr[i] == x)
        {
            count++;
        }
        if (arr[i - k] == x)
        {
            count--;
        }
    }
    cout << count << " ";

    return 0;
}
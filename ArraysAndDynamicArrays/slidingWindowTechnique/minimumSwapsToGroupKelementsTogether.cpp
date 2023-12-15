// naive approach O(n^2)

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
    int k;
    cin >> k;
    int legalElementsCount = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            legalElementsCount++;
        }
    }
    cout << legalElementsCount << " ";

    int maxLegalElementsCount = INT_MIN;
    for (i = 0; i < n - legalElementsCount + 1; i++)
    {
        int count = 0;
        for (j = i; j < i + legalElementsCount; j++)
        {
            if (arr[j] <= k)
            {
                count++;
            }
        }
        maxLegalElementsCount = max(count, maxLegalElementsCount);
    }

    cout << legalElementsCount - maxLegalElementsCount;

    return 0;
}


// optimal soln O(n)

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
    int k;
    cin>>k;
    int legalElementsCount=0;
    for(i=0; i<n;i++){
        if(arr[i] <= k){
            legalElementsCount++;
        }
    }
  
    int maxLegalElementsCount=INT_MIN, count=0;
    for(i=0; i<legalElementsCount ; i++){
        if(arr[i] <= k){
            count++;
        }
    }
    for(i=legalElementsCount; i<n; i++){
       maxLegalElementsCount = max(count, maxLegalElementsCount);
        if(arr[i] <= k){
            count++;
        } if(arr[i-legalElementsCount] <= k){
            count--;
        }
        
    }
    // for last window size
     maxLegalElementsCount = max(count, maxLegalElementsCount); 
    
    
    cout << legalElementsCount -  maxLegalElementsCount;
    
    
    
    
    return 0;
}
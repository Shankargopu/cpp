
#include <iostream>
using namespace std;

int main()
{

    int N, sumX=0, sumY=0, sumZ=0,i;
    cin>>N;
    int x,y,z;
    for(i=0;i<N; i++){
        cin >> x >> y >> z;
        sumX += x; 
        sumY +=  y; 
        sumZ += z;
    }
    
    if(sumX == 0 && sumY == 0 && sumZ == 0){
        cout << "YES";
    } else{
        cout << "NO";
    }
}
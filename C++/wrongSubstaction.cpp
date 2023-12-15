
#include <iostream>
using namespace std;

int main()
{

    int N, K;
    cin >> N >> K;
    while (K--)
    {
        if (N % 10 != 0)
        {
            N--;
        }
        else
        {
            N /= 10;
        }
    }
    cout << N;
}
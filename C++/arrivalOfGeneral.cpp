
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int N;
    cin >> N;
    int i = 0;
    vector<int> soldiers(N);
    for (i = 0; i < N; i++)
    {
        cin >> soldiers[i];
    }
    int maxm = soldiers[0], minm = soldiers[0], max_index = 0, min_index = 0, count = 0;
    for (i = 0; i < N; i++)
    {

        if (maxm < soldiers[i])
        {
            maxm = soldiers[i];
            max_index = i;
        }
        if (minm > soldiers[i])
        {
            minm = soldiers[i];
        }
    }

    for (i = max_index; i >= 1; i--)
    {
        swap(soldiers[i], soldiers[i - 1]);
        count++;
    }

    for (i = 0; i < N; i++)
    {

        if (minm == soldiers[i])
        {
            min_index = i;
        }
    }

    for (i = min_index; i < N - 1; i++)
    {
        swap(soldiers[i], soldiers[i + 1]);
        count++;
    }

    cout << count << " ";
}
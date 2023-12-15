
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

        maxm = max(maxm, soldiers[i]);
        minm = min(minm, soldiers[i]);
    }

    for (i = 0; i < N; i++)
    {

        if (soldiers[i] == maxm)
        {
            max_index = i;
            break;
        }
    }
    count += max_index;
    for (i = N - 1; i >= 0; i--)
    {

        if (soldiers[i] == minm)
        {
            min_index = i;
            break;
        }
    }

    if (max_index > min_index)
    {
        min_index++;
    }

    count += N - 1 - min_index;
    cout << count << " ";
}
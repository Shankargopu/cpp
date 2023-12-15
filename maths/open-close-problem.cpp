// if all the N doors are close initially find the number of doors opened after all the rounds completed.

// rules : for ith-number the multiples of ith door will be toggled. i.e, if it is open than it will be closed or vice versa.

// naive approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> doors(N + 1, 0);
    int i;
    for (i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j++)
        {
            if (j % i == 0)
            {
                if (doors[j] == 0)
                {
                    doors[j] = 1;
                }
                else
                {
                    doors[j] = 0;
                }
                // cout << doors[j] << " ";
            }
        }
        cout << "\n";
    }
    int count = 0;
    for (i = 0; i < N; i++)
    {
        if (doors[i] == 1)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}

// using the odd/even factors appraoch

// Online C++ compiler to run C++ program online

// The door will toggle and become open after 1st time and again close and again open 3rd time...
// so for odd number of factors of a number it opens.
// As we seen previously in factors of a number section. If N is perfect square it will have odd number of factors. -> 2x + 1.

// So, for the numbers who are perfect squares present less than N than those will be opened.
// The prefect squares till N will be just the sqrt(N).
// for ex : 16 -> perfect squares are : 1,4,9,16 -> 4 numbers which is sqrt(16)
// for 120 -> perfect squares are : 1,4,9,16,25,36,49,64,81,100 -> 10 numbers. which is sqrt(120) is somewhere in between 10 to 11 and the
// integral part is 10 only.

// So,sqrt of that N will be the answer.

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int x = sqrt(N);
    cout << x;
}

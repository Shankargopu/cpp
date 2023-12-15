// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    // Write C++ code here
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    int i;
    while (t--)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(&s[i], &s[i + 1]);
                i++;
            }
        }
    }

    cout << s << "\n";

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> a = {2, 3, 4};
    vector<int>::iterator it1; // since a.begin() returns the vector<int>::iterator using that data type.

    it1 = a.begin();
    for (it1; it1 != a.end(); it1++)
    {
        cout << *it1 << " "; //(2,3,4)
    }
    cout << "\n";

    auto it = a.rbegin(); // auto keyword detects the return dataType of which it assigned and automaticall assigns that to the variable.

    // starts from last element
    for (it; it != a.rend(); it++)
    {
        cout << *it << " "; // 4 3 2
    }
}

// end() :  points to the last element imaginary(i.e it points to the element which is after the last element);
// begin() : points to the starting element.
// rbegin() : which is also reverse=begin (points to the last element of the vector).
// rend() : which is also reverse-end (points to the elements address which is present before the first element of the vector).
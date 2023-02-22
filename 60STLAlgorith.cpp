#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(1);

    cout << binary_search(v.begin(), v.end(), 5) << endl;
    cout << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    int a = 9, b = 10;
    cout << "max is " << max(a, b) << endl;
    cout << "min is " << min(a, b) << endl;

    swap(a, b);
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "String " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
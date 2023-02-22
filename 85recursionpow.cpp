#include <iostream>
using namespace std;

int pow(int n)
{
    // basecase
    if (n == 0)
        return 1;
    // recursive relation
    return 2 * pow(n - 1);
}
/*
n = 4
2 * pow(3)
2 * 2 * pow(2)
2 * 2 * 2 * pow(1)
2 * 2 * 2 * 2 * pow(0)
2 * 2 * 2 * 2 * 1
*/
int main()
{
    int n;
    cin >> n;

    cout << "The 2 power of " << n << " is " << pow(n) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // int i = 1;

    // while (i <= n)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // int i = 1;
    // int sum = 0;

    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }

    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
            i = i + 2;
    }
    cout << "The value of sum is " << sum << endl;
    return 0;
}
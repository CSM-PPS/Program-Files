#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    /*
    for(int i = 1;i<=n; i++)
    {
        cout<<i<<" ";
    }
    */
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;

    return 0;
}
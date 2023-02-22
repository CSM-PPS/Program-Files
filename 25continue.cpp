#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    // for(int i=0; i<=5;i++){
    //     cout<<i<<" ";  using increament operator two times skips a number
    //     i++;
    // }

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 != 0)
        {
            cout << i << " ";
            continue;
        }
    }

    return 0;
}
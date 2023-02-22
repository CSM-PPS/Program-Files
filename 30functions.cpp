#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int x, y;
    cin >> x >> y;
    int pow = power(x, y);
    cout << pow << endl;
    return 0;
}
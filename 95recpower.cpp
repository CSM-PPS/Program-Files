#include <iostream>
using namespace std;

int power(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }
    if (m == 1)
    {
        return n;
    }
    /*
    int ans = power(n, m / 2);

    if (m % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        n *ans *ans;
    }
    */
   return n * power(n, m-1);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int ans = power(n, m);
    cout << ans << endl;
    return 0;
}
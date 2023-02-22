#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}
// 4* fact(3)
// 4 * 3 * fact(2)
// 4 * 3 * 2 fact(1)
//4 * 3 * 2 * 1===24
int main()
{
    /*
    int n;
    cin>>n;
    int ans = 1;

    while(n>0)  factorial without recursion
    {
        ans = ans * n;
        n--;
    }
    cout<<ans<<endl;
    */
    int n;
    cin>>n;
    cout << "The factorial of " << n << "is " << factorial(n)<<endl;
    return 0;
}
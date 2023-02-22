#include <iostream>
using namespace std;

// int ap(int n){
//     return ((3*n) + 7);
// }

int fib(int n)
{
    if(n<=3){
        return 1;
    }
    if(n==1){
        return 0;
    }
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    cin>>n;

    cout<<fib(n);
    return 0;
}
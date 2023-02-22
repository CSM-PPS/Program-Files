#include <iostream>
using namespace std;
// 1 -> prime
// 0 -> not prime

bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            return 1;
        }
        else
            return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    if (isprime(n))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }
    return 0;
}
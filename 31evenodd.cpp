#include <iostream>
using namespace std;

bool iseven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    { 
        return 1;
    }
}
int main()
{
    int num;
    cin>>num;

    if (iseven(num))
    {
        cout << "The number is even" << endl;
    }
    else
    {
        cout << "The number is odd" << endl;
    }
    return 0;
}
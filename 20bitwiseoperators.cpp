#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a & b :" << (a & b) << endl;
    cout << "a | b :" << (a | b) << endl;
    cout << " ~a :" << (~a) << endl;
    cout << "a ^ b :" << (a ^ b) << endl;

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    int i = 11;
    cout<<i++<<endl;
    //11 i = 12;
    cout<<++i<<endl;
    //13  i = 13
    cout<<i--<<endl;
    //13  i = 12;
    cout<<--i<<endl;
    //11 i = 11;

    

    return 0;
}
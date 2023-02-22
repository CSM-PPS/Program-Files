#include <iostream>
using namespace std;

int main()
{
    char ch[6] = "abcde";
    cout << ch << endl; // prints the whole array not the address.

    char *c = &ch[0];
    cout << c << endl; // prints the whole array not the address.

    char temp = 'z';
    char *p = &temp;

    cout << p << endl; //prints the values in temp untill it gets null character

    return 0;
}
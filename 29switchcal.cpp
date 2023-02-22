#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    char op;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
    case '*':
        cout << a * b << endl;
    case '/':
        cout << a / b << endl;
    default:
        cout << "Enter a valid operation" << endl;
    }
    return 0;
}
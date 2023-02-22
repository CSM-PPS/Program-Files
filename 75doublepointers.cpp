#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr1 = &ptr;

    cout << endl
        << "everything is fine " << endl;

    cout << "ptr ->" << ptr << endl; // address of the variable
    cout << "&i ->" << &i << endl;
    cout << endl;
    
    cout << "i ->" << i << endl; // value of the variable
    cout << "*ptr ->" << *ptr << endl;
    cout << "**ptr1 ->" << **ptr1 << endl;
    cout << endl;

    cout << "&ptr->" << &ptr << endl; // address of the pointer
    cout << "ptr1" << ptr1 << endl;
    cout << endl;

    cout << "ptr ->" << ptr << endl; // value at the ptr
    cout << "*ptr1 ->" << *ptr1 << endl;
    cout << endl;

    cout << "&ptr1 ->" << &ptr1 << endl;// ptr1 address
    cout << "ptr1 ->" << ptr1 << endl;//value to ptr1

    return 0;
}
#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1, 23, 1};
    cout << sizeof(arr) << endl;  // it prints the size of whole array as size*4 as int is of 4 bytes
    cout << sizeof(*arr) << endl; // it prints the size of the value at the location
    cout << sizeof(&arr) << endl;

    int *ptr = &arr[0];
    cout << sizeof(ptr) << endl;  // size of pointer
    cout << sizeof(*ptr) << endl; // size of the value which our pointer is pointing to
    cout << sizeof(&ptr) << endl; // size of the addresss of the pointer

    return 0;
}
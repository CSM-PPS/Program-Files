#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {3, 4, 1};
    cout << arr[2] << endl;

    int arr1[20] = {2, 2, 34, 5, 6, 7, 9};
    int n = 20;
    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i]<<" ";
    }

    return 0;
}
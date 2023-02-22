#include <iostream>
using namespace std;

void update(int arr[], int n)
{

    cout << endl;
    cout << "Inside the update function" << endl;
    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to main function" << endl;
}
int main()
{
    int arr[3] = {9, 8, 7};
    update(arr, 3);

    // printing the array
    cout << "Printing in main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
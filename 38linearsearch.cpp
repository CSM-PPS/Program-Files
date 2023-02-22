#include <iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
            
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {2, 34, 1, 35, 7, 3, 3, 69, 9, 10};

    cout << "Enter the key to search for " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is not present" << endl;
    }

    return 0;
}
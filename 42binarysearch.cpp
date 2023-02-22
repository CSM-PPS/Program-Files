#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end)/2;
    int mid = start + (end - start)/2;


    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // Go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // go to left part
        else // key < arr[mid]
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
        
    }
    return -1;
}
int main()
{

    int arr[10] = {2, 4, 5, 6, 7, 8, 9, 10, 11, 15};
    int index1 = binarysearch(arr, 10, 11);
    int index2 = binarysearch(arr, 10, 15);
    int index3 = binarysearch(arr, 10, 10);
    int index4 = binarysearch(arr, 10, 12);

    cout << " Index of 11 is " << index1 << endl;
    cout << " Index of 15 is " << index2 << endl;
    cout << " Index of 10 is " << index3 << endl;
    cout << " Index of 12 is " << index4 << endl;

    return 0;
}
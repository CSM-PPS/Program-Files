#include <iostream>
using namespace std;


// Searching in a sorted rotated array. 

int getpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;
}
int main()
{

    int arra[5] = {3, 8, 10, 17, 1};

    cout << "Pivot is " << getpivot(arra, 5);

    return 0;
}
#include <iostream>
using namespace std;

bool issorted(int /*arr[]*/*arr , int size)
{
    if (size <= 1)
        return 1;
    if (arr[0] > arr[1])
    {
        return false;
    }

    else
    {
        bool ans = issorted(arr + 1, size - 1);
        return ans;
    }
}
int main()
{
    int arr[5] = {1, 2, 4, 5, 20};
    int size = 5;

    bool ans = issorted(arr, size);
    if (ans)
    {
        cout << "array is sorted" << endl;
    }
    else
    {
        cout << "array is not sorted" << endl;
    }
    return 0;
}
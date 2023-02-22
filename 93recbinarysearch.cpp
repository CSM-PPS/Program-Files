#include <iostream>
using namespace std;

bool binarysearch(int *arr, int s, int e, int k)
{
    int mid = s + (e - s) / 2;
    if (arr[mid] == k)
        return 1;
    if (s > e)
        return 0;
    if (arr[mid] < k)
    {
        return binarysearch(arr, mid + 1, e, k);
    }
    if (arr[mid] > k)
    {
        return binarysearch(arr, s, mid - 1, k);
    }
}
int main()
{
    int arr[5] = {1, 2, 4, 5, 6};
    int k = 2;
    int s = 0;
    int e = 4;
    bool ans = binarysearch(arr, s, e, k);
    if (ans)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }
    return 0;
}
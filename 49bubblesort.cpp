#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    bool swapped = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}
int main()
{
    int arr[5] = {4, 2, 1, 3, 5};
    bubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
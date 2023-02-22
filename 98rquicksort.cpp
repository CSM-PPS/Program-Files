#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }
    int pivotindex = s + cnt;

    swap(arr[pivotindex], arr[s]);

    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j++;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int arr[], int s, int e)
{
    // base case;
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    // sort left part
    quicksort(arr, s, p - 1);

    // sort right part
    quicksort(arr, p + 1, e);
}
int main()
{
    int arr[5] = {4, 2, 1, 3, 4};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
#include <iostream>
#include <bits./stdc++.h>
using namespace std;

int getmin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        // mini - min(mini,arr[i]);
    }
    return min;
}
int getmax(int arr[], int n)
{
    int maxi = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}
int main()
{
    int size;
    cin >> size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The maximum value is " << getmax(arr, size) << endl;
    cout << "The minimum value is " << getmin(arr, size) << endl;

    return 0;
}
#include <bits/stdc++.h> 
using namespace std;

void selectionsort(int arr[],int n){   
    // Write your code here.
    for(int i = 0; i < n; i++)
    {
        int minindex = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}
int main()
{
    int arr[5] = {4, 2, 1, 3, 5};
    selectionsort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
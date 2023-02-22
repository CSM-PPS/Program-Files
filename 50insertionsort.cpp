#include <bits/stdc++.h> 
using namespace std;
void insertionSort(int *arr, int n){
    // Write your code here.
    
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for(j = i - 1;  j >= 0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main()
{
    int arr[5] = {4, 2, 1, 3, 5};
    insertionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
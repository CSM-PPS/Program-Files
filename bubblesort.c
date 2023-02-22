#include<stdio.h>

void bubblesort(int arr[], int n)
{
    for(int i = 0 ; i < n; i++)
    {
        for(int j = i + 1; i < n-i; i++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[6] = {6,3,1,6,978,5};
    bubblesort(arr,6);
    for(int i = 0 ; i < 6 ; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
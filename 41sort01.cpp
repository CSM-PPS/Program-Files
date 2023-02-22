#include<iostream>
#include<bits./stdc++.h>
using namespace std;

void printarray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort01(int arr[], int n)
{
    int left = 0, right = n-1;
    while(left < right)
    {
        while(arr[left]==0)
        {
            left++;
        }
        while(arr[right]==2)
        {
            right--;
        }
        while(arr[right]==1)
        while(arr[left]==2)
        {

        }

        if(arr[left]==2 && arr[right] == 1 )
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
        
    }
}
int main(){
    int arr[6] = {0,1,2,2,1,0};
    printarray(arr,6);
    sort01(arr,6);
    printarray(arr,6);


    return 0;
}
#include<iostream>
using namespace std;

void print(int arr[], int n , int start = 0)//start is a default argument .if any value is not given to it at the time of function call it assigns it value as 0
{
    for(int i = start; i < n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5] = {1,23,4,56,7};
    print(arr,5);
    cout<<endl;

    print(arr,5,2);
    return 0;
}
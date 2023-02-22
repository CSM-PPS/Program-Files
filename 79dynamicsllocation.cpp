#include<iostream>
using namespace std;

int getsum(int *arr, int n)
{
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;

    //variable sizeed array
    int*arr = new int[n];

    //taking input
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    int ans = getsum(arr,n);
    cout<<"The ans is "<<ans<<endl;

    while ((true))
    {
        int i = 5; //automatically deletes the i after exiting from the loop
    }
    
    while ((true))
    {
        int *p = new int;//we have to delete the variable manually as our heap memory doest deletes our data automatically after exiting from loop as it is dynamic allocation
        delete p;
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int printarray(char arr[], int n)
{
    for(int i = 0 ; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    char arr[7] {'s','a','i',' ','s','h','a'};
    int s = 0;
    int e = 6;
    while(s<=e)
    {
        while(arr[e] != ' ')
        {
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    printarray(arr,7);
    
     
    return 0;
}
#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[4] = {1,2,3,4};

    array<int,4> a = {1,2,1,2};
    
    int size = a.size();

    for(int i = 0; i < size;i++) // here our time comp is O(n)
    {
        cout<<a[i]<<endl;
    }

    //But if we onlu use the element which we need like below the time comp will be O(1)
    cout<<"Element at 2nd index "<<a.at(2)<<endl;
    cout<<"Element at 3nd index "<<a.at(3)<<endl;

    //Below line shows whether the array is empty or not
    cout<<"Empty or not "<<a.empty()<<endl;

    //Below line are used to find the first and last element of the array
    cout<<"First Element "<<a.front()<<endl;
    cout<<"Last Element "<<a.back()<<endl;
    return 0;
}
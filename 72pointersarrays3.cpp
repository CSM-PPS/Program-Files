#include<iostream>
using namespace std;

int main(){
    int arr[10];
    // arr = arr + 1;  we cannot use like this

    int *ptr = &arr[0];
    cout<<ptr <<endl;
    ptr = ptr + 1;
    cout<<ptr <<endl;
    return 0;
}
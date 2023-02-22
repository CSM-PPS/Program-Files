#include<iostream>
using namespace std;

int main(){
    
    int arr[10] = {3,5,78,9};

    cout<<"Address of the first memory block is "<<arr<<endl;

    cout<<"Address of the second memory block is "<<&arr[1]<<endl;

    cout<<"Value at first block "<<*arr<<endl;
    cout<<"Value at first block "<<*arr + 1<<endl; //outputs 4 coz it add 1 to value at index 0 so wee have to use brackets
    cout<<"Value at second block "<<*(arr + 1)<<endl;
    cout<<"Value at third block "<<*(arr + 2)<<endl;
    cout<<"Value at third block "<<arr[2]<<endl;

    int i = 2;
    cout<<"The value at 3rd block is "<<i[arr]<<endl; //we can also access the elements like this.
    return 0;
}
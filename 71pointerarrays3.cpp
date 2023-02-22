#include<iostream>
using namespace std;

int main(){
    int a[10] = {1,23,2,1,3};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;//both the above line and below line are same meaning
    cout<<a<<endl;

    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    
    return 0;
}
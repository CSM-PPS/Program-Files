#include<iostream>
using namespace std;

int main(){
    
    int num = 5;
    cout<<num<<"\n";

    // adderess of operator - &
    cout<<"Address of num is "<<&num<<endl;
 
    int *ptr = &num;
    cout<<"value is "<<ptr<<endl; //accesssing the adresss of the pointer
    cout<<"value is "<<*ptr<<endl; // accesing the value at the adress


    //pointers of different data types
    double d = 4.08;
    double *p2 = &d;
    
    //size of pointer
    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"Size of ptr is "<<sizeof(ptr)<<endl;
    cout<<"Size of ptr is "<<sizeof(p2)<<endl;


    // declaring pointer using help of null pointer
    int *pt = 0;
    int i = 7;
    pt = &i;
    cout<<pt<<endl;
    cout<<*pt<<endl;


    return 0;
}
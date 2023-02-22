#include<iostream>
using namespace std;

inline getmax(int& a , int& b)
{
    return (a>b)?a:b;
}
int main(){
    
    int a = 1, b= 2;

    cout<<getmax(a,b)<<endl;
    a += 3;
    b += 1;
    cout<<getmax(a,b)<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    
    int a,b = 1;
    a = 10;
    if(++a){
        cout<<"if"<<b;
    }
    else {
        cout<<"else"<<++b;
    }

    return 0;
}
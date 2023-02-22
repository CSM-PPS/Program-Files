#include<iostream>
using namespace std;

int main(){
    
    // Fibbinocci series
    // 0 1 1 2 3 5 8 13 21 34 55 89
    int n = 10;

    int a = 0;
    int b = 1;
    // int sum = 0;
    cout<<a<<" "<<b;
    for(int i = 1; i<=10 ; i++){
        int nextnumber = a + b;
        cout<<nextnumber<<" ";

        a = b;
        b = nextnumber;
    }


    return 0;
}
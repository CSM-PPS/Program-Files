#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    // int i = 1;
    // while(i<=n){
    //     int j = 1;     // To print pattern in reverse order
    //     while(j<=n){
    //         cout<<n-j+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    return 0;
}
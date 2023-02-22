#include<iostream>
using namespace std;

int main(){
    
    int a, b;
    cout << "Enter the value of a : " << endl;
    cin >> a;
    cout << "a and b are equal " << endl;
    cin>>b;
    if(a>b)
    {
        cout << "a is greater than b " << endl;
    }
    else if(a==b){
        cout<< "a is less than b " << endl;
    }
    else{
        cout << "Enter the value of b : " << endl;
    }

    // This is home work question 
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"entered character is lower case alphabet and its value is "<< ch <<endl;
    }
    else if(ch>='A' && ch <='Z'){
        cout<<"Entered character is upper case alphaber and its value is "<< ch <<endl;
    }
    else{
        cout<<"You've entered a numeric value "<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

void update(int n )
{
    n++;
}

void update1(int &n)
{
    n++;
}

int& func(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}

int& function(int a) //returns the value as we are returning the variale of main function 
{
    a++;
    cout<<a<<endl;
}


int* fun(int n) //we are returning a local variable so it shows warning
{
    int *ptr = &n;
    return ptr;
}
int main(){
    int i = 5;


    //creating a reference variable
    int &j = i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;

    int n = 5;
    cout<<"Before "<<n<<endl;
    update1(n);
    cout<<"After "<<n<<endl;

    func(n);
    fun(n);

    function(n);
    return 0;
}
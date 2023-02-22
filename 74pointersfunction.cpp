#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    // p = p + 1;
    *p= *p + 1;
    cout<<"Update function"<<p<<endl;
}

int getsum(int /*arr[] both are same*/ *arr,int n)
{
    cout<<"The sizee is "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i = 0; i < n ;i++)
    {
        sum += i[arr];
    }
    return sum;
}

int main()
{
    int n = 5;
    int *p = &n;

    // print(p);
    cout<<*p<<endl;
    update(p);
    cout<<*p<<endl;

    int arr[5] = {6,3,2,6,7};
    cout<<"The sum of the array is "<<getsum(arr,5)<<endl;
    return 0;   
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    
    cout<<"Capacity is "<<v.capacity()<<endl;

    v.push_back(1);
    //After adding 1st element
    cout<<"Capacity is "<<v.capacity()<<endl;
    
    v.push_back(2);
    //After adding 2nd element
    cout<<"Capacity is "<<v.capacity()<<endl;

    //Directely accesing to the element at 2nd index
    cout<<"Element at 2nd index "<<v.at(2)<<endl;


    //BELOW lines returns the first and last elements in the vector
    cout<<"First Element "<<v.front()<<endl;
    cout<<"Last Element "<<v.back()<<endl;


    cout<<"Before Pop "<<endl;
    for(int i: v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    //Removes the last element in the vector

    cout<<"After pop back"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;


    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    //Clears the whole vector . Now the size will become 0 but the capacity did not .
    //Because it clears the elements but not the the memoery blocks assigned.
    cout<<"After clear size"<<v.size()<<endl;


    vector<int> a(5,1);
    //creates a vector of size 5 and initializes all indexes with 1
    for(int i:a)
    {
        cout<<i<<" ";
    }cout<<endl;

    vector<int> b(a);
    //copy's all the elements from a and put's in b.
    for(int i:a)
    {
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}
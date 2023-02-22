#include<iostream>
#include<deque>
using namespace std;

int main(){
    
    deque<int> d;
    
    d.push_back(1);
    d.push_back(2);

    for(int i : d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"The size of deque is "<<d.size();
    d.pop_back(); //removes the last element

    d.pop_front(); //removes the front element

    cout<<"Value at index 1 is "<<d.at(1)<<endl;

    cout<<"First element is "<<d.front()<<endl;
    cout<<"Last element is "<<d.back()<<endl;

    cout<<"Check whether the deque is emptly or not "<<d.empty()<<endl;

    d.erase(d.begin(),d.end());// deletes the whole deque

    return 0;
}
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    l.pop_back();

    l.erase(l.begin());

    cout<<"The size of list is "<<l.size()<<endl;
    return 0;
}
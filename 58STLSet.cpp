#include <iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    
    s.insert(3);
    s.insert(8);
    s.insert(9);
    s.insert(0);
    s.insert(1);
    s.insert(4);

    for(auto i : s)
    {
        cout<<i<<endl;
    }cout<<endl;

    set<int>:: iterator it = s.begin();
    it++;
    s.erase(it); // removes the 2nd element

    cout<<"8 is present or not"<<s.count(8)<<endl;

    for(auto it = itr; it != s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    
    return 0;
}
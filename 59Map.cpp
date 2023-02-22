#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[1] = "sai";
    m[3] = "shankar";
    m[4] = "Punna ";

    m.insert( {5,"Karthik"});

    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 4 ->"<<m.count(4)<<endl;

    m.erase(5);

    auto it = m.find(5);
    for(auto i = it ; i != m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
    return 0;
}
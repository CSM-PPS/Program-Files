#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("sai");
    s.push("shankar");
    s.push("punna");

    cout<<"The top most element is "<<s.top()<<endl;
    s.pop();//eliminates the last top element

    cout<<"The size of stack is "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;

    return 0;
}
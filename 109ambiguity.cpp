#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout<<"Iam A"<<endl;
        }
};
class B{
    public:
        void func()
        {
            cout<<"Iam B"<<endl;
        }
};
class C : public A, public B{

};
int main(){
    C c;
    // c.func(); we cannot do like these coz both the base classes have the same name of the function so we use inheritance ambiguity so that we can resolve the issue
    c.A::func(); // here the function of class A is called
    c.B::func();  // Here the function of class B is called
    return 0;
}
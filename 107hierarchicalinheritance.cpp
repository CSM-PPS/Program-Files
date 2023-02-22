#include<iostream>
using namespace std;

// In herirarchical inheritance one base class is used to derive to derived classes. In the below program, the class a is the base class and the classes b and c are derived classes of class a  which both of them has the properties of a , but b dont have the properites of c and c don't have the properties of b .
class A{
    public:
        void func1()
        {
            cout<<"Hey eppurra"<<endl;
        }
};
class B : public A{
    public:
    void func2()
    {
        cout<<"Kalam garu kalalu kanamannaru "<<endl;
    }
};
class C : public A{
    public:
    void func3()
    {
        cout<<"Idhekkadi mass ra mawa "<<endl;
    }
};
int main(){
    A a;
    a.func1();
    cout<<endl<<endl;
    B b;
    b.func1();
    b.func2();
    cout<<endl<<endl;
    C c;
    c.func1();
    // c.func2() we cannot access the properties of class b coz the class b and c are on the same hierarchical level. they both are derived classes of the class a . so there is no relation b/w b and c .
    c.func3();
    cout<<endl<<endl;
    return 0;
}
#include <iostream>
using namespace std;

//  hybrid inheritance means the combitnation of more than one type of inheritance. It means the mix of the above discusses types of inheritances
//Below we have used both single and heirerchical inheritances. where a is the base class for b and c and c is the base class for d. 
class A
{
public:
    void func1()
    {
        cout << "Jai Balayya " << endl;
    }
};
class B : public A
{
public:
    void func2()
    {
        cout << "Jai Jai Balayya" << endl;
    }
};
class C : public A
{
public:
    void func3()
    {
        cout << "Jai Jai Jai Balayya " << endl;
    }
};

class D : public C{
    public:
        void func4()
        {
            cout<<"Jai Jai Jai Jai Balayya"<<endl;
        }
};
int main()
{
    D d;
    d.func1();
    // d.func2(); we cannot use func2 because C and B are on same herierchical level . D has no relationsip with B. so it throughs error
    d.func3();
    d.func4();

    C c;
    c.func1();
    c.func3();

    B b;
    b.func1();
    b.func2();
    return 0;
}
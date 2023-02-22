#include<iostream>
using namespace std;

// This is a single inheritance it makes only one derived class for a base class.
class animal{
    public:
        int age;
        int weight;

    void speak()
    {
        cout<<"Animal Speaking "<<endl;
    }
};

class dog : public animal{

};

int main(){
    dog d ;
    d.speak();
    d.age = 7;
    cout<<d.age<<endl;
    return 0;
}
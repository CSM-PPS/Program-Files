#include<iostream>
using namespace std;

// This is a multi level ingeritance where a single base class is iheriting a single derived class and that  derived class will inherits one more and this goes on by inheriting agian and again
class animal{
    public:
        int age;
        int weight;

    void speak()
    {
        cout<<"Animal Speaking -- Enjoy pandagow"<<endl;
    }
};

class dog : public animal{

};

class germanshephard : public dog{


};

int main(){
    dog d ;
    d.speak();
    d.age = 7;
    cout<<d.age<<endl;
    return 0;
}
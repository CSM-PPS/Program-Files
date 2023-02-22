#include<iostream>
using namespace std;

// this is multiple inheritance it means a derived class is formed from two base classes. The derived class has the properties of the the both base classes 
class animal{
    public:
        int age;
        int weight;

    void bark()
    {
        cout<<"Adida Sir "<<endl;
    }
};

class human{
    public:
        string color;
    
    void speak()
    {
        cout<<"Jambalakidi Jaru mitaya"<<endl;
    }
};

class combo : public animal , public human {

};
int main(){
    combo c ;
    c.speak();
    c.bark();
    c.age = 7;
    cout<<c.age<<endl;
    return 0;
}
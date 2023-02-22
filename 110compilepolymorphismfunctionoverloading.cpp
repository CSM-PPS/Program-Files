#include<iostream>
using namespace std;

class A{
    public:
        void sayhello()
        {
            cout<<"HI SAI"<<endl;
        }
        void sayhello(string name)
        {
            cout<<"Hi ra "<<name<<endl;
        }

        int sayhello(int age)
        {
            cout<<"Your age is "<<age<<endl;
        }
};
int main(){
    A obj;
    obj.sayhello();
    obj.sayhello("sai");
    obj.sayhello(18);
    return 0;
}
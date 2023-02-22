#include <iostream>
#include <string>
// #include "100student.cpp" // we can include other file like this to access the class belongs to that file
using namespace std;

class student
{
    // by default the class is private. as its acces modifer
private: // private access modifiers can only be accesesed inside the class only.
    char gender;
    int section;

public: // public access modifers can be accesed from any part of the code.
    student()
    {
        cout << "Constructor called" << endl;
    }

    // below is the parameterlized constructor
    student(int id)
    {
        cout << "Value at this pointer" << this << endl;
        this->id = id;
    }
    // properties
    string name;
    int id;
    int rollno;

    void print()
    {
        cout << gender << endl; // we will not get erro coz this function is inside the same class only
    }

    int getsection()
    {
        return section;
    }
    char getgender()
    {
        return gender;
    }
    void setsection(int s)
    {
        section = s;
    }
    void setgender(char g)
    {
        gender = g;
    }
};

int main()
{
    // static memory allocation of the object
    student s1;
    cout << "Size : " << sizeof(s1) << endl;

    // dynamic memory allocation. Defining in the heap memory.
    student *s = new student;
    s->name = "sai";
    s->id = 45;
    cout << "The name is " << s->name << endl;
    cout << "The id is " << s->id << endl;

    cout << "The name is " << (*s).name << endl;
    cout << "The id is " << (*s).id << endl;

    student shiva(5);
    cout << "address of student " << &shiva << endl;
    cout << "The id of shiva is " << shiva.id << endl;

    student sai;
    cout << "Please enter your name " << endl;
    cin >> sai.name;

    cout << "Please enter your roll no " << endl;
    cin >> sai.rollno;

    cout << "Please enter your id " << endl;
    cin >> sai.id;

    sai.setgender('m');
    sai.setsection(4);

    cout << "Your gender is " << sai.getgender() << endl;
    cout << "Your section is " << sai.getsection() << endl;

    cout << "Your name is " << sai.name << endl;
    cout << "Your roll no is " << sai.rollno << endl;
    cout << "Your id is " << sai.id << endl;
    return 0;
}
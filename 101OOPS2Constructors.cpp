#include <iostream>
#include <bits./stdc++.h>
using namespace std;

class student
{
private:
    char gender;
    int section;

public:
    student()
    {
        cout << " Default Constructor called" << endl;
    }

    // below is the parameterlized constructor
    // student(int id)
    // {
    //     cout << "Value at this pointer" << this << endl;
    //     this->id = id;
    // }

    char *name = new char[100];
    int id;
    int rollno;
    static int passoutyear;

    void print()
    {
        // we will not get error coz this function is inside the same class only
        cout << "Name : " << this->name << endl;
        cout << "gender : " << this->gender << endl;
        cout << "section : " << this->section << endl;
    }
    student(student &temp) // It is a Copy constructor which copies values from temp to our global gender and section.
    {
        // Below we are creating a deep copy to prevent shallow copy.
        // In deep copy it creates a new array and the operations performed on the original array will not affect our copied array . IT is the use of deep copy.
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        // this->name = temp.name If we do like this it will become shallow copy so we use above method.
        this->gender = temp.gender;
        this->section = temp.section;
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
    void setname(char name[])
    {
        strcpy(this->name, name);
    }
    static int random()
    {
        // cout<<this->section<<endl; we cannot use this keyword here
        // cout<<gender<< endl; we cannot use anyother members than static members
        return passoutyear;
    }

    ~student()
    {
        cout << "Destructor Called" << endl;
    }
};

int student::passoutyear = 2026;

// Main function for studying destructor
int main()
{
    // //static
    // student a; //for the objects created using static allocation the destructor calls automatically

    // //dynamic
    // student *b = new student(); //we have to call the destructor manually for dynamic memory object.
    // delete b; // Now the destructor will be called

    cout << student::passoutyear << endl;
    cout << student::random() << endl;
    return 0;
}

// Main function for studying constructor
/*
int main()
{
    student s;
    s.setsection(6);
    s.setgender('M');
    s.print();
    cout << endl
         << endl;

    // student shiva(s);
    student shiva = s;
    // It is a copy constructor ,which copies all values from s and puts in sai
    // default copy constructor is a shallow copy
    shiva.print();
    cout << endl
         << endl;

    student sai;
    sai.setgender('M');
    sai.setsection(9);

    char name[13] = "sai shankar";
    sai.setname(name);
    sai.print();
    cout << endl
         << endl;
    student karthik(sai);
    sai.print();
    cout << endl
         << endl;

    sai.name[0] = 'j';
    sai.print();
    cout << endl
         << endl;
    // changing the values int the name of sai will also change in name of karthik because it is a shallow copy which means it access same memory i.e,, sai and karthik are pointing to the same memory location. If we change anything in sai it will also change it karthik coz both are at at the same memory. Default constructor always posseses shallow copy.
    karthik.print();
    cout << endl
         << endl;

    sai = karthik; // copies all values of karthik into sai. It is constructor assignment Operator. It assigns all values of karthik to sai.
    sai.print(); cout<<endl<<endl;
    karthik.print();
    return 0;
}


*/

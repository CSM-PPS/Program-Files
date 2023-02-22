#include <iostream>
using namespace std;

class humans
{
public:
    int height;
    int weight;
    int age;

    int getage()
    {
        return this->age;
    }
};

class male : public humans
{
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping " << endl;
    }
    void setweight(int w)
    {
        this->weight = w;
    }

    void getheight(int h )
    {
        this-> height = h; // we can create a getter to use this height variable in the main function if the type of inheritance is protected or private.
    }
    
};

int main()
{
    male object;
    cout << object.age << endl;
    cout << object.height << endl;
    cout << object.weight << endl;
    cout << object.color << endl;

    object.setweight(62);
    cout << object.weight << endl;

    object.sleep();


    return 0;
}
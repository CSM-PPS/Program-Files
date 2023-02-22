#include <iostream>
using namespace std;

int main()
{

    int n = 9;
    int a = n;
    a++;
    cout << n << endl; // the value is not going to increament coz a is a copy of n and it will not affeet n;

    int n1 = 6;
    int *p = &n1;
    cout << "before " << n1 << endl;
    (*p)++;
    cout << "After " << n1 << endl;

    // coping a pointer
    int *q = p;
    cout << p << "   " << q << endl;
    cout << *p << "   " << *q << endl;

    int i = 5;
    int *t = &i;
    // cout<<(*t)++<<endl;

    *t = *t + 1;
    cout << *t << endl;

    cout << "Before " << t << endl;
    t = t + 1;
    cout << "After " << t << endl;

    /*
    float p = 2.5;
    float f = 10.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<<*ptr<<" "<<f<<" "<<p<<endl;
    */
    return 0;
}
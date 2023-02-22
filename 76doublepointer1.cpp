#include<iostream>
using namespace std;

void update(int **p1)
{
    // p1 = p1 + 1; //no changes because the main function sends a copy not the acutal value.

    // *p1 = *p1 + 1; //it changes the value of p

    **p1 = **p1 + 1; //changes the value of i. as our p1 pointer points to i.
}

int main(){
    int i = 5;
    int *p = &i;
    int **p1 = &p;
    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p1<<endl;

    update(p1);

    cout<<"after "<<i<<endl;
    cout<<"after "<<p<<endl;
    cout<<"after "<<p1<<endl;
    return 0;
}
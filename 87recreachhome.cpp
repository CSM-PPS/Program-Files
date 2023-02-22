#include<iostream>
using namespace std;

void reachhome(int src, int dest)
{
    cout<<"Src "<<src<<" Dest "<<dest<<endl;
    if(src== dest)
    {
        cout<<"Reached Home"<<endl;
        return ;
    }

    src++;
    reachhome(src,dest);
}

int main(){
    
    int src = 1;
    int dest = 10;

    cout<<endl;

    reachhome(src,dest);
    return 0;
}
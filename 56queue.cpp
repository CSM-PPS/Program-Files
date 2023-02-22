#include<iostream>
#include<queue>
using namespace std;

// Queue is first in first out type
int main(){
    queue<string> q;

    q.push("sai");
    q.push("shankar");
    q.push("punna");

    cout<<"The size of the queue is "<<q.size()<<endl;

    cout<<"The first element is "<<q.front()<<endl;

    q.pop(); // Removes sai

    return 0;
}
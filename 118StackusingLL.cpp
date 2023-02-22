#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
}; 

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int x)
    {
        Node *temp = new Node();
        temp->data = x;
        temp->next = top;
        top = temp;
    }
    void pop()
    {
        if (top == NULL)
            return;
        Node *temp = top;
        top = top->next;
        delete temp;
    }
    int peek()
    {
        if (top == NULL)
            return -1;
        return top->data;
    }
    bool isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.isEmpty() << endl;
    return 0;
}

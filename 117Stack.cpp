#include <iostream>
using namespace std;

class stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
        }
    }
    bool isempty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    int sizeofstack()
    {
        int count = 1;
        while (top > 0)
        {
            count++;
            top--;
        }
        return count;
    }
};
int main()
{

    // we can also create a stack like below by using the dynamic allocation but we have to use this pointer for accesing the properties of stack
    //  stack *st = new stack(4);
    stack st(4);
    st.push(44);
    st.push(88);
    st.push(99);
    st.push(90);
    st.pop();
    cout << st.peek() << endl;
    cout << st.isempty() << endl;

    cout << st.sizeofstack() << endl;
    return 0;
}
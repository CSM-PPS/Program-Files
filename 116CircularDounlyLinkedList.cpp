#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~node()
    {
        cout << "Node is deleted with the data " << this->data << endl;
    }
};

void insertnode(node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        temp->next = temp;
        temp->prev = temp;
    }
    else
    {
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        node *temp = new node(d);
        temp->next = curr->next;
        temp->prev = curr;
        curr->next = temp;
        curr->next->prev = temp;
    }
}

void print(node *&tail)
{
    node *temp = tail;
    if (tail == NULL)
    {
        cout << "The list empty " << endl;
        return;
    }

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

void deletenode(node *&tail, int value)
{
    node *prev = tail;
    node *curr = prev->next;

    while (curr->data != value)
    {
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next->prev = prev;

    delete curr;
}
int main()
{
    node *newnode = new node(10);
    node *tail = newnode;

    insertnode(tail, 10, 5);
    insertnode(tail, 10, 4);
    insertnode(tail, 10, 9);

    deletenode(tail, 4);
    print(tail);
    return 0;
}
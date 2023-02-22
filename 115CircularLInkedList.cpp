#include <iostream>
#include <map>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~node()
    {
        cout << "The node is deleted with data " << this->data << endl;
    }
};

void insertnode(node *&tail, int element, int d)
{
    // if the list is empty
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        // non empty list and assuming that the element is present so that we can place the desired element after that element
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deletenode(node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "The list is empty " << endl;
    }
    else
    {
        // non empty list and assuming that the value is present in the list
        node *prev = tail;
        node *curr = prev->next;
        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if (prev == curr)
        {
            curr = NULL;
        }
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;

        delete curr;
    }
}
void print(node *&tail)
{

    node *temp = tail;
    if (tail == NULL)
    {
        cout << "The list is empty " << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

// detect loop or cyle in a linked list

bool detectloop(node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<node* , bool> visited;

    node *temp = head;

    while (temp != NULL)
    {
        // cycle is present
        if (visited[temp] == true)
        {
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    node *tail = NULL;
    insertnode(tail, -1, 3);
    print(tail);
    // insertnode(tail,3,4);
    // insertnode(tail,4,7);
    // cout<<"Tail is at "<<tail->data<<endl;
    // print(tail);
    // insertnode(tail,4,9);
    // insertnode(tail,7,6);
    // print(tail);

    deletenode(tail, 3);
    print(tail);
    cout << "Tail is at " << tail->data << endl;

    return 0;
}
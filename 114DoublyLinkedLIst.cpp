#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    //destructor to delete a node. coz we are initialized the LL dynamically so we have to delete it manually
    ~node()
    {
        cout<<"Node with data "<<this->data<<" is deleted"<<endl;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getlength(node *head)
{
    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertathead(node *&head, int d)
{
    // empty list
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertattail(node *&tail, int d)
{
    // if the list is empty it will execute the below statement
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
    }
    node *temp = new node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}
void insertatposition(node *&head, node *&tail, int position, int d)
{
    node *nodetoinsert = new node(d);
    node *temp = head;
    int count = 1;

    if (position == 1)
    {
        insertathead(head, d);
        return;
    }
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    nodetoinsert->prev = temp;
    temp->next = nodetoinsert;
}
void deletenode(node* &head, node * & tail , int position)
{
    if(position == 1)
    {
        node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }
    else{
        int count = 1;
        node * curr = head;
        node * prev = NULL;
        while(count < position)
        {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        // curr->next->prev = curr->prev;
        curr -> prev = NULL;
        prev->next = curr-> next; 
        curr-> next = NULL;

        delete curr;
    }
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    // node *head = NULL;
    // node *tail = NULL;
    print(head);
    cout << "The length is " << getlength(head) << endl;

    insertathead(head, 11);
    insertathead(head, 31);
    insertathead(head, 21);
    insertathead(head, 16);
    print(head);

    insertattail(tail, 43);
    insertattail(tail, 55);
    print(head);

    insertatposition(head, tail, 4, 1);
    insertatposition(head, tail, 2, 2);
    insertatposition(head, tail, 3, 4);
    print(head);

    cout << "head is at " << head->data << endl;
    cout << "tail is at " << tail->data << endl;

    insertatposition(head, tail, 11, 12);
    // insertattail(tail,12);
    print(head);
    cout << "head is at " << head->data << endl;
    cout << "tail is at " << tail->data << endl;


    deletenode(head,tail,5);
    print(head);
    deletenode(head, tail, 10);
    print(head);
    return 0;
}
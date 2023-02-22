#include <iostream>
#include <map>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is freed for node with data " << value << endl;
    }
};

void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertattail(node *&tail, int d)
{
    // create a new node temp
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void insertatposition(node *&head, node *&tail, int position, int d)
{
    // If the postion is 1 then it can't inset at first position as the count starts from 1 so we declare a base case
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }

    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // we are inseting element at the end of the LL so at the end the next node will be null. so we follow below condition
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }
    node *nodetoinset = new node(d);
    nodetoinset->next = temp->next;
    temp->next = nodetoinset;
}

void deletenode(node *&head, node *&tail, int position)
{
    // deleting first or starting node
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }
    // deleting any middle node or last node
    else
    {
        node *current = head;
        node *previous = NULL;

        int count = 1;
        while (count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }

        previous->next = current->next;
        if (current->next = NULL)
        {
            previous = tail;
        }
        current->next = NULL;
        delete current;
    }
}

// detect loop or cyle in a linked list
bool detectloop(node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<node *, bool> visited;

    node *temp = head;

    while (temp != NULL)
    {
        // cycle is present
        if (visited[temp] == true)
        {
            cout << "Present on element " << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *floydcycledetection(node *head)
{
    if (head == NULL)
        return NULL;

    node *fast = head;
    node *slow = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "Present at " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

node *getstartnode(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *intersection = floydcycledetection(head);
    node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeloop(node *head)
{
    if (head == NULL)
        return;

    node *start = getstartnode(head);
    node *temp = start;

    while (temp->next != start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    node *node1 = new node(10);
    // node *node2 = new node(17);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // cout << node2->data << endl;
    // cout << node2->next << endl;

    // below is the code for inserting at the head
    node *head = node1;
    // print(head);
    insertathead(head, 12);
    // print(head);
    // insertathead(head,15);
    // print(head);

    // this is the code for inseting at the tail
    node *tail = node1;
    // print(head);
    insertattail(tail, 12);
    // print(head);
    insertattail(tail, 15);
    // print(head);

    insertatposition(head, tail, 3, 33);
    // print(head);

    // inserting at the first postion
    insertatposition(head, tail, 1, 44);
    // print(head);

    // inserting at the last postion
    insertatposition(head, tail, 6, 11);

    // print(head);

    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    // deleting an element in a linked list
    // deletenode(head, tail, 6);
    // print(head);

    // print(head);
    tail->next = head->next->next->next;
    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;

    if (floydcycledetection(head) != NULL)
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "Cycle is not present" << endl;
    }
    cout << getstartnode(head)->data << endl;

    removeloop(head);
    print(head);
    if (floydcycledetection(head) != NULL)
    {
        cout << "Cycle is present" << endl;
    }
    else
    {
        cout << "Cycle is not present" << endl;
    }
    return 0;
}
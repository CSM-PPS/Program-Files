//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
    void insertathead(Node *&head, int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    
    Node* reverse(Node* head) {
        
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* temp1 = first;
        Node* temp2 = second;
        int sum1 =0, sum2=0;
        while(temp1 != NULL || temp2 != NULL)
        {
            sum1 += temp1->data;
            temp1 = temp1->next;
            
            // sum2 += temp2->data;
            // temp2 = temp2->next;
        }
        
        
        
        while(temp2 != NULL)
        {
            sum2 += temp2->data;
            temp2 = temp2->next;
        }
        
        int ans = sum1 + sum2;
        Node* final = NULL;
        while(ans != 0)
        {
            insertathead(final,ans%10);
            ans = ans/10;
        }
        
        reverse(final);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
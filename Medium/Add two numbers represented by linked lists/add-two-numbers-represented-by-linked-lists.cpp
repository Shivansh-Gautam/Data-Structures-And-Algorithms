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
    public:
    //Function to add two numbers represented by linked list.
    Node* reverseLinkedList(Node *head)
{
    // Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    Node *backward=NULL;
    Node *current=head;
    Node *forward=NULL;
    while(current!=NULL){
        forward=current->next;
        current->next=backward;
        backward=current;
        current=forward;
    }
    return backward;
}

struct Node* addTwoLists(struct Node* num1, struct Node* num2)
{
    // Write your code here.
    num1=reverseLinkedList(num1);
    num2=reverseLinkedList(num2);
    
    Node *ansHead=NULL;
    Node *ansTail=NULL;
    int carry=0;

    while(num1!=NULL && num2!=NULL){
        int sum = carry + num1->data + num2->data;
        int digit = sum % 10;
        carry = sum/10;
        Node *newNode = new Node(digit);
        if(ansHead==NULL){
            ansHead=newNode;
            ansTail=newNode;
        }
        else{
            ansTail->next=newNode;
            ansTail=newNode;
        }
        num1=num1->next;
        num2=num2->next;
    }

    while(num1!=NULL){
        int sum = carry + num1->data;
        int digit = sum % 10;
        carry = sum/10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail=newNode;
        num1=num1->next;
    }

    while(num2!=NULL){
        int sum = carry + num2->data;
        int digit = sum % 10;
        carry = sum/10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail=newNode;
        num2=num2->next;
    }  

    while(carry!=0){
        int sum = carry;
        int digit = sum % 10;
        carry = sum/10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail=newNode;
    }
    ansHead = reverseLinkedList(ansHead);
    return ansHead;
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
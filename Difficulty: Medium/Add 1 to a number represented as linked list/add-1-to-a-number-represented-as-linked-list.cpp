//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node *head){
        Node* last = NULL;
        Node* curr = head;
        Node* next;
        
        while(curr!=NULL){
            next = curr->next;
            curr->next = last;
            
            last = curr;
            curr = next;
        }
        return last;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
           if(head==NULL) return head;
     if(head->next==NULL){
         if(head->data==9){
            head->data+=1;
            Node* start= new Node(1);
            start->next= head;
            return start;
         }
         else{
             head->data+=1;
             return head;
         }
     }
         head = reverse(head);
        Node* temp = head;
        int carry = 1;
        
        while(temp != NULL){
            temp->data += carry;
            if(temp->data < 10){
                carry = 0;
                break;
            }
            else{
                temp->data = 0;
                carry = 1;
            }
            temp = temp->next;
        }
        if(carry == 1){
            Node* newNode = new Node(1);
            head = reverse(head);
            newNode->next = head;
            return newNode;
        }
        
        head = reverse(head);
        return head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends
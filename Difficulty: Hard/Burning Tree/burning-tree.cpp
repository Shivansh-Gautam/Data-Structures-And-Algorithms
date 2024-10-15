//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
     Node * findTargetNode(Node* root, int target)
    {
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty())
        {
            Node * node= q.front();
            if(node->data==target) return node;
            q.pop();
            if(node->left)
            {
                q.push(node->left);
              
            }
            if(node->right)
            {
                q.push(node->right);
               
            }
            
        }
        
    }
    
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        if(root == NULL) return 0;
        
        queue<Node*> q;
        q.push(root);
        unordered_map<Node*,Node*> mp;
        
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                Node* t = q.front();
                q.pop();
                if(t->left){
                    mp[t->left] = t;
                    q.push(t->left);
                }
                if(t->right){
                    mp[t->right] = t;
                    q.push(t->right);
                }
            }
        }
        
        Node* targetNode = findTargetNode(root,target);
        unordered_map<Node*,bool> vis;
        q.push(targetNode);
        vis[targetNode]=true;
        int distance=0;
        int f = 0;
        
        while(!q.empty()){
            int size = q.size();
            int f = 0;
            
            for(int i=0; i<size; i++){
                Node* t = q.front();
                q.pop();
                
                if(t->left && !vis[t->left]){
                    f=1;
                    q.push(t->left);
                    vis[t->left]=true;
                }
                if(t->right && !vis[t->right]){
                    f=1;
                    q.push(t->right);
                    vis[t->right]=true;
                }
                if(mp[t] && !vis[mp[t]]){
                    f=1;
                    q.push(mp[t]);
                    vis[mp[t]]=true;
                }
            }
            if(f) distance++;
        }
        return distance;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends
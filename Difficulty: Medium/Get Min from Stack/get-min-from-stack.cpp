//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    stack <int> st, mn;
    Solution() {
        
    }
    
    void push(int x) {
        st.push(x);
        int top = (mn.empty())? INT_MAX: mn.top();
        if(x < top) mn.push(x);
        else mn.push(top);
    }

    void pop() {
        if(!st.empty()){
            st.pop();
            mn.pop();
        }
    }

    int peek() {
        if(!st.empty()) return st.top();
        else return -1;
    }

    int getMin() {
        if(mn.empty()) return -1;
        else return mn.top();
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
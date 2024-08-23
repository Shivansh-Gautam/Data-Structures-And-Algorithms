//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string s) {
        // Write your code here
     string ans = "";
     stack<string> st;
     for (int i = s.size() - 1; i >= 0; i--)
        {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '1' && s[i] <= '9'))
    	    {
                st.push(string(1, s[i]));
	        }
	    else
	        {
	        	string op1 = st.top();
	        	st.pop();
		        string op2 = st.top();
		        st.pop();
	        	string temp = "(" + op1 + s[i] + op2 + ")";
	        	st.push(temp);
	        }
        }
     ans += st.top();
     return ans;
    }
 };

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends
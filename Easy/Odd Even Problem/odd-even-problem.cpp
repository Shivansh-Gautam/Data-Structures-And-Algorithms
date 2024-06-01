//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   string oddEven(string s) {
        
        // key : char : alphabet
        // value : int : occurence count
        unordered_map<char, int> m;
        
        for(char &ch: s) m[ch]++;
        int x(0), y(0);
        for(auto item: m) {
            if((item.first-96)%2==0) {
                // condition for even alphabet position
                if(item.second%2==0) {
                    x++;   
                }
            }
            else {
                // condition for odd alphabet position
                if(item.second%2!=0) {
                    y++;
                }
            }
        }
        return (((x+y)%2==0)? "EVEN": "ODD");
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends
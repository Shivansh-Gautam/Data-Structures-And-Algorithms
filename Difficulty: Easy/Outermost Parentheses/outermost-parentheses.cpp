//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        int balance = 0;
        string ans = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                if(balance > 0){
                    ans += s[i];
                }
                balance++;
            }
            else{
                balance--;
                if(balance > 0){
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends
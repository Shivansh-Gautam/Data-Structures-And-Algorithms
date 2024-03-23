//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
            vector<int>v;
        int N=1000000007;
       if(n==1)
       return {0,1};
       n=n-1;
       int a=0;
       int b=1;
       int i=0;
       v.push_back(0);
       v.push_back(1);
       while(n--)
       {
           int c=a+b;
           c=c%N;
           v.push_back(c);
           a=b;
           b=c;
           
       }
       return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
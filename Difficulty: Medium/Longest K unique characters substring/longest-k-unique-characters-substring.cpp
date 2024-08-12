//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int l = 0;
    int r = 0;
    int ans = -1;
    unordered_map<char,int> mp;
    
    
    while(r < s.length()){
       mp[s[r]]++;
       if(mp.size() < k){
           r++;
       }
       else if(mp.size() == k){
           ans = max(ans,r - l + 1);
           r++;
       }
       else if(mp.size() > k){
           while(mp.size() > k){
               mp[s[l]]--;
               if(mp[s[l]]==0) mp.erase(s[l]);
               l++;
           }
           r++;
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
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends
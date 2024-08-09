//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    vector<int> longestCommonPrefix(string str1, string str2){
        // code here
            vector<int> v;
        string ans = "";
        for(int i = 0; i<str1.length(); i++){
            ans += str1[i];
            if(str2.find(ans) != string::npos){
                v.push_back(i);
            }else{
                break;
            }
        }
        vector<int> a;
        a.push_back(0);
        a.push_back(v[v.size()-1]);
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string str1,str2;
        cin >> str1>> str2;
        Solution ob;
        vector<int> p;
        p = ob.longestCommonPrefix(str1,str2);
        if(p[0]==-1)
        cout<<"-1\n";
        
        else
        cout<<p[0]<<" "<<p[1]<<"\n";
    }
    return 0;
}

// } Driver Code Ends
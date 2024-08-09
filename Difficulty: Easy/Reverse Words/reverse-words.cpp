//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
          int n = S.length();
        vector<string> words;
        int i=0;
        string curr = "";
        while(i<n){
           if(S[i]!='.') curr+=S[i];
           else if(S[i]=='.'){
               words.push_back(curr);
               curr="";
           }
           i++;
        }
        words.push_back(curr);
        reverse(words.begin(),words.end());
        string ans = "";
        for(int j=0;j<words.size();j++){
            ans+=words[j];
            ans+='.';
        }
        ans.erase(ans.size() - 1);
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
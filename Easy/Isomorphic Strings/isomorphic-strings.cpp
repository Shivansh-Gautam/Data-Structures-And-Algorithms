//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
          if(str1.length()!=str2.length()) return false;
        unordered_map<char, char> mp1, mp2;
        
        for(int i=0;i<26;i++) mp1[i+'a'] = i+'a';
        
        for(int i=0;i<str1.length();i++){
            char v1 = mp1[str1[i]];
            char v2 = str2[i];
            
            if(v1!=v2){
                if(v1==str1[i]){
                    if(mp2.find(v2)!=mp2.end()) return false; // as every letter can be used once only
                    mp1[v1] = v2;
                    mp2[v2]++;
                }
                else{
                    return false;
                }
            }
        }
        
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
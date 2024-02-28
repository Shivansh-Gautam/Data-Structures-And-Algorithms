//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string str){
        //code here
            if(str.length()<3)    return stoi(str)%8?-1:1;
        string temp="";
        int n=str.length()-1;
        for(int i=n-2; i<=n; i++){
            temp+=str[i];
        }
        int no = stoi(temp);
        if(no==0)   return 1;
        if(no%8==0) return 1;
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends
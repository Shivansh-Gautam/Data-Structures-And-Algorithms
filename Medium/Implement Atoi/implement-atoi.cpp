//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int ans = 0;
        int sign =1;
        for(int i=0;i<s.length();i++){
            
            if(i==s.length()-1){
                if(s[i]=='-') return -1;
            }
            
            if(s[i]=='-') sign=-1;
            else if(isdigit(s[i])){
                int digit = s[i]-'0';
                ans = ans * 10 + digit;
            }
            else{
                return -1;
            }
        }
        if(sign==-1) return ans*sign;
        else return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends
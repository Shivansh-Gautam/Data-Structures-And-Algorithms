//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
   long long sequence(int n){
        // code here
        int ctr = 1;
        long long ans = 0;
        const long int mod = 1e9 + 7;
       for(int i = 0; i <n ; i++){
             long long mul = 1;
           for(int j = 0; j < i + 1; j++){
               mul = (mul % mod * ctr ) % mod;
               ctr++;
           }
           ans = (ans % mod + mul % mod) % mod;
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
      int solve( int number, int m,int count)
      {
          
          if(count== 0)
          {
              return 1;
          }
          if(number> m)
          {
              return 0;
          }
          
          int take= solve(number*2,m,count-1);
          int nottake= solve( number+1,m,count);
          
          return (take+ nottake);
      }
public:
    int numberSequence(int m, int n){
        // code here
        
        return solve(1,m,n);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        
        Solution ob;
        cout<<ob.numberSequence(m, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
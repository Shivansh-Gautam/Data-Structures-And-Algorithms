//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
            int tn=-1; int tn1=0; int tn2=0;
        
        for(int i=0;i<N;i++){
            
            int cwtn=tn & arr[i];
            int cwtn1=tn1 & arr[i];
            int cwtn2=tn2 & arr[i];
            
            tn= tn & (~cwtn);
            tn1=tn1 | (cwtn);
            
            tn1=tn1 & (~cwtn1);
            tn2=tn2 | (cwtn1);
            
            tn2=tn2 & (~cwtn2);
            tn=tn | (cwtn2);
            
        }
        return tn1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
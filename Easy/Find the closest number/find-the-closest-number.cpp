//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
                unordered_map <int , int> mp;
        
        for(int i = 0; i < n ; i++){
            mp[arr[i]] = abs(arr[i] - k);    
        }
        
        // find min map.second
        int min = INT_MAX;
        int ans = -1;   // initially
        for(auto i: mp){
            if(i.second < min){
                ans = i.first;
                min = i.second;
            }
            else if(i.second == min){
                if(i.first > ans){
                    ans = i.first;
                }else continue;
            }
        } // endof for
        return ans;

    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends
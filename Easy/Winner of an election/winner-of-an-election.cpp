//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
          string name = "";
        int max_count = INT_MIN;
        unordered_map<string,int> mpp;
        for(int i =0;i< n;i++){
            mpp[arr[i]]++;
        }
        for(auto it = mpp.begin();it!=mpp.end();it++){
            if(it->second > max_count){
                max_count = it->second;
                name = it->first;
            }
            if(it->second == max_count and it->first < name){
                name = it->first;
            }
        }
        return {name,to_string(max_count)};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
          int ans=INT_MIN, n=arr.size(), sum=0
           ,mini=INT_MAX, total=0;
           for(int i=0;i<n;i++){//max subarray sum
               if(sum<0) sum=0;
               sum+=arr[i];
               ans=max(ans,sum);
           }
        for(int i=0;i<n;i++){ //total sum
            total+=arr[i];
        }
        for(int i=0;i<n;i++){ //minimum subarray sum
         sum+=arr[i];
         mini=min(sum, mini);
         if(sum>0) sum=0;
     }
        int sub=total-mini;
      return max(sub,ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends
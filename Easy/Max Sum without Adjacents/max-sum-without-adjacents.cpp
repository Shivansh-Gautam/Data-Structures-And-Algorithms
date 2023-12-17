//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    if(n==1)return arr[0];
	    vector<int> v(n,0);
	    
	    v[0] = arr[0];
	    v[1] = arr[1];
	    
	    for(int i=2;i<n;i++){
	        if(i==2){
	           v[2] = arr[i] + v[0]; 
	        }
	        else{
	            v[i] =  arr[i] + max(v[i-2], v[i-3]);
	        }
	    }
	    
	    int ans = *max_element(v.begin(), v.end());
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
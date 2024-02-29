//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	// ith bit set or not
	int setBit(int num , int i)
	{
	   return ((num >> i) & 1);
	}
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    
	    long long int bits[32]; 
	    memset(bits,0,sizeof(bits));
	    
	    //bits[i] -> number of set bits at ith position
	    
	    // for each ith bit
	    for(int i=0;i<32;i++)
	    {
	        // go to each element
	        // check whether ith bit is set or not
	        for(int j=0;j<n;j++)
	        {
	            bits[i] += setBit( arr[j] , i);
	        }
	    }
	    
	    long long int sum = 0;
	    for(int i = 0 ; i < 32 ; i++)
	    {
	        // if ith bit is set
	        if(bits[i] > 0)
	        {
	            
	            // bits[i]   - number of elements with set ith bit or 1
	            // n-bits[i] - number of elements with unset ith bit or 0
	            
	            // since each pair of set/unset bit ie (1,0) will contribute +1 to the total bit difference therefore
	            // bits[i] * (n - bits[i]) = total number of (1,0) pairs that will contribute +1 each
	            // also, since we need to calculate for repetitive pair (unset/set bit ie (0,1) pair), therefore
	            // bits[i] * (n - bits[i]) * 2
	
	            long long int c = bits[i] * ( n - bits[i] ) * 2;
	            sum += c;
	        }
	    }
	    return sum; // total difference
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
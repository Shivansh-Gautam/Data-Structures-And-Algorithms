//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	       const long long MOD = 1e9 + 7;

        // Initialize with correct values
        long long one = 1, two = 3, three = 5;

        if (n < 4) {
            if (n == 1)
                return 2 % MOD;
            else if (n == 2)
                return two % MOD;
            else if (n == 3)
                return three % MOD;
        }
        vector<long long int>v(2);
        v[0] = 3;
        v[1] =5;
        for (int i = 4; i <= n; i++) {
            long long x = (v[0]+v[1]) % MOD;
            v[0]=v[1];
            v[1] =x;
        }

        return v[1] % MOD;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
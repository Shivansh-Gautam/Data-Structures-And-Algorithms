//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
    long SN = (n * ( n + 1L ) ) / 2;
        long S2N = ( n * ( n + 1L ) * ( 2 * n + 1L ) ) / 6;
        long S = 0;
        long S2 = 0;
        
        for(int i=0; i<n; i++){
            S += arr[i];
            S2 += (long) arr[i] * (long) arr[i];
        }
        
        long val1 = S - SN; // X-Y;
        long val2 = S2 - S2N; // X^2 - Y^2: (X+Y)(X-Y)
        
        val2 = val2 / val1; //X+Y
        long X = (val1 + val2) / 2;
        long Y = X - val1;
        
        return {(int) X, (int) Y};
        
     
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
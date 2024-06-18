//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int rectanglesInCircle(int r1) {
        // code here
          int ans= 0;
        double r = (double)(r1);
        for(double i = 1.0;i<2.0*r;i++){
            double cal  = 2.0*sqrt(r*r - ((i/2.0)*(i/2.0)));
            int cal1 = floor(cal);
            // cout<<cal1<<" ";
            ans += cal1;
            
        }
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
        Solution ob;
        int ans = ob.rectanglesInCircle(n);
        cout << ans << "\n";
    }
}
// } Driver Code Ends
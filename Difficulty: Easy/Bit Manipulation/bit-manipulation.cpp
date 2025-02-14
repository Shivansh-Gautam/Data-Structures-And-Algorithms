//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
  
    void bitManipulation(int num, int i) {
        // your code here
        i = i-1;
        int get_bit = (num & (1 << i))>>i;
        int set_bit = num | (1 << i);
        int clear_bit = num & (~(1 << i));
        
        cout<<get_bit<<" "<<set_bit<<" "<<clear_bit;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
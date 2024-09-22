//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here
          int j = 0;             // Length of the previous longest prefix suffix
        int i = 1, n = str.size();
    vector<int> LPS(n);
    while (i < n){
        if (str[i] == str[j]){
            LPS[i] = ++j;
            i++;
        }
        else{
            if (j != 0)    j = LPS[j - 1];             // Use the previous LPS value
            else   i++;
        }
    }
    return LPS.back();
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
     void buildLPS(const string &pattern, vector<int> &lps) {
        int m = pattern.size();
        int len = 0; // length of the previous longest prefix suffix
        lps[0] = 0;  // lps[0] is always 0
        int i = 1;
        while (i < m) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }

    // Function to perform KMP substring search
    bool KMPSearch(const string &text, const string &pattern) {
        int n = text.size();
        int m = pattern.size();

        vector<int> lps(m, 0);
        buildLPS(pattern, lps);

        int i = 0; // index for text
        int j = 0; // index for pattern
        while (i < n) {
            if (pattern[j] == text[i]) {
                i++;
                j++;
            }
            if (j == m) {
                return true; // Found pattern
            } else if (i < n && pattern[j] != text[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return false;
    }

    // Function to check if two strings are rotations of each other or not
    bool areRotations(string &s1, string &s2) {
        if (s1.size() != s2.size()) {
            return false;
        }
        string temp = s1 + s1;
        return KMPSearch(temp, s2);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution sol;
        int result = sol.areRotations(s1, s2);
        if (result) {
            cout << "true" << endl;

        } else {
            cout << "false" << endl;
        }
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
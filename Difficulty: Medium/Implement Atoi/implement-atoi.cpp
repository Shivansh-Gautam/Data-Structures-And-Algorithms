//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int i = 0, res = 0;
    int neg = 0;
    while (s[i] == ' ') {
        i++;
    }
    if (s[i] == '-' || s[i] == '+') {
        neg = (s[i] == '-');
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';
        if (res > (INT_MAX / 10) || (res == (INT_MAX / 10) && digit > INT_MAX % 10)) {
            return neg ? INT_MIN : INT_MAX;
        }
        res = res * 10 + digit;
        i++;
    }
    if (neg) {
        res = -res;
    }

    return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends
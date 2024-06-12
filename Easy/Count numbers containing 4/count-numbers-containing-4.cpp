//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  void find(int no, int &cnt)
{
    while(no>0)
    {
        int d=no%10;
        if(d==4)
        {
            cnt++;
            break;}
            no=no/10;
    }
}
    
  public:
    int countNumberswith4(int n) {
        // code here
        int cnt=0;
        for(int i=4;i<=n;i++)
        {
            find(i,cnt);
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
 void solve(string s, int c1, int c0, int n, vector<string> &binaryNumbers)
    {
        if(c1 < c0)
            return;
        if(s.size() == n)
        {
            binaryNumbers.push_back(s);
            return;
        }
        if(c1 < n)
            solve(s+'1',c1+1,c0,n,binaryNumbers);
        if(c0 < n)
            solve(s+'0',c1,c0+1,n,binaryNumbers);
    }
vector<string> NBitBinary(int N)
{
    vector<string> binaryNumbers;
    string s;
    solve(s,0,0,N,binaryNumbers);
    return binaryNumbers;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends
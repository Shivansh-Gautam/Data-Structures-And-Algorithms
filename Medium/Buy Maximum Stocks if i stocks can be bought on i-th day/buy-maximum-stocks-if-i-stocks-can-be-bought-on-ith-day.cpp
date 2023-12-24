//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int, int>> p;         //Space ---->O(N)
       for(int i=0; i<n; i++){
           p.push_back({price[i], i+1}); //---------> O(N)
       }
       sort(p.begin(), p.end());          //----------->O(Nlog(N))
       int ans=0;
       for(int i=0; i<n; i++){                //----------->O(N)
           int total = p[i].first*p[i].second;
           if(total<=k){
               ans+=p[i].second;
               k-=total;
           }
           else{
               int x = k/p[i].first;
               k-=(p[i].second*k);
               ans+=x;
           }
           if(k<0) break;
       }
       return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends
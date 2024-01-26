//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string str) {
	    // code here
	    unordered_map<char, int> mp;
	    for(int i=0;i<pat.length();i++){
	        mp[pat[i]]++;
	    }
	    int count1 = mp.size();
	    
	    int i=0,j=0,ans=0;
	    int n=str.length();
	    int k=pat.length();
	    
	    while(j<n){
	          if(mp.find(str[j]) != mp.end())
            {
                mp[str[j]]--;
                if(mp[str[j]] == 0)
                {
                    count1--;
                }
            }
            if(j-i+1 <k)
            {
                j++;
            }
            else if(j-i+1 ==k)
            {
                
                if(count1 ==0)
                {
                    ans++;
                }
               
                if(mp.find(str[i]) != mp.end())
                {
                    mp[str[i]]++;
                    if(mp[str[i]] == 1)
                    {
                        count1++;
                    }
                    
                }
                i++;
                j++;
            }
        }
        
        return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

   int checkPalin(vector<int> v)
   {
       for(int i=0,j=v.size()-1;i<v.size()/2;i++,j--)
       {
           if(v[i]!=v[j])
           {
               return 0;
           }
       }
       return 1;
   }

    pair<int,string> check(vector<int>v1,vector<int>v2,int i)
    {
       if(checkPalin(v1))
       {
           return {i,"R"};
       }
       else if(checkPalin(v2))
       {
           return {i,"C"};
       }
       else
       {
           return {-1,""};
       }
    }
   
    string pattern(vector<vector<int>> &arr) {
        // Code Here
        vector<int>v1,v2;
        int i,j;
        pair<int,string> ans={INT_MIN,""};
        for(i=0;i<arr.size();i++)
        {
            v1.clear();
            v2.clear();
            for(j=0;j<arr[0].size();j++)
            {
                v1.push_back(arr[i][j]);
                v2.push_back(arr[j][i]);
            }
            pair<int,string> p = check(v1,v2,i);
            // cout<<"i="<<i<<" p="<<p.first<<" , "<<p.second<<endl;
            if(p.first != -1)
            {
               if(ans.second == "")
               {
                   ans=p;
               }
               else if(ans.second == p.second)
               {
                   if(ans.first>p.first)
                   {
                       ans.first=p.first;
                   }
               }
               else if(ans.first == p.first)
               {
                   if(ans.second == "C" && p.second == "R")
                   {
                       ans.second = p.second;
                   }
               }
               else
               {
                   if(p.second == "R")
                   {
                       ans=p;
                   }
               }
            }
        }
        if(ans.second != "")
        return (to_string(ans.first)+" "+ans.second);
        else
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends
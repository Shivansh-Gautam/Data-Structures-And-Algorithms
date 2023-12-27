//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
          vector<int>res;
  
        int n= matrix.size();
        
        vector<int>adj[2*n-1];
        
        for(int i=0;i<n;i++){
    
            for(int j=0;j<n;j++){
                
               int sum = i+j;
 
                adj[sum].push_back(matrix[i][j]);
 
            }
   
        }
      
      for(int i=0;i<2*n-1;i++){
          
          vector<int>temp=adj[i];
          
          for(auto it :temp)
                res.push_back(it);
          
      }
      
      
      return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
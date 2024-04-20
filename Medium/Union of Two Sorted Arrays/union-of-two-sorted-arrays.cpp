//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>ans;
        ans.push_back(min(arr1[0],arr2[0]));
        int i=0; 
        int j=0;
        while(i<n && j<m){
            if(arr1[i] != ans.back() && arr2[j] != ans.back()){
                if(arr1[i] < arr2[j]){
                    ans.push_back(arr1[i]);
                    i++;
                }
                else if(arr1[i] > arr2[j]){
                    ans.push_back(arr2[j]);
                    j++;
                }
                else{
                    ans.push_back(arr1[i]);
                    i++;
                    j++;
                }
            }
            else if(arr1[i] == ans.back() && arr2[j] != ans.back()){
                i++;                
            }
            else if(arr1[i] != ans.back() && arr2[j] == ans.back()){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        
        while(i<n){
            if(arr1[i] != ans.back()) ans.push_back(arr1[i]);
            i++;
        }
        
        while(j<m){
            if(arr2[j] != ans.back()) ans.push_back(arr2[j]);
            j++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
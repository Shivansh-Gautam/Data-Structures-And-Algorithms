//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
           int n=arr.size();
        int maxi=-1,sec_max=-1;
       // sort(arr.begin(),arr.end());
         for(int i=0;i<n;i++){
            // find the largest and second largest element

            if(maxi<arr[i]){
                sec_max=maxi;
                maxi=arr[i];
             }
             else if(sec_max<arr[i] && arr[i]!=maxi) sec_max=arr[i]; // second element should               //be not equal to largest one
              
         }
        return sec_max;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
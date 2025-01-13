//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
          int n=arr.size();
        if (n <= 1) 
            return 0;
        int maxDist=INT_MIN;
        int left=0,right=n-1;
        while(left<right)
        {
            int sum=min(arr[left],arr[right])*(right-left);
            maxDist=max(maxDist,sum);
            if(arr[left]<arr[right])
                left++;
            else
                right--;
        }
        return maxDist;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
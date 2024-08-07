//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
          int ptr_first = 0;
        int ptr_second = 0;
        int curr_element;
        int temp = k;
        
        while(ptr_first < arr1.size() && ptr_second < arr2.size()){
            if(arr1[ptr_first] < arr2[ptr_second]){
                curr_element = arr1[ptr_first++];
            }
            else{
                curr_element = arr2[ptr_second++];
            }
            k--;
            
            if(k == 0){
                return curr_element;
            }
            
        }
        
        while(ptr_first < arr1.size()){
            curr_element = arr1[ptr_first++];
            k--;
            if(k == 0){
                return curr_element;
            }
        }
        
        while(ptr_second < arr2.size()){
            curr_element = arr2[ptr_second++];
            k--;
            if(k == 0){
                return curr_element;
            }
        }
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends
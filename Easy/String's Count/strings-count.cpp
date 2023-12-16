//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


long long int countStr(long long int n){
    //complete the function here
     #define ll long long
    ll all_a_s = 1;
    ll one_b_rest_a = n;
    ll one_c_rest_a = n;
    ll one_b_one_c_rest_a = n*(n-1);
    ll two_c_rest_a = n*(n-1)/2;
    ll two_c_one_b_rest_a = n*(n-1)*(n-2)/2;
    
    return all_a_s + one_b_rest_a + one_c_rest_a + one_b_one_c_rest_a + two_c_rest_a + 
            two_c_one_b_rest_a;
}
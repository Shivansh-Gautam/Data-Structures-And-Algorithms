class Solution {
public:
    int numberOfSubstrings(string s) {
        int l = 0;
        int r = 0;
        int count = 0;
        unordered_map<char,int> mp;
        int n = s.length();
        while( r < n){
            mp[s[r]]++;
            while(mp['a'] >= 1 && mp['b'] >= 1 && mp['c'] >= 1){
                 
                 count = count + (n - r);

                
                mp[s[l]]--;
                l++;
            }
             r++;
        }
        return count;
    }
};
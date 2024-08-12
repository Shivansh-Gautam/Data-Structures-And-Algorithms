class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0;
        int l = 0;
        int r = 0;
        int maxf = 0;
        unordered_map<char,int> m;

        while(r < s.length()){
            m[s[r]]++;
            maxf = max(maxf,m[s[r]]);

            if((r - l + 1) - maxf > k){
                m[s[l]]--;
                l++;
            }
            else{
                ans = max(ans,r - l + 1);
            }
            r++;
        }
        return ans;
    }
};
class Solution {
public:
    int maxProduct(vector<int>& nums) {
         __int128_t n = nums.size();
        if(n==0) return 0;
        __int128_t pre = 1, suff = 1, ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (pre == 0) pre = 1;
            if (suff == 0) suff = 1;
            pre *= nums[i];
            suff *= nums[n - i - 1];
            ans = max(ans, max(pre, suff));
        }
        return ans;
    }
};
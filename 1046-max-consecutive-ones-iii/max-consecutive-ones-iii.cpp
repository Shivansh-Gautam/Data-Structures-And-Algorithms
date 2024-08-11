class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        int ones = 0;
        int i = 0;

        for(int j = 0; j < nums.size(); j++){
            if(nums[j] == 0) k--;
            ones++;

            while(k < 0){
                if(nums[i] == 0) k++;
                ones--;
                i++;
            }
            ans = max(ans, ones);
        }
        return ans;
    }
};
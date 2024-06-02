class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 1;
        int ans = 0;
        if(nums.size()==0) return 0;
        for(int i=1;i<nums.size();i++){
          if(nums[i]!=nums[i-1]){
            if(nums[i]==nums[i-1]+1){
                cnt++;
            }
            else{
                ans = max(ans,cnt);
                cnt=1;
            }
          }
    }
    return max(ans,cnt);
    }
};
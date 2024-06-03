class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
       

        if(nums.empty() || nums.size() < 3) return {};
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            int left = i+1;
            int right = nums.size()-1;

            while(left < right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum == 0){
                    st.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum < 0) left++;
                else right--;
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};
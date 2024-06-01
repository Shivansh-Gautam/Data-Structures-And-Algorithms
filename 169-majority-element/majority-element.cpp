class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int num = 0;
        for(int i = 0; i < nums.size(); i++){
            if(cnt == 0){
                 num = nums[i];
            }
            if(nums[i]==num) cnt++;
            else cnt--;
        }
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num) count++;
        }
        if(count>(nums.size()/2)){
            return num;
        }

        return -1;
    }
};
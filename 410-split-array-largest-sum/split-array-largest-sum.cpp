class Solution {
public:
    int noOfWays(vector<int>& nums, int mid){
        int sum = 0;
        int std = 1;
        for(int i = 0; i < nums.size(); i++){
            if( sum + nums[i] <= mid){
                sum += nums[i];
            }
            else{
                std++;
                sum = nums[i];
            }
        }
        return std;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low <= high){
            int mid = ( low + high ) / 2;
            int ways = noOfWays(nums,mid);
            if(ways <= k) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool isLeft){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;

        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]>target){
                high = mid - 1;
            }
            else if(nums[mid]<target){
                low = mid + 1;
            }
            else{
                ans = mid;
                if(isLeft){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binarySearch(nums,target,true);
        int right = binarySearch(nums,target,false);

        return {left,right}
        ;
    }
};
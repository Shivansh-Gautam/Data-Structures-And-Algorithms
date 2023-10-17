class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s-(s-e)/2;
        while(s<=e){
            if(target==nums[mid]) return mid;
            else if(target<nums[mid]){
                e = mid -1;
            }
            else if(target>nums[mid]){
                s = mid + 1;
            }
           mid=s-(s-e)/2;
        }
         return -1;
    }
};
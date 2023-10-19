class Solution {
public:
    int firstPosition(vector<int>&nums , int n, int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int position = -1;
    while(s<=e){
        if(nums[mid]==k){
            position = mid;
            e=mid-1;
        }
        else if(nums[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return position;
}
int lastPosition(vector<int>&nums , int n, int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int position = -1;
    while(s<=e){
        if(nums[mid]==k){
            position = mid;
            s=mid+1;
        }
        else if(nums[mid]<k){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return position;
}
    vector<int> searchRange(vector<int>& nums, int target) {
         int n=nums.size();
         int k=target;
         int first= firstPosition(nums,n,k);
         int last= lastPosition(nums,n,k);
     vector<int> result;
     result.push_back(first);
     result.push_back(last);
     return result;
    }
};
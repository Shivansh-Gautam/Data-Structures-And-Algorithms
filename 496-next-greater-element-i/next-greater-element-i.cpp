class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
       vector<int> res(n,-1);
       stack<int> s;
       unordered_map<int,int> m;

       for(int it : nums2){
        while(!s.empty() && s.top() < it){
            m[s.top()] = it;
            s.pop();
        }
        s.push(it);
       }

       for(int i = 0; i < n; i++){
        if(m[nums1[i]]) res[i] = m[nums1[i]];
       
       }
        return res;
    }
};
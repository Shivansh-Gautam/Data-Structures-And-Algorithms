class Solution {
public:
    bool possible(vector<int>& bloomDay, int m, int k, int day){
        int cnt = 0, ans = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if( bloomDay[i] <= day ){
                cnt++;
            }
            else{
                ans += cnt/k;
                cnt=0;
            }
        }
        ans += cnt/k;
        return ans>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        long long val = m * 1ll * k * 1ll;
        if(val>bloomDay.size()) return -1;
        while(low<=high){
            int mid = (low + high) / 2;
            

            if(possible(bloomDay,m,k,mid)==true) high=mid-1;
            else low = mid + 1;
        }
        return low;
    }
};
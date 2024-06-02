class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int miniprice = INT_MAX;

        for(int i = 0; i < prices.size(); i++){
            miniprice = min(miniprice,prices[i]);
            maxpro = max(maxpro,prices[i]-miniprice);
        }
        return maxpro;
    }
};
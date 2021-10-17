class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit;
        int low = INT_MAX;
        int high =0;
       for(int i=0;i<prices.size();i++){
           low=min(low,prices[i]);
           high=max(high,prices[i]-low);
            }
        return high;
        }
};

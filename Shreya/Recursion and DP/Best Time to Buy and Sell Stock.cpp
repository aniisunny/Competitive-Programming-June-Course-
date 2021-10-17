class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm = prices[0];
        int profit{};
        for(int i=1;i<prices.size();i++)
        {
            minm = min(prices[i],minm);
            profit = max(profit, prices[i]-minm);
        }
        return profit;
    }
};
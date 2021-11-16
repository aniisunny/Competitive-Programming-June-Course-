class Solution {
public:
    int maxProfit(vector<int>& prices) {

		int profit = 0;
        int minp = INT_MAX;
        for(int i=0; i<prices.size();i++){
            minp=min(minp,prices[i]);
            profit=max(profit,prices[i]-minp);
        }
        return profit;
	}
};
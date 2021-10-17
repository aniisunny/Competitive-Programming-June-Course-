class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size() == 0 || prices.size() == 1)
        {
            return 0;
        } 
        int minm = prices[0], maxprof = 0; 
        for (int i = 0 ; i<prices.size(); i++)
        {
            minm = min(minm,prices[i]);
            maxprof = max(maxprof , prices[i]-minm);
        }
        return maxprof;
    }
};
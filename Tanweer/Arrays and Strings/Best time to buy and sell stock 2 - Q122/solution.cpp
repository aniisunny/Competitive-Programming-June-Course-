class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size() == 0 || prices.size() == 1)
        {
            return 0;
        }
        else if(prices.size()==2)
        {
            return max(0,prices[1]-prices[0]);
        }
        int minm = prices[0] , maxprof = 0; 
        for(int i = 1 ; i<prices.size() ; i++)
        {
            if(prices[i]<prices[i-1])
            {
                 maxprof += (prices[i-1]-minm);
                 minm = prices[i];
            }
            if (i==(prices.size()-1))
            {
                maxprof += (prices[i]-minm);
            }
        }
        
        return maxprof;
    }
};
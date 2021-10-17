class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=INT_MAX;
        for(auto x:prices)
        {
            if(x<minprice)
                minprice=x;
            else
            {
                if(maxprofit<x-minprice)
                    maxprofit=x-minprice;
            }
        }
        return maxprofit;
    }
};

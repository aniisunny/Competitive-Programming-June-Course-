class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = 10001;
        int maxprofit = 0;
        for(auto price:prices){
            if(price <= minprice)
                minprice = price;
            else{
                maxprofit += price-minprice;
                minprice = price;
            }
        }
        return maxprofit;
    }
};

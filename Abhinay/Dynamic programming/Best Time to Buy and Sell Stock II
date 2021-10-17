class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int ans = 0;
        for(auto price : prices){
            if(price < minPrice)
                minPrice = price;
            else if(price - minPrice > ans)
                ans = price - minPrice;
        }
        return ans;
    }
};

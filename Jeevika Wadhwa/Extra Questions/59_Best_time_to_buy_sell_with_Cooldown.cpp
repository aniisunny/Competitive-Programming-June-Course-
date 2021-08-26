class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sold = INT_MIN, held = INT_MIN, reset = 0;
        for(auto price : prices){
            int presold = sold;
            sold = held + price;
            held = max(held, reset - price);
            reset = max(reset, presold);
        }
        return max(sold, reset);
    }
};

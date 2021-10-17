class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<long>dp(amount+1, INT_MAX);
        dp[0] = 0;
        for(int i = 0; i<coins.size(); i++){
            for(int j = coins[i]; j<=amount; j++){
                dp[j] = min(dp[j], dp[j-coins[i]]+1);
            }
        }
        return dp[amount] == INT_MAX ? -1 : dp[amount];
    }
};

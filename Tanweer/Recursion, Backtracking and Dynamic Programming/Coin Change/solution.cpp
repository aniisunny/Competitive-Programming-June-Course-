class Solution 
{
private:
    long helper(vector<long>& dp , vector<int>& coins, int amount)
    {
        if(amount == 0)
        {
            return 0;
        }
        if(amount < 0)
        {
            return INT_MAX;
        }
        if(dp[amount] != -1)
        {
            return dp[amount];
        }
        
        long res = INT_MAX;
        
        for(int i = 0 ; i<coins.size() ; i++)
        {
            long ans = 1 + helper(dp , coins , amount-coins[i]);
            res = min(res,ans);
        }
        
        dp[amount] = res;
        
        return dp[amount];
    }
    
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<long> dp(amount+1 , -1);
        dp[0] = 0;
        helper(dp , coins , amount);
        if (dp[amount] == INT_MAX)
        {
            return -1;
        }
        return dp[amount];
    }
};
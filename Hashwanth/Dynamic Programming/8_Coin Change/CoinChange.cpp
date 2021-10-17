class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1];
        for(int i=0;i<=amount;i++)
            dp[i]=amount+1;
        dp[0]=0;
        for(int i=1;i<amount+1;i++)
        {
            for(auto x:coins)
            {
                if(x>i) 
                    continue;
                else
                {
                    dp[i]=min(1+dp[i-x],dp[i]);
                }
                
            }
        }
        return dp[amount]>amount?-1:dp[amount];
    }
};

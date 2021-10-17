class Solution {
public:
    int coinChange(vector<int>& coins, int amt) {
        
        long n=coins.size();
        vector<int>dp(amt+1,1e6);
        dp[0]=0;
        
        for(int i=1;i<=n;i++)
          for(int j=1;j<=amt;j++)
            if(coins[i-1]<=j)  
             dp[j]=min(dp[j-coins[i-1]]+1,dp[j]);
        
        return dp[amt]==1e6?-1:dp[amt];    
    }
};

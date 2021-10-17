class Solution {
    public int coinChange(int[] coins, int amount) {
        if(amount==0)
        {
            return 0;
        }
       
        int n=coins.length;
        int[][] dp=new int[n+1][amount+1];
        
        for(int i=1;i<=amount;i++)
        {
            dp[0][i]=100000;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]>j)
                    dp[i][j]=dp[i-1][j]; 
                

                else
                dp[i][j]=Math.min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
            }
        }
         if(dp[n][amount]>=100000)
         {
             return -1;
         }
        else
            return dp[n][amount];
        
    }
}

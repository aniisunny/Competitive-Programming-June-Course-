class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int m=coins.size()+1;
        int n=amount+1;
        int dp[m][n];
            for(int j=1;j<n;j++)
                dp[0][j]=0;
            
        dp[0][0]=1;
       
        for(int i=1;i<m;i++)
        {    dp[i][0]=1;
            for(int j=1;j<n;j++)
            {
                 if(coins[i-1]>j)
                     dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];

            }
        }
        return dp[m-1][n-1];
        
    }
};

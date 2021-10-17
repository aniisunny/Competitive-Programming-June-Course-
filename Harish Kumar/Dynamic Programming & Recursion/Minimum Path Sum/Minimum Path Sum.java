class Solution {
    public int minPathSum(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        
        int dp[][] = new int[m][n];
       
        for(int i = m -1;i >= 0;i--)
        {
            for(int j = n -1; j >=0;j--)
            {
                if(i == dp.length -1 && j == dp[0].length -1)
                {
                    dp[i][j] = grid[i][j];
                }
                else if(i == dp.length - 1)
                {
                    dp[i][j] = dp[i][j+1] + grid[i][j];
                }
                else if( j == dp[0].length-1)
                {
                    dp[i][j] = dp[i+1][j] + grid[i][j];
                }
                else
                {
                    dp[i][j] = Math.min(dp[i+1][j], dp[i][j+1])+ grid[i][j];
                }
            }
        }
        
        return dp[0][0];
    }
}

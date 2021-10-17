class Solution {
    public int minFallingPathSum(int[][] matrix) {
        
        int r = matrix.length;
        int c = matrix[0].length;
        int dp[][] = new int[r][c];
        
        int ans = Integer.MAX_VALUE;
        
        for(int i = 0; i< c; i++)
        {
            ans = Math.min(ans,helper(0,i,matrix,dp));
        }
        
        return ans;
    }
    
    public static int helper(int i, int j, int matrix[][], int dp[][])
    {
        int r = matrix.length;
        int c = matrix[0].length;
        
        if(i == r)
        {
            return 0;
        }
        
        if(j < 0 || j >= c)
        {
            return Integer.MAX_VALUE;
        }
        if(dp[i][j] != 0)
        {
            return dp[i][j];
        }
        
        int op1 = helper(i+1,j-1,matrix,dp);
        int op2 = helper(i+1,j,matrix,dp);
        int op3 = helper(i+1,j+1,matrix,dp);
        
        dp[i][j] =  matrix[i][j] + Math.min(op1,Math.min(op2,op3));
        return dp[i][j];
    }
}

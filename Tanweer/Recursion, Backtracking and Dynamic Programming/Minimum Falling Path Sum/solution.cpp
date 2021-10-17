class Solution {
public:
    long helper(vector<vector<int>>& matrix , vector<vector<long>>& dp , int row , int col)
    {
        if(row == matrix.size())
        {
            return 0;
        }
        if(col < 0 || col >= matrix[0].size() )
        {
            return INT_MAX;
        }
        if(dp[row][col] != INT_MAX)
        {
            return dp[row][col];
        }
        
        long ans = INT_MAX;
        
        ans = min(ans , matrix[row][col] + helper(matrix , dp , row+1 , col + 1));
        ans = min(ans , matrix[row][col] + helper(matrix , dp , row+1 , col - 1));
        ans = min(ans , matrix[row][col] + helper(matrix , dp , row+1 , col));
        
        dp[row][col] = ans;
        
        return ans;
        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        long res = INT_MAX;
        vector<vector<long>> dp(matrix.size() , vector<long>(matrix[0].size() , INT_MAX));
        for(int i = 0 ; i<matrix[0].size() ; i++)
        {
            res = min(res, helper(matrix, dp , 0 , i));
        }
        return int(res);
    }
};
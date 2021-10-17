class Solution 
{
public:
    
    int helper(int& m, int& n, int i, int j, int& maxmove, int counter, vector<vector<vector<int>>>& dp)
    {
        if(counter>maxmove)
        {
            return 0;
        }
        if(i<0 || j<0 || i>=m || j>=n)
        {
            return 1;
        }
        if(dp[i][j][counter] != -1)
        {
            return dp[i][j][counter] %1000000007;
        }
        
        int p = counter+1, tempVal = 0;
        
        tempVal = (tempVal + helper(m,n,i+1,j,maxmove,p,dp))%1000000007;
        tempVal = (tempVal + helper(m,n,i-1,j,maxmove,p,dp))%1000000007;
        tempVal = (tempVal + helper(m,n,i,j+1,maxmove,p,dp))%1000000007;
        tempVal = (tempVal + helper(m,n,i,j-1,maxmove,p,dp))%1000000007;
        
        dp[i][j][counter] = tempVal;
        
        return dp[i][j][counter] % 1000000007;

    }
    
    int findPaths(int& m, int& n, int maxMove, int startRow, int startColumn) 
    {
        if(maxMove == 0)
        {
            return 0;
        }
        
        vector<vector<vector<int>>> dp(m + 1, vector<vector<int>> (n + 1, vector<int> (maxMove + 1, -1)));

        return helper(m,n,startRow,startColumn,maxMove,0,dp);
    }
};
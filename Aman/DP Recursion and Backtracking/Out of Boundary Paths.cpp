class Solution { 
public:
    
    int mod=1e9+7, dp[51][51][51];
    
    int dfs(int m,int n,int mxmv,int r,int c)
    {
        if(r<0 || r>=m || c<0 || c>=n)
            return 1;
        
        if(mxmv<=0)
            return 0;
        
        if(dp[r][c][mxmv]!=-1)
          return dp[r][c][mxmv];
        
        int w1=dfs(m, n, mxmv-1, r+1, c)%mod;
        int w2=dfs(m, n, mxmv-1, r, c+1)%mod;
        int w3=dfs(m, n, mxmv-1, r-1, c)%mod;
        int w4=dfs(m, n, mxmv-1, r, c-1)%mod;
        
        dp[r][c][mxmv]=((((w1+w2)%mod + w3)%mod)+w4)%mod;
        return dp[r][c][mxmv];
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int res=0;
        memset(dp, -1, sizeof(dp));
        res=dfs(m , n, maxMove, startRow, startColumn);
        return res;
    }
};

class Solution {
public:
    int M = 1e9+7;
    int dp[51][51][51];
    int path(int m, int n, int maxMove, int i, int j){
        if(i < 0 || i == m || j < 0 || j == n)
            return 1;
        if(maxMove <= 0)
            return 0;
        if(dp[i][j][maxMove] != -1)
            return dp[i][j][maxMove];
        int ans = 0;
        ans = (ans + path(m,n,maxMove-1,i+1,j)) % M;
        ans = (ans + path(m,n,maxMove-1,i,j+1)) % M;
        ans = (ans + path(m,n,maxMove-1,i-1,j)) % M;
        ans = (ans + path(m,n,maxMove-1,i,j-1)) % M;
        
        return dp[i][j][maxMove] = ans % M;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp, -1, sizeof(dp));
        return path(m,n,maxMove,startRow,startColumn);
    }
};

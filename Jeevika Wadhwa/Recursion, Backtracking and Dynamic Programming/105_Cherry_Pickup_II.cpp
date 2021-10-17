class Solution {
public:
    int dp[71][71][71];
    int cherry(vector<vector<int>>& g, int row, int col1, int col2){
        if(row < 0 || row == g.size() || col1 < 0 || col2 < 0 || col1 == g[0].size() || col2 == g[0].size() || col1 == col2)
            return 0;
        if(dp[row][col1][col2] != -1)
            return dp[row][col1][col2];
        int ans = cherry(g, row+1, col1-1, col2-1);
        ans = max(ans, cherry(g, row+1, col1-1, col2));
        ans = max(ans, cherry(g, row+1, col1-1, col2+1));
        ans = max(ans, cherry(g, row+1, col1, col2-1));
        ans = max(ans, cherry(g, row+1, col1, col2));
        ans = max(ans, cherry(g, row+1, col1, col2+1));
        ans = max(ans, cherry(g, row+1, col1+1, col2-1));
        ans = max(ans, cherry(g, row+1, col1+1, col2));
        ans = max(ans, cherry(g, row+1, col1+1, col2+1));
        int cur = g[row][col1] + g[row][col2];
        ans += cur;
        return dp[row][col1][col2] = ans;        
    }
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp, -1, sizeof(dp));
        return cherry(grid, 0, 0, grid[0].size()-1);
    }
};

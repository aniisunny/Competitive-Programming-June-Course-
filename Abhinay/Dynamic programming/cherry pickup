class Solution {
public:
    int dp[51][51][51];
    int cherry(vector<vector<int>>& grid, int row1, int col1, int col2){
        int n = grid.size();
        int row2 = row1 + col1 - col2;
        if(row1 == n || row2 == n || col1 == n || col2 == n || grid[row1][col1] == -1 || grid[row2][col2] == -1)
            return INT_MIN;
        if(row1 == n-1 && col1 == n-1)
            return grid[row1][col1];
        if(dp[row1][col1][col2] != 0)
            return dp[row1][col1][col2];
        int ans = grid[row1][col1] + (col1 == col2 ? 0 : grid[row2][col2]);
        int maximum = max(cherry(grid, row1+1, col1, col2), cherry(grid, row1, col1+1, col2+1));
        maximum = max(maximum, cherry(grid, row1+1, col1, col2+1));
        maximum = max(maximum, cherry(grid, row1, col1+1, col2));
        return dp[row1][col1][col2] = ans + maximum;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp, 0, sizeof(dp));
        return max(0, cherry(grid, 0, 0, 0));
    }
};

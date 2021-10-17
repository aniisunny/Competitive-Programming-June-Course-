class Solution {
public:
    int dfs(vector<vector<int>>& matrix, int i, int j, int row, int col, vector<vector<int>>& dp){
        if(dp[i][j] != -1)return dp[i][j];
        int maxpath = 1;
        if(i > 0 && matrix[i][j] < matrix[i-1][j])
            maxpath = max(maxpath, 1 + dfs(matrix, i-1, j, row, col, dp));
        if(j > 0 && matrix[i][j] < matrix[i][j-1])
            maxpath = max(maxpath, 1 + dfs(matrix, i, j-1, row, col, dp));
        if(i+1 < row && matrix[i][j] < matrix[i+1][j])
            maxpath = max(maxpath, 1 + dfs(matrix, i+1, j, row, col, dp));
        if(j+1 < col && matrix[i][j] < matrix[i][j+1])
            maxpath = max(maxpath, 1 + dfs(matrix, i, j+1, row, col, dp));
        return dp[i][j] = maxpath;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int ans = 0;
        vector<vector<int>>dp(n, vector<int>(m, -1));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                ans = max(ans, dfs(matrix, i, j, n, m, dp));
            }
        }
        return ans;
    }
};

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid)
    {
        for(int col = 1; col<grid[0].size(); col++)
        {
            grid[0][col] += grid[0][col-1];
        }
        for(int row = 1; row<grid.size(); row++)
        {
            grid[row][0] += grid[row-1][0];
        }
        for (int row = 1 ; row < grid.size() ; row++)
        {
            for(int col = 1 ; col<grid[0].size() ; col++)
            {
                grid[row][col] += min(grid[row-1][col] , grid[row][col-1]);
            }
        }
        
        return grid[grid.size()-1][grid[0].size()-1];
    }
};
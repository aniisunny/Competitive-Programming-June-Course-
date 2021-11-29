class Solution {
public:
    int countArea(vector<vector<int>>& grid, int x, int y) {
        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size()) return 0;
        if (grid[x][y]==0) return 0;
        grid[x][y] = 0;
        return 1 + countArea(grid, x - 1, y) 
                 + countArea(grid, x + 1, y)
                 + countArea(grid, x, y - 1)
                 + countArea(grid, x, y + 1);
    }
        
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j])
                    max_area = std::max(countArea(grid, i, j), max_area);
            }
        }
        
        return max_area;
    }
};

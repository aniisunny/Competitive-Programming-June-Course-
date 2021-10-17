class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) 
    {
        if(grid[0][0] == 1 || grid[grid.size()-1][grid[0].size()-1] == 1)
        {
            return 0;
        }
        if(grid.size() == 1 && grid[0].size() == 1)
        {
            return 1;
        }
        bool val = true;
        for(int i = 1 ; i<grid[0].size() ; i++)
        {
            if(val == true)
            {
                if(grid[0][i] == 0)
                {
                    grid[0][i] = 1;
                }
                else
                {
                    val = false;
                    grid[0][i] = 0;
                }
            }
            else
            {
                grid[0][i] = 0;
            }
        }
        val = true;
        for(int i = 1 ; i<grid.size() ; i++)
        {
            if(val == true)
            {
                if(grid[i][0] == 0)
                {
                    grid[i][0] = 1;
                }
                else if(grid[i][0] == 1)
                {
                    val = false;
                    grid[i][0] = 0;
                }
            }
            else
            {
                grid[i][0] = 0;
            }
        }
        for(int i = 1 ; i<grid.size() ; i++)
        {
            for(int j = 1 ; j<grid[0].size() ; j++)
            {
                if(grid[i][j] == 0)
                {
                    grid[i][j] = grid[i-1][j] + grid[i][j-1];
                }
                else
                {
                    grid[i][j] = 0;
                }
            }
        }
        return grid[grid.size()-1][grid[0].size()-1];
    }
};
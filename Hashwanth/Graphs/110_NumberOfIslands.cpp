class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int c=0;
        if(grid.size()==0)
            return 0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    c++;
                    dfs(grid,i,j);
                }
            }
        }
        return c;
    }
    void dfs(vector<vector<char>>& grid, int i, int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0')
            return;
        grid[i][j]='0';
        dfs(grid,i-1,j); //top
        dfs(grid,i+1,j); //down
        dfs(grid,i,j+1); //right
        dfs(grid,i,j-1); //left
    }
};

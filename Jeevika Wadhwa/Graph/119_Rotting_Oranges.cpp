class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int freshOranges = 0;
        queue<pair<int,int>>q;
        int n = grid.size(), m = grid[0].size();
        for(int i = 0; i<n; i++)
            for(int j = 0; j<m; j++)
                if(grid[i][j] == 1)
                    freshOranges++;
                else if(grid[i][j] == 2)
                    q.push({i, j});
        int minutes = 0;
        vector<vector<int>>directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while(freshOranges != 0 && q.empty() == false){
            int size = q.size();
            minutes++;
            while(size--){
                auto pair = q.front(); q.pop();
                for(auto direction : directions){
                    int x = pair.first + direction[0];
                    int y = pair.second + direction[1];
                    if(x >= 0 && y >=0 && x < n && y < m && grid[x][y] == 1){
                        grid[x][y] = 2;
                        freshOranges--;
                        q.push({x, y});
                    }
                }
            }
        }
        if(freshOranges == 0)
            return minutes;
        return -1;
    }
};

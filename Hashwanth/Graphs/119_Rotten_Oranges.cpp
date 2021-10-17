class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int freshOranges=0;
        queue<pair<int,int>> q;
        if(grid.size()==0) return -1;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                    freshOranges++;
                else if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        int minutes=0;
        vector<pair<int,int>> directions={{1,0},{0,1},{-1,0},{0,-1}};//down,right,top,left
        while(!q.empty() && freshOranges>0)
        {   minutes++;  //as multiple oranges may get rotten in a single iteration
            int size=q.size();
            for(int i=0;i<size;i++) 
            {
              pair<int,int>  p=q.front(); 
                q.pop();
              for(auto dir:directions)
              {
                  int newI=dir.first+p.first;
                  int newJ=dir.second+p.second;
                  if(newI<0 || newJ<0 || newI>=m || newJ>=n || grid[newI][newJ]==0 || grid[newI][newJ]==2)
                      continue;
                  else
                  {   
                      freshOranges--;
                      q.push({newI,newJ});
                      grid[newI][newJ]=2;
                  }
              }
            }
        }
        if(freshOranges==0) return minutes;
        return -1;
    }
};

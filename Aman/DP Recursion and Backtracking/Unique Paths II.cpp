class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        int n=og.size(),m=og[0].size();
        if(og[0][0]==1)
            return 0;
        og[0][0]=1;
        for(int i=1;i<m;i++)
        {
            if(og[0][i]==1)
              og[0][i]=0;
            else
              og[0][i]=og[0][i-1];
        }
          
        for(int i=1;i<n;i++)
        {
             if(og[i][0]==1)
              og[i][0]=0;
             else
              og[i][0]=og[i-1][0];
        }
            
        for(int i=1;i<n;i++){
          for(int j=1;j<m;j++)
            if(og[i][j]==1)
              og[i][j]=0;
             else
               og[i][j]=og[i][j-1]+og[i-1][j]; 
             
        }
        return og[n-1][m-1];
    }
};

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size(),res=INT_MAX;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(j==0)
                   mat[i][j]+=min(mat[i-1][j],mat[i-1][j+1]);
               else if(j==m-1)
                   mat[i][j]+=min(mat[i-1][j],mat[i-1][j-1]);
               else
                   mat[i][j]+=min({mat[i-1][j-1],mat[i-1][j],mat[i-1][j+1]});
            }
        }
        
        for(int j=0;j<m;j++)
          res=min(res,mat[n-1][j]);
        
        return res;
    }
};

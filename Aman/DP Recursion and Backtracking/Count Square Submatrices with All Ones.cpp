class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        int n=matrix.size(),m=matrix[0].size(),res=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0)
                 matrix[i][j]=matrix[i][j];
                else if(matrix[i][j]==1)
                  matrix[i][j]=min({matrix[i-1][j-1],matrix[i][j-1],matrix[i-1][j]})+1;
                
               res+= matrix[i][j];
            }
        }
        return res;
    }
};

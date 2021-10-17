class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row,col;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(auto x:row)
        {
            for(int j=0;j<n;j++)
                matrix[x][j]=0;
        }
           for(auto x:col)
        {
            for(int j=0;j<m;j++)
                matrix[j][x]=0;
        }
        
        // return matrix;
        
    }
};

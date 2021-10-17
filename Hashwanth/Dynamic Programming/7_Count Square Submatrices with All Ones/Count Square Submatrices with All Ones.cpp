class Solution {
public:
   
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int c=0;
        //edge cases  (1st row, 1st col)
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]==1) c++;
        }
        for(int j=1;j<n;j++)
        {
            if(matrix[0][j]==1) c++;
        }
        //
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==1)
                {
                    int no_of_squares=1+min(min(matrix[i-1][j],matrix[i][j-1]),matrix[i-1][j-1]);
                    matrix[i][j]=no_of_squares;
                    c+=no_of_squares;
                }
            }
        }
        return c;
    }
};

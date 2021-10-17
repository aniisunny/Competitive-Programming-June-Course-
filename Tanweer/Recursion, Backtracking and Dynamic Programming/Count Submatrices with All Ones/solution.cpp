class Solution {
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int countSquares(vector<vector<int>>& matrix) 
    {
      int sum{};
      for(int i=1; i<matrix.size(); i++)
      {
          for(int j=1; j<matrix[0].size(); j++)
          {
              if (matrix[i][j]==1)
              {
           matrix[i][j] = min(matrix[i-1][j],min(matrix[i-1][j-1],matrix[i][j-1]))+1;
                  sum+=matrix[i][j];
              }
          }
      }
        for(int i=0;i<matrix.size();i++)
        {
            sum+=matrix[i][0];
        }
        for(int i=0;i<matrix[0].size();i++)
        {
            sum+=matrix[0][i];
        }
        return sum-matrix[0][0];
    }
};
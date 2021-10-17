class Solution {
    public int countSquares(int[][] matrix) {
              int res = 0;
        
        for(int i = 0; i < matrix.length; i++ )
        {
            for(int j = 0; j < matrix[0].length; j++)
            {
                if(matrix[i][j] == 0)
                {
                    continue;
                }
                if( i>= 1 && j >=1)
                {
                    matrix[i][j] = matrix[i][j] + Math.min(matrix[i-1][j-1], Math.min(matrix[i-1][j], matrix[i][j-1]));
                }
                
                res += matrix[i][j];
            }
        }
        return res;
    }
}

/*
 * @lc app=leetcode id=48 lang=java
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
    public void rotate(int[][] matrix) {
        int rows=matrix.length;
        int cols=matrix[0].length;
        
        for(int i=0;i<rows;i++)
        {
            for(int j=i;j<rows;j++)
            {
                int temp=matrix[i][j];         //transpose 
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<rows/2;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][matrix.length-1-j];   //reverse
                matrix[i][matrix.length-1-j]=temp;
            }
        }
    }
}
// @lc code=end


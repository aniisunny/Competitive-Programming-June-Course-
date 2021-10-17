/*
 * @lc app=leetcode id=54 lang=java
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> ans=new ArrayList<>();
        int cend=matrix[0].length-1;
        int rend=matrix.length-1;
        int rstart=0;
        int cstart=0;
        
        while(rstart<=rend && cstart<=cend)
        {
            for(int i=cstart;i<=cend;i++)
        {
            ans.add(matrix[rstart][i]);
        }
        rstart++;
        
        for(int i=rstart;i<=rend;i++)
        {
            ans.add(matrix[i][cend]);
        }
        cend--;
            
        if(rstart<=rend && cstart<=cend)
        {
             for(int i=cend;i>=cstart;i--)
        {
            ans.add(matrix[rend][i]);
        }
        rend--;
        }
            
         if(rstart<=rend && cstart<=cend)
         {
              for(int i=rend;i>=rstart;i--)
        {
            ans.add(matrix[i][cstart]);
        }
        cstart++;
        }
        
         }
       
        
       
        return ans;
    }
}
// @lc code=end


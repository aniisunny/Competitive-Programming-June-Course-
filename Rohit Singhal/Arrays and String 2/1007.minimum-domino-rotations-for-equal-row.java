/*
 * @lc app=leetcode id=1007 lang=java
 *
 * [1007] Minimum Domino Rotations For Equal Row
 */

// @lc code=start
class Solution {
    public int minDominoRotations(int[] tops, int[] bottoms) {
        int val1=tops[0];
        int val2=bottoms[0];
        int count1=0;
         int count2=0;
         int count3=0;
         int count4=0;
        for(int i=0;i<tops.length;i++)
        {
            //val1 for tops
            if(count1!=Integer.MAX_VALUE && tops[i]!=val1)
            {
                if(bottoms[i]==val1)
                {
                 count1++;   
                }
                else
                {
                    count1=Integer.MAX_VALUE;
                }
            }
            
            //val2 for tops
            if(count2!=Integer.MAX_VALUE && tops[i]!=val2)
            {
                if(bottoms[i]==val2)
                {
                 count2++;   
                }
                else
                {
                    count2=Integer.MAX_VALUE;
                }
            }
            
            //val1 for bottoms 
            
            if(count3!=Integer.MAX_VALUE && bottoms[i]!=val1)
            {
                if(tops[i]==val1)
                {
                 count3++;   
                }
                else
                {
                    count3=Integer.MAX_VALUE;
                }
            }
            
            //val2 for bottoms
            if(count4!=Integer.MAX_VALUE && bottoms[i]!=val2)
            {
                if(tops[i]==val2)
                {
                 count4++;   
                }
                else
                {
                    count4=Integer.MAX_VALUE;
                }
            }
        }
        
        int ans=Math.min(count1,Math.min(count2,Math.min(count3,count4)));
        if(ans==Integer.MAX_VALUE)
            return -1;
        
        return ans;
        
    }
}
// @lc code=end


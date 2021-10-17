/*
 * @lc app=leetcode id=849 lang=java
 *
 * [849] Maximize Distance to Closest Person
 */

// @lc code=start
class Solution {
    public int maxDistToClosest(int[] seats) {
        int[] left=new int[seats.length];
        int[] right=new int[seats.length];
        int k=Integer.MAX_VALUE;
        for(int i=0;i<seats.length;i++)
        {
            if(seats[i]==1)
            {
                left[i]=Integer.MIN_VALUE;
                k=i;
            }
            else
            {
                if(k==Integer.MAX_VALUE)
                {
                    left[i]=k;
                }
                else
                left[i]=i-k;
            }
        }
        
        k=Integer.MAX_VALUE;
        for(int i=seats.length-1;i>=0;i--)
        {
            if(seats[i]==1)
            {
                right[i]=Integer.MIN_VALUE;
                k=i;
            }
            else
            {
                if(k==Integer.MAX_VALUE)
                {
                    right[i]=k;
                }
                else
                right[i]=k-i;
            }
        }
        
        int ans=Integer.MIN_VALUE;
            
          for(int i=0;i<seats.length;i++)
          {
              ans=Math.max(ans,Math.min(left[i],right[i]));
          }
        return ans; 
    }
}
// @lc code=end


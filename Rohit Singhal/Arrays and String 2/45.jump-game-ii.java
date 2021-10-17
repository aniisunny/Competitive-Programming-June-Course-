/*
 * @lc app=leetcode id=45 lang=java
 *
 * [45] Jump Game II
 */

// @lc code=start
class Solution {
    public int jump(int[] nums) {
        int curReach=0;
        int maxReach=0;
        int jumps=0;
        for(int i=0;i<nums.length-1;i++)
        {
            maxReach=Math.max(i+nums[i],maxReach);
            if(i==curReach)
            {
                jumps++;
                curReach=maxReach;
            }

            
            
        }
        return jumps;
         
    }
}
// @lc code=end


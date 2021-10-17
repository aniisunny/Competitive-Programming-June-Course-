/*
 * @lc app=leetcode id=198 lang=java
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
    public int rob(int[] nums) {
        if(nums.length==0)
        {
            return 0;
        }
        else if(nums.length==1)
        {
            return nums[0];
        }
        
       int first=nums[0];
       int second=Math.max(nums[0],nums[1]);
        for(int i=2;i<nums.length;i++)
        {
           int val=Math.max(first+nums[i],second);
           first=second;
          second=val;
        }
       return second;
        
    }
}
// @lc code=end


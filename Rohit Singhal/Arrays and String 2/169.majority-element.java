/*
 * @lc app=leetcode id=169 lang=java
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
    public int majorityElement(int[] nums) {
        int count=0;
        int el=0;
        for(int i=0;i<nums.length;i++)
        {
            if(count==0)
                el=nums[i];
            
            if(el==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return el;
    }
}
// @lc code=end


/*
 * @lc app=leetcode id=334 lang=java
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
class Solution {
    public boolean increasingTriplet(int[] nums) {
         
        int min=Integer.MAX_VALUE;
        int smin=Integer.MAX_VALUE;
        for(int num: nums)
        {
            if(num<=min)
                min=num;
            
            else if(num<smin)
                smin=num;
            
            else if(num>smin)
                return true;
        }
        return false;
    }
}
// @lc code=end


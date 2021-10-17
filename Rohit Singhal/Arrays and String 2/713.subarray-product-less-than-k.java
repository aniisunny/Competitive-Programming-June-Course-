/*
 * @lc app=leetcode id=713 lang=java
 *
 * [713] Subarray Product Less Than K
 */

// @lc code=start
class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        if(k<=1)
        {
            return 0;
        }
        int ans=0;
        int i=0;
        int j=0;
         int cp=1;
        while(i<nums.length)
        {
    
          cp=cp*nums[i];
          while(cp>=k)
          {
             cp=cp/nums[j];
              j++;
          }
          ans+=i-j+1;
            i++;
          
            
        }
        return ans;
         
    }
}
// @lc code=end


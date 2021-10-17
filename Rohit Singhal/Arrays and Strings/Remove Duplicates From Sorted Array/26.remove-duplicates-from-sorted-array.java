/*
 * @lc app=leetcode id=26 lang=java
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length==0 || nums.length==1)
        {
           return nums.length; 
        }
        
        int ind=0;
       
        for(int i=0;i<nums.length-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
             
            }
            else
            {
                nums[ind]=nums[i];
              
                ind++;
            }
        }
        
        
        if(ind!=0 && nums[ind-1]!=nums[nums.length-1])
        {
            nums[ind]=nums[nums.length-1];
        }
        return ind+1;
    }
}
// @lc code=end


/*
 * @lc app=leetcode id=153 lang=java
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
    public int findMin(int[] nums) {
        int s=0;
        int e=nums.length-1;
        while(s<e)
        {
            int mid=(s+e)/2;
            if(s==e)
            {
                break;
            }
            else if(nums[mid]<nums[e])
            {
                e=mid;
            }
            else
            {
                s=mid+1;
            }
        }
        return nums[s];
    }
}
// @lc code=end


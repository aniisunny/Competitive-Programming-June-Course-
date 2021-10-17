/*
 * @lc app=leetcode id=11 lang=java
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
    public int maxArea(int[] height) {
        int max=0;
        int i=0;
        int j=height.length-1;
        while(i<j)
        {
            int temp=(j-i)*Math.min(height[i],height[j]);
            if(temp>max)
            {
                max=temp;
            }
            if(height[i]<=height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return max;
    }
}
// @lc code=end


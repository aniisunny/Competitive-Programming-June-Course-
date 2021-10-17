/*
 * @lc app=leetcode id=1465 lang=java
 *
 * [1465] Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
 */

// @lc code=start
class Solution {
    public int maxArea(int h, int w, int[] horizontalCuts, int[] verticalCuts) {
        Arrays.sort(horizontalCuts);
        Arrays.sort(verticalCuts);
       
        int maxh=horizontalCuts[0]-0;
       
        for(int i=1;i<horizontalCuts.length;i++)
        {
            maxh=Math.max(maxh,horizontalCuts[i]-horizontalCuts[i-1]);
        }
         maxh=Math.max(maxh,h-horizontalCuts[horizontalCuts.length-1]);
        
        
        int maxv=verticalCuts[0]-0;
         for(int i=1;i<verticalCuts.length;i++)
        {
            maxv=Math.max(maxv,verticalCuts[i]-verticalCuts[i-1]);
        }
         maxv=Math.max(maxv,w-verticalCuts[verticalCuts.length-1]);
        


        
        return (int)((long)maxh * maxv % 1000000007);  
    }
}
// @lc code=end


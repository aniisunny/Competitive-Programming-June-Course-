/*
 * @lc app=leetcode id=435 lang=java
 *
 * [435] Non-overlapping Intervals
 */

// @lc code=start
class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        Arrays.sort(intervals,(a,b)-> a[1]-b[1]);
        int prevEnd=intervals[0][1];
        int ans=0;
        for(int i=1;i<intervals.length;i++)
        {
            int currStart=intervals[i][0];
            if(currStart<prevEnd)
            {
                ans++;
            }
            else
            {
                prevEnd=intervals[i][1];
            }
        }
        return ans;   
    }
}
// @lc code=end


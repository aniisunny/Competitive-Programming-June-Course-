/*
 * @lc app=leetcode id=56 lang=java
 *
 * [56] Merge Intervals
 */

// @lc code=start
class Solution {
    public int[][] merge(int[][] intervals) {
        List<int[]> ans=new ArrayList<>();
        if(intervals.length==0 || intervals==null)
        {
            return ans.toArray(new int[0][]);
        }
        Arrays.sort(intervals,(a,b)->a[0]-b[0]);
        int x=intervals[0][0];
        int y=intervals[0][1];
        for(int i=1;i<intervals.length;i++)
        {
            if(y>=intervals[i][0])
            {
                y=Math.max(y,intervals[i][1]);
            }
            else
            {
                ans.add(new int[]{x,y});
                x=intervals[i][0];
                y=intervals[i][1];
            }
        }
        ans.add(new int[]{x,y});
        return ans.toArray(new int[0][]);
        
    }
}
// @lc code=end


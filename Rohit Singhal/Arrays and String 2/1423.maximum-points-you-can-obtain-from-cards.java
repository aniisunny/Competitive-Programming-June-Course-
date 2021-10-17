/*
 * @lc app=leetcode id=1423 lang=java
 *
 * [1423] Maximum Points You Can Obtain from Cards
 */

// @lc code=start
class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int tsum=0;
        int ans=0;
        for(int i: cardPoints)
        {
            tsum+=i;
        }
      
        int winsum=0;
        int n=cardPoints.length;
        int i=0;
        int j;
        for(j=0;j<n-k;j++)
        {
            winsum+=cardPoints[j];
              
        }
      
        ans=Math.max(ans,tsum-winsum);
        while(j<n)
        {
          
            winsum-=cardPoints[i++];
            winsum+=cardPoints[j++];
            ans=Math.max(ans,tsum-winsum);
        }
        return ans;
    }
}
// @lc code=end


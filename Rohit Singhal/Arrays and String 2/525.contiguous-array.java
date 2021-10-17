/*
 * @lc app=leetcode id=525 lang=java
 *
 * [525] Contiguous Array
 */

// @lc code=start
class Solution {
    public int findMaxLength(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        map.put(0,-1);
        int ans=0;
        int sum=0;
        for(int i=0;i<nums.length;i++)
        {
            sum+=(nums[i]==1) ? 1 : -1;
            if(map.containsKey(sum))
            {
                ans=Math.max(ans,i-map.get(sum));
                
            }
            else
            {
                map.put(sum,i);
            }
        }
        return ans;
        
    }
}
// @lc code=end


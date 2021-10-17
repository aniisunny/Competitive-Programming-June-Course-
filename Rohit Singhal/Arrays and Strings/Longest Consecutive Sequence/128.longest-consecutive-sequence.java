/*
 * @lc app=leetcode id=128 lang=java
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
    public int longestConsecutive(int[] nums) {
        int max=0;
        HashMap<Integer,Boolean> map=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            map.put(nums[i],true);
        }
          for(int i=0;i<nums.length;i++)
          {
              if(map.get(nums[i]))
              {
              int count=1;
              int j=nums[i];
              while(map.containsKey(++j))
              {
                  map.put(j,false);
                  count++;
              }
              int k=nums[i];
              while(map.containsKey(--k))
              {
                  map.put(k,false);
                  count++;
              }
              if(count>max)
              {
                  max=count;
              }
              }
          }
        return max;
    }
}
// @lc code=end


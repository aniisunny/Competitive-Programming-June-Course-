/*
 * @lc app=leetcode id=1 lang=java
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> map=new HashMap<>();
        int[] ans=new int[2];
        for(int i=0;i<nums.length;i++)
        {
           if(map.containsKey(target-nums[i]))
           {
               ans[0]=map.get(target-nums[i]);
               ans[1]=i;
               break;
           }
            else
            {
                map.put(nums[i],i);
            }
        }
        return ans; 
    }
}
// @lc code=end


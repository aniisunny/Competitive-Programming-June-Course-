/*
 * @lc app=leetcode id=1814 lang=java
 *
 * [1814] Count Nice Pairs in an Array
 */

// @lc code=start
class Solution {
 
    public static int rev(int n)
    {
        int ans=0;
        while(n!=0)
        {
            ans=(ans*10)+(n%10);
            n=n/10;
        }
        return ans;
    }

    public int countNicePairs(int[] nums) {
        HashMap<Integer,Integer> map=new HashMap<>();
        int ans=0;
    
        for(int i=0;i<nums.length;i++)
        {
            int temp=nums[i]-rev(nums[i]);
            if(map.containsKey(temp))
            {
                ans=(ans+map.get(temp))% 1000000007;
                map.put(temp,map.get(temp)+1);
            }
            else
            {
                map.put(temp,1);
            }
        }
        return ans;
        
    }
}
// @lc code=end


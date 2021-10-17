class Solution {
    public int rob(int[] nums) {
       
        if(nums.length == 1)
        {
            return nums[0];
        }
        
        return Math.max(robber(nums,0,nums.length-1), robber(nums,1,nums.length));
        
    }
    private int robber(int nums[], int start, int end)
    {
        int prevOne = 0, prevTwo = 0, max = 0;
        
        for(int i = start; i < end; i++)
        {
            max = Math.max(prevOne, prevTwo+ nums[i]);
            prevTwo = prevOne;
            prevOne = max;
        }
        return max;
    }
}

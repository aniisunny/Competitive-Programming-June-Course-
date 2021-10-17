class Solution {
    public int numberOfArithmeticSlices(int[] nums) {
        
        if(nums.length < 2)
        {
            return 0;
        }
        int dp[] = new int[nums.length];
        int sum = 0;
        for(int i = 2; i < dp.length;i++)
        {
            if(nums[i] - nums[i-1] == nums[i-1]- nums[i-2])
            {
                dp[i] = dp[i -1]+1;
                sum += dp[i];
            }
          
        }
        return sum;
    }
}

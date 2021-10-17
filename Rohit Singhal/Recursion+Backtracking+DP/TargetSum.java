class Solution {
    
    
//     public static int helper(int[] nums,int si,int target,int ans)
//     {
//         if(si==nums.length)
//         {
//             if(ans==target)
//                 return 1;
            
//             else
//                 return 0;
//         }
        
        
//         return helper(nums,si+1,target,ans+nums[si])+helper(nums,si+1,target,ans-nums[si]);
//     }
    //  public int findTargetSumWays(int[] nums, int S) {
    //     int[][] dp = new int[nums.length][2001];
    //     dp[0][nums[0] + 1000] = 1;
    //     dp[0][-nums[0] + 1000] += 1;
    //     for (int i = 1; i < nums.length; i++) {
    //         for (int sum = -1000; sum <= 1000; sum++) {
    //             if (dp[i - 1][sum + 1000] > 0) {
    //                 dp[i][sum + nums[i] + 1000] += dp[i - 1][sum + 1000];
    //                 dp[i][sum - nums[i] + 1000] += dp[i - 1][sum + 1000];
    //             }
    //         }
    //     }
    //     return S > 1000 ? 0 : dp[nums.length - 1][S + 1000];
    // }
    
    public int findTargetSumWays(int[] nums, int target) {
        
        int sum=0;
        int zeroes=0;
        for(int i: nums)
        {
            sum+=i;
            if(i==0)
                zeroes++;
        }
        if(sum<target)
        {
            return 0;
        }
        if((target+sum)%2!=0)
            return 0;
        
        int s1=(target+sum)/2;
        
        int[][] dp=new int[nums.length+1][s1+1];
        for(int i=0;i<=nums.length;i++)
        {
            dp[i][0]=1;
        }
        for(int i=1;i<=nums.length;i++)
        {
            for(int j=1;j<=s1;j++)
            {
                 if(nums[i-1]==0)
                    dp[i][j] = dp[i-1][j];
                else if(j < nums[i-1])
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
            }
        }
        return (int)(Math.pow(2,zeroes)*dp[nums.length][s1]);
       
        // return helper(nums,0,target,0);
        
        
    }
}

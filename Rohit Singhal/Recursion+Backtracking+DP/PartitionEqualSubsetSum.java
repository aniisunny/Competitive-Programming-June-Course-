class Solution {
    public boolean canPartition(int[] nums) {
        int sum=0;
        for(int i: nums)
        {
            sum+=i;
        }
        if(sum%2!=0)
            return false;
        
        sum=sum/2;
        int N=nums.length;
        boolean[][] dp=new boolean[N+1][sum+1];
        for(int i=0;i<=N;i++)
        {
            dp[i][0]=true;
        }
        for(int i=1;i<=sum;i++)
        {
            dp[0][i]=false;
        }
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(j-nums[i-1]>=0)
                {
                    if(dp[i-1][j-nums[i-1]])
                    {
                       dp[i][j]=true; 
                    }
                    else
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[N][sum];
        
    }
}

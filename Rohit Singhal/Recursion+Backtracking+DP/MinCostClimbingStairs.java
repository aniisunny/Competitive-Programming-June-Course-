class Solution {
    
    public int helper(int[] cost, int[] dp,int si)
    {
        if(si==0 || si==1)
        {
            dp[si]=cost[si];
            return cost[si];
        }
        if(dp[si]!=-1)
        {
            return dp[si];
        }
        dp[si]=cost[si]+Math.min(helper(cost,dp,si-1),helper(cost,dp,si-2));
        
        if(si==cost.length-1)
        {
           return Math.min(dp[si],dp[si-1]); 
        }
        else
        return dp[si];
    }
    
    public int minCostClimbingStairs(int[] cost) {
        if(cost.length==2)
        {
            return Math.min(cost[0],cost[1]);
        }
        int[] dp=new int[cost.length];
         Arrays.fill(dp,-1);
         return helper(cost,dp,cost.length-1);
         
        
        
        
    }
}

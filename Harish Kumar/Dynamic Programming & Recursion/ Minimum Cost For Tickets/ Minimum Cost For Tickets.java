class Solution {
    public int mincostTickets(int[] days, int[] costs) {
        int dp[] = new int[days.length];
        int ans = helper(days, costs, 0,dp);
        return ans;
    }
    
    private static int helper(int days[], int cost[], int i, int dp[])
    {
        if(i >= days.length)
        {
            return 0;
        }
        
        if(dp[i] > 0)
        {
            return dp[i];
        }
        
        int oneDay = cost[0] + helper(days, cost, i+1,dp);
        
        int k = i;
        
        for(; k < days.length;k++)
        {
            if(days[k] >= days[i]+7)
            {
                break;
            }
        }
        
        int sevenDay = cost[1] + helper(days, cost, k,dp);
        
        for(; k < days.length;k++)
        {
            if(days[k] >= days[i]+30)
            {
                break;
            }
        }
        
        int thirtyDay = cost[2] + helper(days, cost, k, dp);
        
        dp[i] = Math.min(oneDay, Math.min(sevenDay, thirtyDay));
        
        return Math.min(oneDay, Math.min(sevenDay, thirtyDay));
    
        
    }
}

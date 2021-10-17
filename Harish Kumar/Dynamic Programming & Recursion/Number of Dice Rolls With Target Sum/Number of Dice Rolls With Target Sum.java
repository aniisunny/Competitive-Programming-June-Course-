class Solution {
    
    private int gateWays(int d, int f, int target, int dp[][]){
    
    if(d == 0 && target == 0)
    {
        return 1;
    }
    else if(d < 0 || target < 0)
    {
        return 0;
    }
    else if(dp[d][target] != -1)
    {
        return dp[d][target];
    }
    
    int count = 0;
    
    for(int face = 1; face <= f;face++)
    {
        count += gateWays(d-1,f,target -face , dp);
        count = count % 1000000007;
    }
    
    return dp[d][target] = count;
}
    
    public int numRollsToTarget(int d, int f, int target) {
        
        int dp[][] = new int[d+1][target+1];
        
        for(int i = 0; i<= d;i++)
        {
            Arrays.fill(dp[i],-1);
        }
       
        return  gateWays(d,f,target,dp);
        
    }
}


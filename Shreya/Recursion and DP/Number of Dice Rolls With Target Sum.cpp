class Solution {
public:
    int func(int d, int f, int target,vector<vector<int>>&dp)
    {
        if(d==0 && target!=0)
        {
            return 0;
        }
        if(d==0 && target==0)
        {
            return 1;
        }
        if(d!=0 && (target<0||target==0))
        {
            return 0;
        }
        if(dp[d][target]!=-1)
        {
            return dp[d][target];
        }
        int ans = 0;
        for(int i=1; i<=f; i++)
        {
            ans += func(d-1,f,target-i,dp); 
            ans = ans % 1000000007;
        }
        dp[d][target]=ans;
        return ans % 1000000007;
        
    }
    int numRollsToTarget(int d, int f, int target) 
    {
        vector<vector<int>>dp(d+1,vector<int>(target+1,-1));
        int num = func(d,f,target,dp);
        return num;
        
    }
};
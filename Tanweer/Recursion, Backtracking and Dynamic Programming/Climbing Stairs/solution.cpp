class Solution 
{
public:
    
    int helper(vector<int>& dp, int n)
    {
        if(n<0)
        {
            return 0;
        }
        else if(n == 0)
        {
            return 1;
        }
        else if(dp[n] != -1)
        {
            return dp[n];
        }
        
        int first = helper(dp,n-1);
        int second = helper(dp,n-2);
        
        dp[n] = first + second;
        
        return dp[n];
    }
    
    int climbStairs(int n) 
    {
        vector<int> dp(n+1,-1);
        dp[0] = 1;
        return helper(dp,n);
    }
};
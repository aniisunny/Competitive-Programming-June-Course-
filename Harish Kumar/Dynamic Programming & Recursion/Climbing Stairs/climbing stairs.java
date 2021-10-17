class Solution {
    public int climbStairs(int n) {
        int dp[] = new int[n+1];
        int ans = fibo(n,dp);
        
        return ans;
    }
    public static int fibo(int n,int dp[])
    {
        if(n == 1 || n == 2)
        {
            return n;
        }
        if(dp[n] != 0)
        {
            return dp[n];
        }
        int fibo1 = fibo(n-1,dp);
        int fibo2 = fibo(n-2,dp);
        
        int ans = fibo1 + fibo2;
        dp[n] = ans;
        return ans;
    }
}

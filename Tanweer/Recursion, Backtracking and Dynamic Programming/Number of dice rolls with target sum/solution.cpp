class Solution {
public:
    int numRolls(int d, int f, int target, vector<vector<int>> &dp) 
    {
        if (target == 0 && d == 0)
        {
            return 1;
        }
        if (d < 0 || target < 0)
        {
            return 0;
        }
        if (dp[d][target] != -1)
        {
            return dp[d][target];
        }
        
        int sum = 0;
        for (int i = 1; i <= f; i++)
        {
            sum += numRolls(d - 1, f, target - i, dp);
            sum %= 1000000007;
        }
        
        dp[d][target] = sum;
        
        return dp[d][target];
    }
    int numRollsToTarget(int d, int f, int target) 
    {
        vector<vector<int>> dp(d + 1, vector<int>(target + 1, -1));
        return numRolls(d, f, target, dp);
    }
};
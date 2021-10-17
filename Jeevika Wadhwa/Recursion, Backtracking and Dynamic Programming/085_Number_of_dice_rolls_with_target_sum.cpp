class Solution {
public:
    int M = 1e9+7;
    int helper(int dices, int faces, int target, vector<vector<int>>&dp){
        if(dices == 0 && target == 0)return 1;
        else if(dices == 0 || target <=0)return 0;
        else if(dp[dices][target] != -1)
            return dp[dices][target];
        int ways = 0;
        for(int face = 1; face <= faces; face++){
            ways += helper(dices-1, faces, target-face, dp);
            ways %= M;
        }
        return dp[dices][target] = ways;
    }
    int numRollsToTarget(int d, int f, int target) {
        vector<vector<int>>dp(d+1, vector<int>(target+1, -1));
        return helper(d,f,target,dp);
    }
};

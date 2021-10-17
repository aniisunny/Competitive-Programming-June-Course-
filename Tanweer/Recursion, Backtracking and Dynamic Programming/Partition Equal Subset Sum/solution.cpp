class Solution {
public:
    bool canPartition(vector<int>& nums) 
    {
        int sum = 0;
        
        for (int i = 0 ; i<nums.size() ; i++)
        {
            sum += nums[i];
        }
        
        if(sum%2 != 0)
        {
            return false;
        }
        
        sum /= 2;
        vector<bool> dp(sum+1,false);
        dp[0] = true;
        
        for(int x : nums)
        {
            for(int i = sum ; i>=x ; i--)
            {
                dp[i] = dp[i] || dp[i-x];
            }
        }
        
        return dp[sum];
    }
};
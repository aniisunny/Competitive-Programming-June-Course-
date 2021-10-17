class Solution
{
public:
    
    int lengthOfLIS(vector<int>& nums) 
    {
        if (nums.size() == 0) 
        {
            return 0;
        }
        
        vector<int> dp(nums.size(), 1);
        int res = 1;
        
        for (int i = 1; i < nums.size(); i++)
        {
            for (int j = 0; j < i; ++j) 
            {
                if (nums[j] < nums[i]) 
                {
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            
            res = max (res, dp[i]);
        }
        
        return res;
    }
};
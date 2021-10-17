class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> with1;
        vector<int> without1;
        if(nums.size()==1)
            return nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            with1.push_back(nums[i]);
        }
         for(int i=1;i<nums.size();i++)
        {
            without1.push_back(nums[i]);
        }
        
        return max(helper(with1),helper(without1));
    }
    int helper(vector<int>& nums)
    {
        int dp[nums.size()+1];
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            dp[i+1]=max(dp[i],dp[i-1]+nums[i]);
        }
        return dp[nums.size()];
    }
};

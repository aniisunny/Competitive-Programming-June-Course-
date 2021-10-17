class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)
            return 0;
        int dp[nums.size()];
        dp[0]=0;
        dp[1]=0;
        int c=0; //count
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
                dp[i]=1+dp[i-1];
            else
                dp[i]=0;
            c+=dp[i];
        }
        return c;
        
    }
};

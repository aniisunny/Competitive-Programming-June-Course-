class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto x:nums)
            sum+=x;
        if(sum%2!=0)  // if sum is odd, no partition is possibe to equal sum
            return 0;
        else
        {
            return subsetSum(nums,sum/2);
        }
    }
    bool subsetSum(vector<int>& nums, int sum)
    {
        int m=nums.size();
        int n=sum+1;
        int dp[m][n];
        for(int i=0;i<m;i++)
            dp[i][0]=1;
        for(int j=1;j<n;j++)
        {
            if(j==nums[0])
                dp[0][j]=1;
            else
                dp[0][j]=0;
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(nums[i]>j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-nums[i]];
            }
        }
        return dp[m-1][n-1];
    }
};

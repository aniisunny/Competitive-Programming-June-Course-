class Solution 
{
public:
    int numberOfArithmeticSlices(vector<int>& nums) 
    {
        int count = 0, dp = 0;
        
        for(int i = 2; i<nums.size(); i++)
        {
            if(nums[i-1]*2 == nums[i-2] + nums[i])
            {
                dp += ++count;
            }
            else 
            {
                count = 0;
            }
        }
        
        return dp;
    }
};
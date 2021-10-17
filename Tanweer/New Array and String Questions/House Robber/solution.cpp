class Solution {
public:
    int rob(vector<int>& nums) 
    {
        if(nums.size() == 0)
        {
            return 0;
        }
        else if (nums.size() == 1)
        {
            return nums[0];
        }
        int first = nums[0];
        int second = max(nums[0], nums[1]);
        int val;
        for(int i = 2 ; i<nums.size() ; i++)
        {
            val = max(first + nums[i] , second);
            first = second;
            second = val;
        }
        
        return second;
    }
};
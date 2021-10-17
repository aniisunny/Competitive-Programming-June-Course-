class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        if(nums.size()<3)
        {
            return false;
        }
        int first = INT_MAX , second = INT_MAX;
        for (int x : nums)
        {
            if(x <= first)
            {
                first = x;
            }
            else if (x <= second)
            {
                second = x;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
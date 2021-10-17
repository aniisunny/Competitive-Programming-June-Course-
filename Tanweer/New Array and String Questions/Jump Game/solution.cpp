class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int maxm = 0;
        for (int i = 0 ; i<=maxm ; i++)
        {
            maxm = max(maxm, i + nums[i]);
            if(maxm>=nums.size()-1)
            {
                return true;
            }
        }
        return false;
    }
};
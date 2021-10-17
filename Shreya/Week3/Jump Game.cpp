class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int next = 0;
        for (int i=0;i<nums.size();i++)
        {
            if(next<i)
            {
                return false;
            }
            next = max(next,nums[i]+i);
        }
        return true;
    }
};
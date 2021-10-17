class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[c]==nums[i])
                continue;
            else
            {
                swap(nums[i],nums[c+1]);
                c=c+1;
            }
        }
        return c+1;
    }
};

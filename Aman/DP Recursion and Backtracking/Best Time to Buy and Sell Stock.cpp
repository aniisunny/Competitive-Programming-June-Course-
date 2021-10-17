class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mpf=0,mn=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<mn)
                mn=nums[i];
            else
                mpf=max(mpf,nums[i]-mn);
        }
        return mpf;
    }
};

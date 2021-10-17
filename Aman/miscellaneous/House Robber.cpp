class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0], nums[1]);
        nums[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            nums[i]=max(nums[i]+nums[i-2],nums[i-1]);
        }
        return nums[n-1];
    }
};

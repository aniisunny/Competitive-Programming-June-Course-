class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];
        int curr = maxi;
        for(int i=1;i<nums.size();i++)
        {
            curr = max(nums[i],nums[i]+curr);
            maxi =max(maxi,curr);
        }
        return maxi;
    }
};
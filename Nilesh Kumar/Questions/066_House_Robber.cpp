/*
class Solution {
public:
    int rob(vector<int>& nums, int i=0) {
        if(i>=nums.size()) return 0;
        return max(rob(nums, i+1), nums[i]+rob(nums, i+2));
    }
};
*/

class Solution {
public:
    int rob(vector<int>& nums, int i=0) {
        if(nums.size()==0) return 0;
        else if(nums.size()==1) return nums[0];
        nums[1] = max(nums[0], nums[1]);
        for(int i=2; i<nums.size(); i++) {
            nums[i] = max(nums[i-1], nums[i-2]+nums[i]);
        }
        return nums[nums.size()-1];
    }
};
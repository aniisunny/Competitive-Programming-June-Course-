class Solution {
public:
    int rob(vector<int>& nums) {
        int i{nums[0]};int e{};
        for (int k = 1; k<nums.size(); k++) {
            int tmp = i;
            i = nums[k] + e;
            e = max(tmp, e);
        }
        return max(i,e);
    }
};
class Solution {
public:
    int bound(vector<int>nums, int bound){
        int count = 0, ans = 0;
        for(auto num:nums){
            count = num<=bound?count+1:0;
            ans += count;
        }
        return ans;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return bound(nums, right) - bound(nums, left-1);
    }
};

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        while(k--){
            nums.insert(nums.begin(),nums[nums.size()-1]);
            nums.pop_back();
        }
    }
};
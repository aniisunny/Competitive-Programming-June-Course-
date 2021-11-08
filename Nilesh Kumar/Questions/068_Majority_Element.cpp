class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mj_elem;
        int count = 0;
        for(int i=0;i<nums.size(); i++) {
            if(count==0) {
                mj_elem = nums[i];
                count++;
            }
            else if(nums[i]==mj_elem) count++;
            else count--;
        }
        return mj_elem;
    }
};
class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        
        int m=0;
        int n=nums.size();
        for(int i=0;i<n-2;i++) // for(int i=0;i<nums.size()-2;i++) -> does not work, as nums.size() returns usingned which may cause overflow with -2
        {
            m=max(m,nums[i]);
            if(m>nums[i+2])
                return false;
        }
        return true;
    }
};

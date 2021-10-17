class NumArray {
public:
    vector<int>a;
    NumArray(vector<int>& nums) {
        a.resize(nums.size());
        a[0] = nums[0];
        for(int i = 1; i<nums.size(); i++)
            a[i] = a[i-1]+nums[i];
    }
    
    int sumRange(int left, int right) {
        if(left == 0)return a[right];
        return a[right] - a[left-1];
    }
};

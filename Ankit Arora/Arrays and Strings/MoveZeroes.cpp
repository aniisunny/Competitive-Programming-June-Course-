class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0 , j=0 ;
        int size = nums.size();
        while(j<size)
        {
            if(nums[j] != 0)
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }

    }
};

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0 , j=0;
        int size = nums.size();
        vector<int>ans;
        while(j<size)
        {
            if(nums[j]==val)
            {
                j++;
            }
            else
            {
                swap(nums[i],nums[j]);
                ans.push_back(nums[j]);
                i++;
                j++;

            }

        }
        return ans.size();

    }
};

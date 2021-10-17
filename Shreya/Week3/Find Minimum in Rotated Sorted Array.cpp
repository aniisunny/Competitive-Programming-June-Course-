class Solution {
public:
    int findMin(vector<int>& nums) {
        int x= *min_element(nums.begin(),nums.end());
        return x;
        /*
        int left{};
        int right = nums.size()-1;
        if (nums[right] > nums[left])
        {
            return nums[left];
        }
        while ((right - left) > 1)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] > nums[left] && nums[mid] > nums[right])
            {
                left = mid;
            }
            else if(nums[mid] < nums[left] && nums[mid] < nums[right])
            {
                right = mid;
            }
        }
        
        return nums[right];
        */
        
    }
};
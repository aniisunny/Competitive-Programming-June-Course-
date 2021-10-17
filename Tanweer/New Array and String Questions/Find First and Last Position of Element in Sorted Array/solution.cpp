class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int l = 0 , r = nums.size()-1;
        vector<int> vec(2,-1);
        if(nums.size() == 0)
        {
            return vec;
        }
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(nums[mid] == target && mid == 0)
            {
                vec[0] = mid;
                break;
            }
            else if(nums[mid] == target && nums[mid-1] != target)
            {
                vec[0] = mid;
                break;
            }
            else if(nums[mid] == target && nums[mid-1] == target)
            {
                r = mid-1;
            }
            else if(nums[mid]<target)
            {
                l = mid+1;
            }
            else if (nums[mid]>target)
            {
                r = mid-1;
            }
        }
        l = 0;
        r = nums.size()-1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(nums[mid] == target && mid == nums.size()-1)
            {
                vec[1] = mid;
                break;
            }
            else if(nums[mid] == target && nums[mid+1] != target)
            {
                vec[1] = mid;
                break;
            }
            else if(nums[mid] == target && nums[mid+1] == target)
            {
                l = mid+1;
            }
            else if(nums[mid]<target)
            {
                l = mid+1;
            }
            else if (nums[mid]>target)
            {
                r = mid-1;
            }
        }
        return vec;
    }
};
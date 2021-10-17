class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        if(nums.size() == 1)
        {
           return nums[0];
        }
        else if(nums[0]<nums[nums.size()-1])
        {
            return nums[0];
        }
        else
        {
            int l = 0 , r = nums.size()-1;
            while((r-l)>1)
            {       
                int mid = l+ (r - l)/2;
                if(nums[mid] >= nums[l])
                    l = mid;
                else 
                    r = mid;
            }
            return nums[r];
        }    
    }
};
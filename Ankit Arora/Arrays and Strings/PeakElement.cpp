class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size();
        int start = 0;
        int end = size-1;
        if(start==end) return start;
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(mid>0 and mid<size-1)
            {
                if(nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1]) return mid;
                else if (nums[mid]>nums[mid-1]) start = mid+1;
                else end = mid-1;
            }
            else if(mid==0)
            {
                if(nums[0]>nums[1]) return 0;
                else return 1;
            }
            else if(mid==size-1)
            {
                if(nums[size-1]>nums[size-2]) return size-1;
                else
                    return size-2;
            }
        }
         return -1;

    }
};

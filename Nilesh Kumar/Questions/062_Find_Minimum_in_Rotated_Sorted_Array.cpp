class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0, high=n-1;
        while(low<=high) {
            int mid=low+(high-low)/2;
            if((mid-1<0 || nums[mid-1]>nums[mid]) && (mid+1==n||nums[mid+1]>nums[mid])) return nums[mid];
            else if(nums[mid]<=nums[high]) {
                high = mid-1;
            }
            else low=mid+1;
        }        
        return -1;
    }
};
class Solution {
    public int numSubarrayBoundedMax(int[] nums, int left, int right) {
        
        int si = 0;
        int ei = 0;
        
        int n = nums.length;
        int ans = 0;
        int prevCount = 0;
        
        while(ei < n)
        {
            if(left <= nums[ei] && nums[ei] <= right)
            {
                prevCount = ei - si +1;
                ans += prevCount;
            }
            else if(nums[ei] < left)
            {
                ans += prevCount;   
            }
            else
            {
                si = ei +1;
                prevCount = 0;
            }
            
            ei++;
        }
        return ans;
    }
}

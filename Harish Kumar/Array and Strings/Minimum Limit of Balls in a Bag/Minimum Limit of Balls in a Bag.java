class Solution {
    public boolean check(int mid, int [] nums, int maxOperations)
    {
        for(int i = 0; i < nums.length; i++)
        {
            maxOperations -= nums[i]/mid;
            if(nums[i] % mid == 0) maxOperations++;
            
        }
        return maxOperations >= 0;
    }
    public int minimumSize(int[] nums, int maxOperations) {
        int start = 1;
        int end = 1000_000_000;
        
        
        while(start < end)
        {
            int mid = start + (end -start) /2;
            
            if(check(mid, nums, maxOperations ))
            {
                
                end = mid;
            }
            else
            {
                start = mid+1;
            }
        }
        return start;
    }
}

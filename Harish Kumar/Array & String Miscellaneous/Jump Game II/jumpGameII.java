class Solution {
    public int jump(int[] nums) {
    
       int count  = 0;
        int curVal = 0;
        int max = 0;
        
        for(int i = 0;i < nums.length-1;i++)
        {
            if(i+nums[i] > max)
            {
                max = i+nums[i];
            }
            if(i == curVal)
            {
                count++;
                curVal = max;
            }
        }
        return count;
        
    }
}


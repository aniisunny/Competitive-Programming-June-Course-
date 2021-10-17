class Solution {
    public boolean isIdealPermutation(int[] nums) {
        if(nums.length<=2)
        {
            return true;
        }
        int max=nums[0];
        int i=0;
        int j=2;
        while(j<nums.length)
        {
            if(nums[j]<max)
            {
                return false;
            }
            i++;
            max=Math.max(max,nums[i]);
            
            j++;
        }
        return true;
        
    }
}

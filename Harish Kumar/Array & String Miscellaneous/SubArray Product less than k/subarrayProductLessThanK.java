class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        if( k <= 1)
        {
            return 0;
        }
        int count = 0;
        
        int i = 0;
        int j = 0;
        int cp = 1;
       for(j = 0;j< nums.length;j++)
       {
           cp = cp*nums[j];
           while(cp >= k)
           {
               cp = cp/nums[i];
               i++;
               
           }
           count += (j -i) +1;
       }
        return count;
    }
}

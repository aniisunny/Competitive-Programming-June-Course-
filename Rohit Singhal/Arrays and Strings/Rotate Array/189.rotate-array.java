/*
 * @lc app=leetcode id=189 lang=java
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
    public void reverse(int[] arr,int si,int ei)
    {
        int mid=(si+ei)/2;
        while(si<=mid)
        {
            int temp=arr[si];
            arr[si]=arr[ei];
            arr[ei]=temp;
            si++;
            ei--;
        }
    }
    public void rotate(int[] nums, int k) {
        while(k>nums.length)
        {
            k=k-nums.length;
        }
        if(nums.length<=1 || k==0 || k==nums.length)
        {
            return;
        }
        
       
        
         reverse(nums,0,nums.length-k-1);
        reverse(nums,nums.length-k,nums.length-1); 
        
        
        reverse(nums,0,nums.length-1);
    }
}
// @lc code=end


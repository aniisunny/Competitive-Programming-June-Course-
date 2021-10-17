class Solution {
    public void rotate(int[] nums, int k) {
        
        k = k%nums.length;
        
        reverse(nums,0,nums.length-1-k);
        reverse(nums,nums.length-k,nums.length-1);
        reverse(nums,0,nums.length-1);
        
        
    }
    public static void reverse(int arr[],int low,int high)
    {
        int i = low;
        int j = high;
        
        while(i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
            i++;
            j--;
        }
    }
}

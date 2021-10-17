class Solution {
    public static int reverse(int val)
    {
        if(val == 0)
        {
            return 0;
        }
       
        int rev=0;;
        while(val !=0)
        {
             int rem = val%10;
            
            rev = rev*10+rem;
            val = val/10;
          
        }
        return rev;
    }
    public int countNicePairs(int[] nums) {
        
        HashMap<Integer, Integer> map = new HashMap<>();
        int ans = 0;
        for(int i = 0;i < nums.length;i++)
        {
            int temp = nums[i] - reverse(nums[i]);
            
            if(map.containsKey(temp))
            {
                ans = (ans+map.get(temp)) % 1000000007;
                map.put(temp, map.get(temp)+1);
            }
            else
            {
                map.put(temp,1);
            }
        }
        return ans;
        
    }
}



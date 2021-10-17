class Solution {
    public int majorityElement(int[] nums) {
        
        int count  = 0;
        int val = 0;
        for(int i : nums)
        {
            if(count == 0)
            {
                val = i;
            }
            if(i == val)
            {
                count +=1;
            }
            else
            {
                count -= 1;
            }
        }
        return val;
        
    }
}

// class Solution {
//     public static int majority(int nums[])
//     {
//         int count  = 1;
//         int val = nums[0];
        
//         for(int i = 1;i<nums.length;i++)
//         {
           
//             if(val == nums[i])
//             {
//                 count++;
//             }
//             else
//             {
//                 count--;
//             }
//             if(count == 0)
//             {
//                 val = nums[i];
//                 count = 1;
//             }
            
//         }
//         return val;
//     }
//     public int majorityElement(int[] nums) {
        
//         int val = majority(nums);
        
//         int count  = 0;
//         for(int i = 0;i < nums.length;i++)
//         {
//             if(val == nums[i])
//             {
//                 count++;
//             }
//         }
        
//         if(count > nums.length/2)
//         {
//             return val;
//         }
//         else
//         {
//             return -1;
//         }
       
//     }
// }

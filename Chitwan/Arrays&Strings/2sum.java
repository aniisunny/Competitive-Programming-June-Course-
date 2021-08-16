import java.util.*;
class Solution {
    public int[] twoSum(int[] nums, int target) 
    {
      
      //Hashmap Filling
        HashMap<Integer,Integer> map = new HashMap();
        for(int i=0;i<nums.length;i++)
        {
            map.put(nums[i] ,i);
        }
      
        //Searching for the element in HM
         for(int i=0;i<nums.length;i++){ //2 7 11 15  target = 4
            int num = nums[i]; 
            int rem = target - num; 
            if(map.containsKey(rem)){
                int index = map.get(rem);
                if(index==i)continue; //exception case
                return new int[]{i,index}; 
            }  
        }
        
        return new int[]{};
        
    }
}

class Solution {
    public int subarraySum(int[] nums, int k) {
        
        int ans=0;
        int sum=0;
        HashMap<Integer,Integer> map=new HashMap<>();
        map.put(0,1);
        for(int i=0;i<nums.length;i++)
        {
            sum+=nums[i];
            if(map.containsKey(sum-k))
            {
                ans+=map.get(sum-k);
            }
            
            if(map.containsKey(sum))
            {
            map.put(sum,map.get(sum)+1);
            }
            else
            {
                map.put(sum,1);
            }
            
            
        }
        return ans;
        
        
        
//         int ans=0;
//         for(int i=0;i<nums.length;i++)
//         {
//             int temp=0;
//             for(int j=i;j<nums.length;j++)
//             {
//                 temp+=nums[j];
//                 if(temp==k)
//                 {
//                     ans++;
                
//                 }
//             }
//         }
//         return ans;
        
    }
}

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        
       Map<Integer,Integer> map = new HashMap<>();
        
        for(int x : nums1)
        {
            if(map.containsKey(x))
            {
                map.put(x,map.get(x)+1);
            }
             else
            {
                map.put(x,1);
            }
            
           
        }
        ArrayList<Integer> ans = new ArrayList<>();
        
        for(int i = 0;i < nums2.length;i++)
        {
           if(map.containsKey(nums2[i]) && map.get(nums2[i]) >= 1)
           {
               ans.add(nums2[i]);
               
               map.put(nums2[i],map.get(nums2[i])-1);
           }
            
        }
        
        int arr[] = new int [ans.size()];
        for(int i=0;i<ans.size();i++)
        {
            arr[i]=ans.get(i);
        }
        
        return arr;
        
    }
}

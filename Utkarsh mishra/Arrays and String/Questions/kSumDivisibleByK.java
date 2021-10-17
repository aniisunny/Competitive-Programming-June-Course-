class Solution {
    public int subarraysDivByK(int[] nums, int k) {
    HashMap<Integer,Integer> map=new HashMap<>();
        int sum=0;
        int c=0;
        map.put(0,1);
        for(int i:nums)
        { 
            sum+=i;
            int r=sum%k;
            if(r<0)
                r+=k;
            if(map.containsKey(r))
                c+=map.get(r);
    map.put(r,map.getOrDefault(r,0)+1);
                
                
        }return c;
        
    }
}

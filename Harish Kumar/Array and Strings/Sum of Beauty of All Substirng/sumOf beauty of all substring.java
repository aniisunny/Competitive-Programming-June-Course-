class Solution {
    public int beautySum(String s) {
        int n = s.length();
        
        int ans = 0;
        
        for(int i = 0; i<n;i++)
        {
            HashMap<Character ,Integer>map = new HashMap<>();
            for(int j = i;j < n;j++)
            {
                if(map.containsKey(s.charAt(j)))
                {
                    map.put(s.charAt(j),map.get(s.charAt(j))+1);
                }
                else
                {
                    map.put(s.charAt(j),1);
                }
                
                int mostFreq = 0;
                int leastFreq = Integer.MAX_VALUE;
                for(Map.Entry<Character,Integer> e:map.entrySet())
                {
                    int temp=e.getValue();
                     mostFreq=Math.max(mostFreq,temp);
                     leastFreq=Math.min(leastFreq,temp);
                }
                ans += mostFreq-leastFreq;
            }
        }
        return ans;
    }
}

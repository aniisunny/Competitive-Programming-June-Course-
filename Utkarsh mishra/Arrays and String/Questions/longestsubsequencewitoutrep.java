class Solution {
    public int lengthOfLongestSubstring(String s) {
        int ans=0;
        int i=-1,j=-1;
        while(true)
        {
            HashMap<Character,Integer> map=new HashMap<>();
             boolean a=false;
            
                  boolean b=false;
            
            while(i<s.length()-1)
            {a=true;
                i++;
                char c=s.charAt(i);
                map.put(c,map.getOrDefault(c,0)+1);
                if(map.get(c)==2)
                    break;
                else
                {int len=i-j;
                 if(len>ans)
                 {
                     ans=len;
                 }
           
                }}
             
            while(j<i)
            {
                b=true;
                j++;
                char c=s.charAt(j);
               if(map.containsKey(c))
                map.put(c,map.get(c)-1);
                if(map.containsKey(c) && map.get(c)==1)
                    break;
                
            }
             if(a==false && b==false)
                 break;
             
                    
            
        }
        
        return ans;
    }
}

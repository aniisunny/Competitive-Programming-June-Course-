class Solution {
    public int maxVowels(String s, int k) {
         HashSet<Character> set=new HashSet<>();
        set.add('a');
        set.add('e');
        set.add('i');
        set.add('o');
        set.add('u');
        int ans=0;
        int count=0;
        int i=0;
        while(i<s.length())
        {
            if(i>=k)
            {
                ans=Math.max(ans,count);
                if(set.contains(s.charAt(i-k)))
                {
                    count--;
                }
                if(set.contains(s.charAt(i)))
                {
                    count++;
                }
                ans=Math.max(ans,count);
            }
            else
            {
                if(set.contains(s.charAt(i)))
                {
                    count++;
                }
                
            }
            i++;
            
        }
        if(k==s.length())
            ans=count;
        return ans;
        
    }
}

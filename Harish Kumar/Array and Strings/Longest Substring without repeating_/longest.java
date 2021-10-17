class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.equals(" "))
        {
            return 1;
        }
        int ans = 0;
        int i = -1;
        int j = -1;
        HashMap<Character, Integer>mp = new HashMap<>();
        while(true)
        {
            boolean f1 = false;
            boolean f2 = false;
            // acquire
            while(i < s.length()-1)
            {
                f1 = true;
                i++;
                char c = s.charAt(i);
                mp.put(c,mp.getOrDefault(c,0)+1);
                
                if(mp.get(c)==2)
                {
                    break;
                }
                else
                {
                    int len = i - j;
                    if(len > ans)
                    {
                        ans = len;
                    }
                }
            }
            
            // release
            while(j<i)
            {
                f2 = true;
                j++;
                char ch = s.charAt(j);
                mp.put(ch,mp.get(ch)-1);
                
                if(mp.get(ch)== 1)
                {
                    break;
                }
            }
            if(f1 == false && f2 == false)
            {
                break;
            }
        }
        return ans;
    }
}

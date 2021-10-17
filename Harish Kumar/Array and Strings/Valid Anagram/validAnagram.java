class Solution {
    public boolean isAnagram(String s, String t) {
        
        if(s.length() != t.length())
        {
            return false;
        }
        
        char a[] = s.toCharArray();
        char b[] = t.toCharArray();
      
        Arrays.sort(a);
        Arrays.sort(b);
        
        int i = 0;
        
        while(i < a.length)
        {
            if(a[i]== b[i])
            {
                i++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
}

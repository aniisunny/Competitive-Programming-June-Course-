class Solution {
    private boolean isVowel(char c)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
        {
            return true;
        }
        return false;
    }
    public int maxVowels(String s, int k) {
        
        int length = 0;
        int count  = 0;
        int i = 0;
        
        while( i < k)
        {
            if(isVowel(s.charAt(i)))
            {
                count++;
            }
            i++;
        }
        
        for(; i < s.length();i++)
        {
            if(count > length)
            {
                length = count;
            }
            if(isVowel(s.charAt(i)))
            {
                count++;
            }
            if(isVowel(s.charAt(i -k)))
            {
                count--;
            }
        }
         if(count > length)
            {
                length = count;
            }
        return length;
    }
}

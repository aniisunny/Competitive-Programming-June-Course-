class Solution {
  
    public String findLongestWord(String s, List<String> dictionary) {
        
        String ans = "";
        
        for(String str : dictionary)
        {
            if(isSubsequence(s,str)){
                if(str.length() > ans.length() || str.length() == ans.length() && str.compareTo(ans) < 1)
                {
                    ans = str;
                }
                
            }
        }
        return ans;
    }
    
      public static boolean isSubsequence(String s, String d)
    {
        int i = 0;
        int j = 0;
        if(d.length() > s.length())
        {
            return false;
        }
        while(i < s.length() && j < d.length())
        {
            if(s.charAt(i)==d.charAt(j))
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
          if(j == d.length())
          {
              return true;
          }
            
    }
}

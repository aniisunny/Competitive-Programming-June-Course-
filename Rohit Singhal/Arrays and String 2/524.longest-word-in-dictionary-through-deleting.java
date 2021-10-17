/*
 * @lc app=leetcode id=524 lang=java
 *
 * [524] Longest Word in Dictionary through Deleting
 */

// @lc code=start
class Solution {
    public static boolean isSubsequence(String s,String d)
    {
       if(d.length()>s.length())
           return false;
        
        int i=0;
        int j=0;
        while(i<s.length() && j<d.length())
        {
            if(s.charAt(i)==d.charAt(j))
                j++;
            
            i++;
        }
        return j==d.length();
         
    }
    public String findLongestWord(String s, List<String> dictionary) {
       // Collections.sort(dictionary,(a,b)->a.length()==b.length() ? a.compareTo(b) : b.length()-a.length());
       
       String result="";
       for(String d: dictionary)
       {
           if(isSubsequence(s,d))
           {
               if(d.length()>result.length())
                   result=d;
               
               else if(d.length()==result.length())
               {
                   if(d.compareTo(result)<0)
                       result=d;
               }
           }
       }
       return result; 
    }
}
// @lc code=end


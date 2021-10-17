class Solution {
    public boolean isAnagram(String s, String t) {
        int b=0;
        if(s.length()!=t.length()){
            return false;}
         int[] a=new int[26];
        for(char c:s.toCharArray()){
            a[c -'a']++;}
        
        for(char c:t.toCharArray()){
           a[c -'a']--;}
        
        for(int i=0;i<26;i++)
        {
            if(a[i]!=0)
                return false;
         }
         
        
    
        return true;
        
        }
}

class Solution {
    public static int palindrome(String s, int left, int right)
    {
        int i = left;
        int j = right;
        
        while(i >= 0 && j < s.length() && s.charAt(i) == s.charAt(j))
        {
            i--;
            j++;
        }
        int ans = j -i -1;
       
        return  ans;
    }
    public String longestPalindrome(String s) {
        if(s == null || s.length() < 1)
        {
            return "";
        }
        
        int start = 0,end = 0;
        for(int i = 0;i<s.length();i++)
        {
            int odd = palindrome(s,i,i);
            int even = palindrome(s,i,i+1);
            
            int len = Math.max(odd,even);
            
            if(len > end - start)
            {
                start = i-(len - 1)/2;
                end = i+len/2;
            }
        }
        return s.substring(start,end+1);
    }
}

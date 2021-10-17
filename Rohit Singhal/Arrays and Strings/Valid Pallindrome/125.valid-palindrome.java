/*
 * @lc app=leetcode id=125 lang=java
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
    public boolean isPalindrome(String s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j)
        {
            char c1=s.charAt(i);
            char c2=s.charAt(j);
            if(!((c1>=97 && c1<=122) || (c1>=65 && c1<=90) || (c1>=48 && c1<=57)))
            {
                System.out.println(s.charAt(i));
                i++;
            }
             // 
            
           else if(!((c2>=97 && c2<=122) || (c2>=65 && c2<=90)|| (c2>=48 && c2<=57)))
            {
                System.out.println(s.charAt(j));
                j--;
            }
           
            else if(Character.toUpperCase(s.charAt(i))==Character.toUpperCase(s.charAt(j)))
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
        
    }
}
// @lc code=end


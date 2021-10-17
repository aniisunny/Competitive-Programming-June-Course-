/*
 * @lc app=leetcode id=344 lang=java
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
    public void reverseString(char[] s) {
        int l=s.length-1;
        int i=0;
        while(i<l)
        {
           char temp= s[i];
            s[i]=s[l];
            s[l]=temp;
            i++;
            l--;
        } 
    }
}
// @lc code=end


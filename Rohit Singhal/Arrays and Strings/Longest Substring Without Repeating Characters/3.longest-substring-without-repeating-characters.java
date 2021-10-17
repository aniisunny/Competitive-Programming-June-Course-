/*
 * @lc app=leetcode id=3 lang=java
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
    public int lengthOfLongestSubstring(String s) {
        if(s.length()==0)
        {
            return 0;
        }
        
        HashMap<Character,Integer> map=new HashMap<>();
        int l=0;
        int r=0;
        int max=Integer.MIN_VALUE;
        while(r<s.length())
        {
            if(map.containsKey(s.charAt(r)) && map.get(s.charAt(r))>=l)
            {
                l=map.get(s.charAt(r))+1;
            }
           
            
                map.put(s.charAt(r),r);
            
            
            int len=(r-l)+1;
            if(len>max)
            {
                max=len;
            }
            r++;
        }
        return max;
    }
}
// @lc code=end

